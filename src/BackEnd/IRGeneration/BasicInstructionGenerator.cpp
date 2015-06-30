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
#include "KawaUtilitary.h"


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

	// ----- initialisation pour l'affectation----------

	Value *newWrapper = builder.CreateAlloca(target->getType()->getPointerElementType());
	newWrapper = builder.CreateLoad(newWrapper);

//	std::vector<Constant*> initializer;
// 	Value *newWrapper = ConstantStruct::get(
//  		(StructType*)target->getType()->getPointerElementType(),
// 		 initializer);

  	builder.CreateStore(newWrapper, target);

	//--- affectation-------
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

	std::string classNameS = target->getType()->getPointerElementType()->getStructName().str();
	std::string classNameD = 	val->getType()->getPointerElementType()->getStructName().str();
	classNameS = NameBuilder::StructNameToClass(classNameS);
	classNameD = NameBuilder::StructNameToClass(classNameD);

	std::string s = NameBuilder::buildgetAdHocTableFunction(classNameS, classNameD);

	std::string varName = NameBuilder::buildFunctionIndexName(s);

	Value *adHocIndex = GlobalVariableGenerator::getOrCreateIndexOfMember(module, varName, -1);

	adHocIndex = builder.CreateLoad(adHocIndex);

	Value *newDataPtr  = builder.CreateGEP(val, indexI);
	Value *newData     = builder.CreateLoad(newDataPtr);

	Value *newTablePtr = builder.CreateGEP(val, indexII);
	Value *newTable    = builder.CreateLoad(newTablePtr);

	Function *fs = FunctionGenerator::getAdHocTableFunction(module, classNameS, classNameD);

	newTable = CallGenerator::createCallFromTable(module, fs, newTable, 
	adHocIndex, empty, b);

	newData = builder.CreateBitCast(newData, oldData->getType());

	builder.CreateStore(newTable, oldTablePtr);
	builder.CreateStore(newData, oldDataPtr);

	return target;
}


Value* BasicInstructionGenerator::createLoadAttribute(Module *module, Value *src, int attIndex, BasicBlock *b) {

	if(src == NULL) {
		KawaUtilitary::stopGenerationIR("src == NULL for instruction load attribute");
	}

	Type *tmp = src->getType();

	while(tmp->isPointerTy()) {
		tmp = tmp->getPointerElementType();
	}

	if(!tmp->isStructTy()) {
		KawaUtilitary::stopGenerationIR("class Type expected for load attribute");
	}

	IRBuilder<> builder(module->getContext());
	builder.SetInsertPoint(b);

	std::vector<Value*> indexI, indexII;	

	indexI.push_back(ConstantInt::get(Type::getInt32Ty(src->getContext()), 0));
	indexI.push_back(ConstantInt::get(Type::getInt32Ty(src->getContext()), 0));

	indexII.push_back(ConstantInt::get(Type::getInt32Ty(src->getContext()), 0));
	indexII.push_back(ConstantInt::get(Type::getInt32Ty(src->getContext()), attIndex));

	Value *att = builder.CreateGEP(src, indexI);
	att = builder.CreateLoad(att);

	att = builder.CreateGEP(att, indexII);

	att = builder.CreateLoad(att);

	return att;
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

Value* BasicInstructionGenerator::createPrint(Module *m, BasicBlock *b, Value *v) {
	Function* print = FunctionGenerator::getOrCreatePrintf(m);
	LLVMContext &context = m->getContext();

	Type *i32T    = Type::getInt32Ty(context);
	Type *i8T    = Type::getInt8Ty(context);
	Type *floatT  = Type::getFloatTy(context);
	Type *doubleT = Type::getDoubleTy(context);
	Type *charT   = Type::getInt16Ty(context);

	GlobalVariable *gv;

	if(v->getType() == i8T->getPointerTo()) {
		gv = GlobalVariableGenerator::getOrCreateFormatStringToSTRING(m);
	} else if(v->getType() == i32T) {
		gv = GlobalVariableGenerator::getOrCreateFormatIntToSTRING(m);
	} else if(v->getType() == floatT) {
		gv = GlobalVariableGenerator::getOrCreateFormatDoubleToSTRING(m);
	} else if(v->getType() == doubleT) {
		gv = GlobalVariableGenerator::getOrCreateFormatDoubleToSTRING(m);
	} else if(v->getType() == charT) {
		gv = GlobalVariableGenerator::getOrCreateFormatCharToSTRING(m);
	} else {
		gv = GlobalVariableGenerator::getOrCreateFormatObjectToSTRING(m);
	}

	IRBuilder<> builder(context);
	builder.SetInsertPoint(b);

	Value *format = builder.CreateBitCast(gv, Type::getInt8Ty(context)->getPointerTo());	

	Value *res = builder.CreateCall2(print, format, v);

	return res;
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






