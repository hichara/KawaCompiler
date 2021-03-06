#include "PrimitiveOperation.h"




/// Public static 

 Value* BinaryOperationGenereter::createAdd(Type *type, Value *o1, Value *o2,  const Twine &Name="", IRBuilder *b) {

 	Value *v1 = ValueConverter::convertFromTo(type, o1->getType(), b);
 	Value *v2 = ValueConverter::convertFromTo(type, o1->getType(), b);

 	LLVMContext &Context = b->getContext();


 	if(type->getType() == Type::getInt32Ty(Context)) {
 		return b->createAdd(v1, v2, Name);
 	}

 	if(type->getType() == Type::getFloat32Ty(Context) 
 		|| type->getType() == Type::getDouble32Ty(Context)) {
 		return createFAdd(v1, v2, Name);
 	}

 	return NULL;
 }

 Value* BinaryOperationGenereter::createMul(Type *type, Value *o1, Value *o2,  const Twine &Name="", IRBuilder *b) {

 	Value *v1 = ValueConverter::convertFromTo(type, o1->getType(), b);
 	Value *v2 = ValueConverter::convertFromTo(type, o1->getType(), b);

 	LLVMContext &Context = b->getContext();


 	if(type->getType() == Type::getInt32Ty(Context)) {
 		return b->createMul(v1, v2, Name);
 	}

 	if(type->getType() == Type::getFloat32Ty(Context) 
 		|| type->getType() == Type::getDouble32Ty(Context)) {
 		return createFMul(v1, v2, Name);
 	}

 	return NULL;
 }

 Value* BinaryOperationGenereter::createSub(Type *type, Value *o1, Value *o2,  const Twine &Name="", IRBuilder *b) {

 	Value *v1 = ValueConverter::convertFromTo(type, o1->getType(), b);
 	Value *v2 = ValueConverter::convertFromTo(type, o1->getType(), b);

 	LLVMContext &Context = b->getContext();


 	if(type->getType() == Type::getInt32Ty(Context)) {
 		return b->createSub(v1, v2, Name);
 	}

 	if(type->getType() == Type::getFloat32Ty(Context) 
 		|| type->getType() == Type::getDouble32Ty(Context)) {
 		return createFSub(v1, v2, Name);
 	}

 	return NULL;
 }

 Value* BinaryOperationGenereter::createDiv(Type *type, Value *o1, Value *o2,  const Twine &Name="", IRBuilder *b) {

 	Value *v1 = ValueConverter::convertFromTo(type, o1->getType(), b);
 	Value *v2 = ValueConverter::convertFromTo(type, o1->getType(), b);

 	LLVMContext &Context = b->getContext();


 	if(type->getType() == Type::getInt32Ty(Context)) {
 		return b->createSDiv(v1, v2, Name);
 	}

 	if(type->getType() == Type::getFloat32Ty(Context) 
 		|| type->getType() == Type::getDouble32Ty(Context)) {
 		return createFSDiv(v1, v2, Name);
 	}

 	return NULL;
 }