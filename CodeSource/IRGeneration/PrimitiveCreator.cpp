#include "PrimitiveOperation.h"




// Cree un entier
Value* PrimitiveCreator::create(int i, LLVMContext &context) {
	return ConstantInt::get(Type::getInt32Ty(context), i);
}


// Cree un double
Value* PrimitiveCreator::create(double d, LLVMContext &context) {
	return ConstantFp::get(Type::getDoubleTy(context), d);
}


// Cree un Float
Value* PrimitiveCreator::create(float f, LLVMContext &context) {
	return ConstantFp::get(Type::getFloatTy(context), f);
}
