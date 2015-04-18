#include "BasicInstructionGenerator.h"


#include "llvm/Analysis/Passes.h"
#include "llvm/ExecutionEngine/ExecutionEngine.h"
#include "llvm/ExecutionEngine/JIT.h"
#include "llvm/IR/DataLayout.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Verifier.h"
#include "llvm/PassManager.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Transforms/Scalar.h"
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>

#include "llvm/IR/Type.h"


Value* BasicInstructionGenerator::createDeclaration(std::string varName, Type *type, BasicBlock *b) {
	IRBuilder<> builder;
	builder.setInsertPoint(b);

	return  builder.CreateAlloca(type, "", varName);
}


Value* BasicInstructionGenerator::createAllocOfArray(Type *type, BasicBlock *b) {
	IRBuilder<> builder;
	builder.setInsertPoint(b);

	Value* v =  b.CreateAlloca(type, "", varName);

	return builder.CreateLoad(v, "");
}

Value* BasicInstructionGenerator::createAffectation(Value *target, Value *val, BasicBlock *b) {
	IRBuilder<> builder;
	builder.setInsertPoint(b);

	Value *v = b.CreateBitCast(val, target->getType()->getPointerELementType());

	return builder.StoreInst(v, target);
}


Value* BasicInstructionGenerator::createLoad(Value *src, BasicBlock *b) {
	IRBuilder<> builder;
	builder.setInsertPoint(b);

	return builder.CreateLoad(src);
}


Value* BasicInstructionGenerator::createGetPointerAt(Value *src, std::vector<Value*> at; BasicBlock *b) {
	IRBuilder<> builder;
	builder.setInsertPoint(b);

	at.insert(0);

	return builder.CreateGEP(src, at);
}


ReturnInst* BasicInstructionGenerator::createReturn(BasicBlock *b, Type* type = null, Value *v = null) {

	IRBuilder<> builder;
	builder.setInsertPoint(b);

	if(type == null)
		return builder.CreateRetVoid();

	if(v == null)
		return builder.CreateRet(Constant::getNullValue(type));


	Value* cast = builder.CreateBitCat(v, type)

	return builder.CreateRet(cast);
}




