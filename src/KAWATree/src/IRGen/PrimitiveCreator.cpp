#include "PrimitiveCreator.h"




// Cree un entier
Value* PrimitiveCreator::create(int i, LLVMContext &context) {
	return ConstantInt::get(Type::getInt32Ty(context), i);
}


// Cree un double
Value* PrimitiveCreator::create(double d, LLVMContext &context) {
	return ConstantFP::get(Type::getDoubleTy(context), d);
}


// Cree un Float
Value* PrimitiveCreator::create(float f, LLVMContext &context) {
	return ConstantFP::get(Type::getFloatTy(context), f);
}

// Cree une string
Value* PrimitiveCreator::create(std::string str, LLVMContext &context) {
	 return ConstantDataArray::getString (context, str, true);
}


