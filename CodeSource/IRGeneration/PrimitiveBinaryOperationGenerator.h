#ifndef PRIM_BIN_OP_GEN
#define PRIM_BIN_OP_GEN


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

using namespace llvm;


class PrimitiveBinaryOperationGenerator {

public:
	static Value* createAdd(Type *type, Value *o1, Value *o2,  std::string name, BasicBlock *b);
	static Value* createMul(Type *type, Value *o1, Value *o2,  std::string name, BasicBlock *b);
	static Value* createSub(Type *type, Value *o1, Value *o2,  std::string name, BasicBlock *b);
    static Value* createDiv(Type *type, Value *o1, Value *o2,  std::string name, BasicBlock *b);
    static Value* createMod(Type *type,*Value *o1, Value *o2, std::string name, BasicBlock *b);
    static Value* createAnd(Value *o1, Value *o2, std::string name, BasicBlock *b);
    static Value* createXor(Value *o1, Value *o2, std::string name, BasicBlock *b);
    static Value* createSup(Value *o1, Value *o2, std::string name, BasicBlock *b);
    static Value* createInf(Value *o1, Value *o2, std::string name, BasicBlock *b);
    static Value* createSOE(Value *o1, Value *o2, std::string name, BasicBlock *b);
    static Value* createIOE(Value *o1, Value *o2, std::string name, BasicBlock *b);
    static Value*  createOr(Value *o1, Value *o2, std::string name, BasicBlock *b);
    static Value*  createEq(Value *o1, Value *o2, std::string name, BasicBlock *b);
    static Value* createNot(Value *o1,std::string name, BasicBlock *b);
    static Value* valToBool(Value *o1, BasicBlock *b);
};

#endif
