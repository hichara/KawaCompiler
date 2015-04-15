#include "PrimitiveBinaryOperationGenerator.h"

#include "PrimitiveValueConverter.h"


/// Public static 

 Value* PrimitiveBinaryOperationGenerator::createAdd(Type *type, Value *o1, Value *o2,  std::string name, BasicBlock *b) {

 	Value *v1 = PrimitiveValueConverter::convertFromTo(o1->getType(), type, o1, b);
 	Value *v2 = PrimitiveValueConverter::convertFromTo(o2->getType(), type, o2, b);

 	LLVMContext &Context = b->getContext();
 	IRBuilder<> builder(Context);
 	builder.SetInsertPoint(b);


 	if(type == Type::getInt32Ty(Context)) {
 		return builder.CreateAdd(v1, v2, name);
 	}

 	if(type == Type::getFloatTy(Context) 
 		|| type == Type::getDoubleTy(Context)) {
 		return builder.CreateFAdd(v1, v2, name);
 	}

 	return NULL;
 }

 Value* PrimitiveBinaryOperationGenerator::createMul(Type *type, Value *o1, Value *o2,  std::string name, BasicBlock *b) {

 	Value *v1 = PrimitiveValueConverter::convertFromTo(o1->getType(), type, o1, b);
 	Value *v2 = PrimitiveValueConverter::convertFromTo(o2->getType(), type, o2, b);

 	LLVMContext &Context = b->getContext();
 	IRBuilder<> builder(Context);
 	builder.SetInsertPoint(b);


 	if(type == Type::getInt32Ty(Context)) {
 		return builder.CreateMul(v1, v2, name);
 	}

 	if(type == Type::getFloatTy(Context) 
 		|| type == Type::getDoubleTy(Context)) {
 		return builder.CreateFMul(v1, v2, name);
 	}

 	return NULL;
 }

 Value* PrimitiveBinaryOperationGenerator::createSub(Type *type, Value *o1, Value *o2,  std::string name, BasicBlock *b) {

 	Value *v1 = PrimitiveValueConverter::convertFromTo(o1->getType(), type, o1, b);
 	Value *v2 = PrimitiveValueConverter::convertFromTo(o2->getType(), type, o2, b);

 	LLVMContext &Context = b->getContext();
 	IRBuilder<> builder(Context);
 	builder.SetInsertPoint(b);


 	if(type == Type::getInt32Ty(Context)) {
 		return builder.CreateSub(v1, v2, name);
 	}

 	if(type == Type::getFloatTy(Context) 
 		|| type == Type::getDoubleTy(Context)) {
 		return builder.CreateFSub(v1, v2, name);
 	}

 	return NULL;
 }


 Value* PrimitiveBinaryOperationGenerator::createDiv(Type *type, Value *o1, Value *o2,  std::string name, BasicBlock *b) {

 	Value *v1 = PrimitiveValueConverter::convertFromTo(o1->getType(), type, o1, b);
 	Value *v2 = PrimitiveValueConverter::convertFromTo(o2->getType(), type, o2, b);

 	LLVMContext &Context = b->getContext();
 	IRBuilder<> builder(Context);
 	builder.SetInsertPoint(b);


 	if(type == Type::getInt32Ty(Context)) {
 		return builder.CreateSDiv(v1, v2, name);
 	}

 	if(type == Type::getFloatTy(Context) 
 		|| type == Type::getDoubleTy(Context)) {
 		return builder.CreateFDiv(v1, v2, name);
 	}

 	return NULL;
 }


 Value* createMod(Value *o1, Value *o2, std::string name, BasicBlock *b) {
 	LLVMContext &context = b->getContext();
 	IRBuilder<> builder(context);
 	builder.SetInsertPoint(b);

 	Type *type = Type::getInt32Ty(context);

 	Value *v1 = PrimitiveValueConverter::convertFromTo(type, o1)
 }


    static Value* createAnd(Value *o1, Value *o2, std::string name, BasicBlock *b);
    static Value* createXor(Value *o1, Value *o2, std::string name, BasicBlock *b);
    static Value* createSup(Value *o1, Value *o2, std::string name, BasicBlock *b);
    static Value* createInf(Value *o1, Value *o2, std::string name, BasicBlock *b);
    static Value* createSOE(Value *o1, Value *o2, std::string name, BasicBlock *b);
    static Value* createIOF(Value *o1, Value *o2, std::string name, BasicBlock *b);
    static Value*  createOr(Value *o1, Value *o2, std::string name, BasicBlock *b);
    static Value* createNot(Value *o1,std::string name, BasicBlock *b);
    static Value* ValToBool(Value *o1, BasicBlock *b);
