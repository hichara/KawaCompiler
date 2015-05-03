/**
* Creator Hichara
*/

#include "PrimitiveValueConverter.h"
#include "BasicInstructionGenerator.h"
#include "GlobalVariableGenerator.h"
#include "FunctionGenerator.h"
#include "CallGenerator.h"
#include "NameBuilder.h"
#include "TypeGenerator.h"


Value* BasicInstructionGenerator::createDeclaration(std::string varName, Type *type, BasicBlock *b) {
	IRBuilder<> builder(type->getContext());
	builder.SetInsertPoint(b);

	return  builder.CreateAlloca(type, NULL, varName);
}

Value* BasicInstructionGenerator::createAffectation(Module *module, Value *target, Value *val, BasicBlock *b) {
	
	Type *type = target->getType()->getPointerElementType();

	if(type->isStructTy())
		return createAffectationObj(module, target, val, b);

	return createAffectationReg(module, target, val, b);
}

Value *BasicInstructionGenerator::stripVal(Value* val, BasicBlock *b) {
	Type* type = val->getType();

	if(type->isPointerTy()) {
		if(type == Type::getInt8Ty(val->getContext())->getPointerTo())
			return val;

		type = type->getPointerElementType();
		if(type == Type::getInt16Ty(val->getContext())->getPointerTo()) {
			Type *i8 = Type::getInt8Ty(val->getContext());
			Value *v1 = new LoadInst(val, "", b);
			Value *v2 = CastInst::CreateIntegerCast(v1, i8, true, "", b);
			return v2;
		}

		if(type->isStructTy())
			return val;

		return new LoadInst(val, "", b);
	}

	return val;	
}

Value* BasicInstructionGenerator::createAffectationReg(Module *module, Value *target, Value *val, BasicBlock *b) {
	IRBuilder<> builder(module->getContext());
	builder.SetInsertPoint(b);

	Value *cast = PrimitiveValueConverter::convertFromTo(module, val,
		target->getType()->getPointerElementType(), b);

	builder.CreateStore(cast, target);

	return target;
}


Value* BasicInstructionGenerator::createAffectationObj(Module *module, Value *target, Value *val, BasicBlock *b) {
	IRBuilder<> builder(module->getContext());
	builder.SetInsertPoint(b);

	std::string className = target->getType()->getPointerElementType()->getStructName().str();

	std::vector<Value*> indexI, empty;
	indexI.push_back(ConstantInt::get(Type::getInt32Ty(target->getContext()), 0));
	indexI.push_back(ConstantInt::get(Type::getInt32Ty(target->getContext()), 0));
	Value *v1 = builder.CreateGEP(val, indexI);
	Value *data = builder.CreateLoad(v1);

	std::vector<Value*> indexII;
	indexI.push_back(ConstantInt::get(Type::getInt32Ty(target->getContext()), 0));
	indexI.push_back(ConstantInt::get(Type::getInt32Ty(target->getContext()), 1));
	Value *v2 = builder.CreateGEP(val, indexII);
	Value *table = builder.CreateLoad(v2);

	std::string s = NameBuilder::buildgetAdHocTableFunction(className, className);
	std::string varName = NameBuilder::buildFunctionIndexName(s);
	Value *adHocIndex = GlobalVariableGenerator::getIndexOfMember(module, varName);

	Function *fs = FunctionGenerator::getFunction(module, s);
	Value* newTable = CallGenerator::createMethodeCall(module, fs, val,
					 empty, adHocIndex, b);

	Value* v3 = builder.CreateGEP(target, indexI);
	Value *oldata = builder.CreateLoad(v3);
	Value *v4 = builder.CreateBitCast(data, oldata->getType());

	Value *v5 = builder.CreateGEP(target, indexII);

	builder.CreateStore(newTable, v5);
	builder.CreateStore(v4, v3);
	builder.CreateStore(newTable, table);

	return target;
}



ReturnInst* BasicInstructionGenerator::createReturn(BasicBlock *b, Type* type, Value *v) {

	IRBuilder<> builder(b->getContext());
	builder.SetInsertPoint(b);

	if(type == NULL)
		return builder.CreateRetVoid();

	if(v == NULL)
		return builder.CreateRet(Constant::getNullValue(type));


	Value* cast = builder.CreateBitCast(v, type);

	return builder.CreateRet(cast);
}




