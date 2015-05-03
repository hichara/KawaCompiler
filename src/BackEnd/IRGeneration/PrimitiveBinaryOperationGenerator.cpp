/**
* Creator Hichara
*/


#include "PrimitiveBinaryOperationGenerator.h"
#include "FunctionGenerator.h"
#include "PrimitiveValueConverter.h"
#include "KawaUtilitary.h"

using namespace llvm;

/// Public static 
Value* PrimitiveBinaryOperationGenerator::createAdd(Module *module, Type *type, Value *o1, Value *o2, BasicBlock *b) {
 	LLVMContext &Context = b->getContext();
 	IRBuilder<> builder(Context);
 	builder.SetInsertPoint(b);


 	if(type == Type::getInt8Ty(module->getContext())) {
 		Function *f = FunctionGenerator::getOrCreateConcatFunction(module);
 		Value *v1 = PrimitiveValueConverter::convertToStr(module, o1, b);
 		Value *v2 = PrimitiveValueConverter::convertToStr(module, o2, b);

 		return builder.CreateCall2(f, v1, v2);
 	}


 	Value *v1 = PrimitiveValueConverter::convertFromTo(module, o1, type, b);
 	Value *v2 = PrimitiveValueConverter::convertFromTo(module, o2, type, b);



 	if(type == Type::getInt32Ty(Context)) {
 		return builder.CreateAdd(v1, v2, "");
 	}

 	if(type == Type::getFloatTy(Context) 
 		|| type == Type::getDoubleTy(Context)) {
 		return builder.CreateFAdd(v1, v2, "");
 	}

 	return NULL;
 }

 Value* PrimitiveBinaryOperationGenerator::createMul(Module *module, Type *type, Value *o1, Value *o2, BasicBlock *b) {

 	Value *v1 = PrimitiveValueConverter::convertFromTo(module, o1, type, b);
 	Value *v2 = PrimitiveValueConverter::convertFromTo(module, o2, type, b);

 	LLVMContext &Context = b->getContext();
 	IRBuilder<> builder(Context);
 	builder.SetInsertPoint(b);


 	if(type == Type::getInt32Ty(Context)) {
 		return builder.CreateMul(v1, v2, "");
 	}

 	if(type == Type::getFloatTy(Context) 
 		|| type == Type::getDoubleTy(Context)) {
 		return builder.CreateFMul(v1, v2, "");
 	}

 	return NULL;
 }

 Value* PrimitiveBinaryOperationGenerator::createSub(Module *module, Type *type, Value *o1, Value *o2, BasicBlock *b) {

  	Value *v1 = PrimitiveValueConverter::convertFromTo(module, o1, type, b);
 	Value *v2 = PrimitiveValueConverter::convertFromTo(module, o2, type, b);

 	LLVMContext &Context = b->getContext();
 	IRBuilder<> builder(Context);
 	builder.SetInsertPoint(b);


 	if(type == Type::getInt32Ty(Context)) {
 		return builder.CreateSub(v1, v2, "");
 	}

 	if(type == Type::getFloatTy(Context) 
 		|| type == Type::getDoubleTy(Context)) {
 		return builder.CreateFSub(v1, v2, "");
 	}

 	return NULL;
 }


 Value* PrimitiveBinaryOperationGenerator::createDiv(Module *module, Type *type, Value *o1, Value *o2, BasicBlock *b) {


  	Value *v1 = PrimitiveValueConverter::convertFromTo(module, o1, type, b);
 	Value *v2 = PrimitiveValueConverter::convertFromTo(module, o2, type, b);

 	LLVMContext &Context = b->getContext();
 	IRBuilder<> builder(Context);
 	builder.SetInsertPoint(b);


 	if(type == Type::getInt32Ty(Context)) {
 		return builder.CreateSDiv(v1, v2, "");
 	}

 	if(type == Type::getFloatTy(Context) 
 		|| type == Type::getDoubleTy(Context)) {
 		return builder.CreateFDiv(v1, v2, "");
 	}

 	return NULL;
 }


 Value* createMod(Module *module, Value *o1, Value *o2, std::string name, BasicBlock *b) {

/* 	Type *type = Type::getInt32Ty(b->getContext());

 	Value *v1 = PrimitiveValueConverter::convertFromTo(module, o1, type, b);
 	Value *v2 = PrimitiveValueConverter::convertFromTo(module, o2, type, b);

 	LLVMContext &context = b->getContext();
 	IRBuilder<> builder(context);
 	builder.SetInsertPoint(b);
*/
 	KawaUtilitary::stopGenerationIR("modulo operation not handled");

 	return NULL;
 }



Value* PrimitiveBinaryOperationGenerator::createAnd(Module *module, Value *o1, Value *o2, BasicBlock *b) {
 	KawaUtilitary::stopGenerationIR("modulo operation not handled");
 	return NULL;	
}

Value* PrimitiveBinaryOperationGenerator::createXor(Module *module, Value *o1, Value *o2, BasicBlock *b) {
 	KawaUtilitary::stopGenerationIR("modulo operation not handled");
 	return NULL;	
}

Value* PrimitiveBinaryOperationGenerator::createSup(Module *module, Value *o1, Value *o2, BasicBlock *b)  {
 	KawaUtilitary::stopGenerationIR("modulo operation not handled");
 	return NULL;	
}

Value* PrimitiveBinaryOperationGenerator::createInf(Module *module, Value *o1, Value *o2, BasicBlock *b) {
 	KawaUtilitary::stopGenerationIR("modulo operation not handled");
 	return NULL;	
}

Value* PrimitiveBinaryOperationGenerator::createSOE(Module *module, Value *o1, Value *o2, BasicBlock *b) {
 	KawaUtilitary::stopGenerationIR("modulo operation not handled");
 	return NULL;	
}

Value* PrimitiveBinaryOperationGenerator::createOr(Module *module, Value *o1, Value *o2, BasicBlock *b) {
 	KawaUtilitary::stopGenerationIR("modulo operation not handled");
 	return NULL;	
}

Value* PrimitiveBinaryOperationGenerator::createNot(Module *module, Value *o1, BasicBlock *b) {
 	KawaUtilitary::stopGenerationIR("modulo operation not handled");
 	return NULL;	
}

