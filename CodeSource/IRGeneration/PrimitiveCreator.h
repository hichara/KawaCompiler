#ifndef KAWA_GEN_PRIM_CREATOR
#define KAWA_GEN_PRIM_CREATOR

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
#include <map>
#include <string>
#include <vector>

#include "llvm/IR/Type.h"

using namespace llvm;


class  PrimitiveCreator {

public:
	static Value* create(int i, LLVMContext &context);
	static Value* create(double d, LLVMContext &context);
	static Value* create(float f, LLVMContext &context);
	static Value* create(std::string str, LLVMContext &context);
};




#endif