/**
* Creator Hichara
*/

#include "PrimitiveCreator.h"
#include "TypeGenerator.h"
#include "KawaEnumeration.h"


//Cree null
Value* PrimitiveCreator::createNull(Module *module) {
	return module->getOrInsertGlobal(KawaEnumeration::GLOBAL_NULL_NAME,
		 TypeGenerator::getOrCreateNullObjectType(module));
}


// Cree un entier
Value* PrimitiveCreator::create(int i, LLVMContext &context) {
	return ConstantInt::get(Type::getInt32Ty(context), i);
}

Value* PrimitiveCreator::create(char c, LLVMContext &context) {
	return ConstantInt::get(Type::getInt16Ty(context), c);
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
Value* PrimitiveCreator::create(std::string s, BasicBlock *bb) {
	IRBuilder<> builder(bb->getContext());
	builder.SetInsertPoint(bb);

  return builder.CreateGlobalStringPtr(s, "");
}

// Cree un boolean
Value* PrimitiveCreator::create(bool b, LLVMContext &context) {
	if(b)
		return ConstantInt::getTrue(context);

	return ConstantInt::getFalse(context);
}




