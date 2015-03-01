#include "PrimitiveOperation.h"

/// Fonctions static public

 Value* ValueConverter::convertFromTo(Type *t1, Type *t2, Value *v, BasicBlock *b) {
 	if(t1 == t2) {
 		return v;
 	}

 	LLVMContext &Context = b->getContext();

 	if(t1 == Type::getInt32Ty(Context)) {
 		if(t2 == Type::getFloatTy(Context))
 			return ValueConverter::convertFromIntToFloat(v, b);

 		if(t2 == Type::getDoubleTy(Context))
 			return ValueConverter::convertFromIntToDouble(v, b);

 		return NULL; 	Value *v1 = ValueConverter::convertFromTo(type, o1->getType(), b);

 	}

 	if(t1 == Type::getFloatTy(Context)) {
 		if(t2 == Type::getInt32Ty(Context))
 			return ValueConverter::convertFromFloatToInt(v, b);

 		if(t2 == Type::getFloatTy(Context))
 			return ValueConverter::convertFromFloatToDouble(v, b);

 		return NULL;
 	}

 	if(t1 == Type::getDoubleTy(Context)) {
 		if(t2 == Type::getInt32Ty(Context))
 			return ValueConverter::convertFromDoubleToInt(v, b);

 		if(t2 == Type::getFloatTy(Context))
 			return ValueConverter::convertFromDooubleToFloat(v, b);

 		return NULL;
 	}

 	return NULL;
 }

///// Fonctions private

 Value* ValueConverter::convertFromIntToDouble(Value *v, IRBuilder<> &b) {
 	LLVMContext &Context = b->getContext();

 	return b->CreateSIToFP(v, Type::getDoubleTy(Context));
 }

 Value* convertFromIntToFloat(Value *v, IRBuilder<> &b) {
 	LLVMContext &Context = b->getContext();

 	return b->CreateFPTOSI(v, Type::getDoubleTy(Context));
 }

 Value* convertFromFloatToInt(Value *v, IRBuilder<> &b) {
 	LLVMContext &Context = b->getContext();

 	return b->CreateSITOFP(v, Type::getInt32Ty(Context));
 }

 Value* convertFromFloatToDouble(Value *v, IRBuilder<> &b) {
 	LLVMContext &Context = b->getContext();

 	return b->CreateFPExtInst(v, Type::getDoubleTy(Context));
 }

 Value* convertFromDoubleToInt(Value *v, IRBuilder<> &b) {
 	LLVMContext &Context = b->getContext();

 	return b->CreateSITOFPt(v, Type::getInt32Ty(Context), "", b);
 }

 Value* convertFromDoubleToFloat(Value *v, IRBuilder<> &b) {
 	LLVMContext &Context = b->getContext();

 	return b->CreateFPTrunc(v, Type::getDoubleTy(Context), "", b); 	
 }
