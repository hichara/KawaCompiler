/**
* Creator Hichara
*/

#include "PrimitiveCreator.h"
#include "PrimitiveValueConverter.h"
#include "FunctionGenerator.h"

/// Fonctions static public

Type* PrimitiveValueConverter::dominatingType(Type *t1, Type *t2) {
	Type *type = Type::getInt8Ty(t1->getContext())->getPointerTo();

	if(t1 == type || t2 == type) {
		return type;
	}

	type = Type::getDoubleTy(t1->getContext());

	if(t1 == type || t2 == type) {
		return type;
	}

	return t1;
}

 Value* PrimitiveValueConverter::convertFromTo(Module* module, Value *v, Type *ty, BasicBlock *b) {
 	Type *t1 = ty;
 	Type *t2 = v->getType();

 	if(t1 == v->getType()) {
 		return v;
 	}

 	LLVMContext &Context = b->getContext();

 	if(t1 == Type::getInt8Ty(b->getContext())->getPointerTo()) {
 		return convertToStr(module, v, b);
 	}

 	if(t1 == Type::getInt32Ty(Context)) {
 		if(t2 == Type::getFloatTy(Context))
 			return convertFromIntToFloat(v, b);

 		if(t2 == Type::getDoubleTy(Context))
 			return convertFromIntToDouble(v, b);

 		return NULL;
 	}

 	if(t1 == Type::getFloatTy(Context)) {
 		if(t2 == Type::getInt32Ty(Context))
 			return convertFromFloatToInt(v, b);

 		if(t2 == Type::getFloatTy(Context))
 			return convertFromFloatToDouble(v, b);

 		return NULL;
 	}

 	if(t1 == Type::getDoubleTy(Context)) {
 		if(t2 == Type::getInt32Ty(Context))
 			return convertFromDoubleToInt(v, b);

 		if(t2 == Type::getFloatTy(Context))
 			return convertFromDoubleToFloat(v, b);

 		return NULL;
 	}

 	return NULL;
 }

///// Fonctions private

 Value* PrimitiveValueConverter::convertFromIntToDouble(Value *v, BasicBlock *bb) {
 	LLVMContext &Context = bb->getContext();
 	IRBuilder<> b(Context);
 	b.SetInsertPoint(bb);

 	return b.CreateSIToFP(v, Type::getDoubleTy(Context));
 }

 Value* PrimitiveValueConverter::convertFromIntToFloat(Value *v, BasicBlock *bb) {
 	LLVMContext &Context = bb->getContext();
 	IRBuilder<> b(Context);
 	b.SetInsertPoint(bb);

 	return b.CreateSIToFP(v, Type::getInt32Ty(Context));
 }

 Value* PrimitiveValueConverter::convertFromFloatToInt(Value *v, BasicBlock *bb) {
 	LLVMContext &Context = bb->getContext();
 	IRBuilder<> b(Context);
 	b.SetInsertPoint(bb);

 	return b.CreateFPToSI(v, Type::getDoubleTy(Context));
 }

 Value* PrimitiveValueConverter::convertFromFloatToDouble(Value *v, BasicBlock *bb) {
 	LLVMContext &Context = bb->getContext();
 	IRBuilder<> b(Context);
 	b.SetInsertPoint(bb);

 	return b.CreateFPExt(v, Type::getDoubleTy(Context));
 }

 Value* PrimitiveValueConverter::convertFromDoubleToInt(Value *v, BasicBlock *bb) {
 	LLVMContext &Context = bb->getContext();
 	IRBuilder<> b(Context);
 	b.SetInsertPoint(bb);

 	return b.CreateSIToFP(v, Type::getInt32Ty(Context));
 }

 Value* PrimitiveValueConverter::convertFromDoubleToFloat(Value *v, BasicBlock *bb) {
 	LLVMContext &Context = bb->getContext();
 	IRBuilder<> b(Context);
 	b.SetInsertPoint(bb);

 	return b.CreateFPTrunc(v, Type::getDoubleTy(Context)); 	
 }


Value* PrimitiveValueConverter::convertToStr(Module *module, Value *o1, BasicBlock *bb) {
	LLVMContext &context = bb->getContext();
	IRBuilder<> b(context);
	b.SetInsertPoint(bb);


	Type *type = o1->getType();

	if(type == Type::getInt32Ty(context))
		return PrimitiveValueConverter::convertIntToStr(module, o1, bb);

	if(type == Type::getInt8Ty(context))
		return PrimitiveValueConverter::convertCharToStr(module, o1, bb);

	if(type == Type::getInt8Ty(context)->getPointerTo())
		return o1;

	if(type == Type::getDoubleTy(context))
		return PrimitiveValueConverter::convertDoubleToStr(module, o1, bb);

	std::string s = "[object]";
	return PrimitiveCreator::create(s, bb);
}



Value* PrimitiveValueConverter::convertIntToStr(Module *module, Value *o1, BasicBlock *bb) {
	Function *f = FunctionGenerator::getOrCreateIntToStrFunction(module);

	return CallInst::Create(f, o1, "", bb);
}

Value* PrimitiveValueConverter::convertDoubleToStr(Module *module, Value *o1, BasicBlock *bb) {
	Function *f = FunctionGenerator::getOrCreateIntToStrFunction(module);

	return CallInst::Create(f, o1, "", bb);
}

Value* PrimitiveValueConverter::convertCharToStr(Module *module, Value *o1, BasicBlock *bb) {
	Function *f = FunctionGenerator::getOrCreateCharToStrFunction(module);

	return CallInst::Create(f, o1, "", bb);
}



