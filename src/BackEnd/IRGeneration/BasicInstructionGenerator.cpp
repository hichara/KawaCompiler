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

	std::vector<Value*> indexI, indexII, empty;

	indexI.push_back(ConstantInt::get(Type::getInt32Ty(target->getContext()), 0));
	indexI.push_back(ConstantInt::get(Type::getInt32Ty(target->getContext()), 0));

	indexII.push_back(ConstantInt::get(Type::getInt32Ty(target->getContext()), 0));
	indexII.push_back(ConstantInt::get(Type::getInt32Ty(target->getContext()), 1));

	Value *oldDataPtr  = builder.CreateGEP(target, indexI);
	Value *oldData     = builder.CreateLoad(oldDataPtr);

	Value *oldTablePtr = builder.CreateGEP(target, indexII);
	Value *oldTable    = builder.CreateLoad(oldTablePtr);

	if(val->getType() == TypeGenerator::getOrCreateNullObjectType(module)->getPointerTo()) {
		Value *nullData = Constant::getNullValue(oldData->getType());
		Value *nullTable = Constant::getNullValue(oldTable->getType());

		builder.CreateStore(nullData, oldDataPtr);
		builder.CreateStore(nullTable, oldTablePtr);

		return target;
	}

	std::string className = target->getType()->getPointerElementType()->getStructName().str();
	std::string s = NameBuilder::buildgetAdHocTableFunction(className, className);
	std::string varName = NameBuilder::buildFunctionIndexName(s);
	Value *adHocIndex = GlobalVariableGenerator::getIndexOfMember(module, varName);

	Value *newDataPtr = builder.CreateGEP(val, indexI);
	Value *newData    = builder.CreateLoad(newDataPtr);

	Function *fs = FunctionGenerator::getFunction(module, s);
	Value *newTable = CallGenerator::createMethodeCall(module, fs, val,
					 empty, adHocIndex, b);

	newData = builder.CreateBitCast(newData, oldData->getType());

	builder.CreateStore(newTable, oldTablePtr);
	builder.CreateStore(newData, oldDataPtr);

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


ReturnInst* BasicInstructionGenerator::endFunction(Function *f, BasicBlock *b) {
	Type *t = f->getReturnType();

	IRBuilder<> builder(b->getContext());
	builder.SetInsertPoint(b);

	if(t == Type::getVoidTy(b->getContext()))
		return builder.CreateRetVoid();

	Constant *c = Constant::getNullValue(t);

	return builder.CreateRet(c);
}




