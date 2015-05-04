/**
* Creator Hichara
*/

#ifndef PRIM_BIN_OP_GEN
#define PRIM_BIN_OP_GEN


#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"

#include <cctype>
#include <cstdio>
#include <string>
#include <vector>

#include "llvm/IR/Type.h"

using namespace llvm;


class PrimitiveBinaryOperationGenerator {

public:
	static Value* createAdd(Module *module, Type *type, Value *o1, Value *o2, BasicBlock *b);
	static Value* createMul(Module *module, Type *type, Value *o1, Value *o2, BasicBlock *b);
	static Value* createSub(Module *module, Type *type, Value *o1, Value *o2, BasicBlock *b);
    static Value* createDiv(Module *module, Type *type, Value *o1, Value *o2, BasicBlock *b);
    static Value* createMod(Module *module, Type *type, Value *o1, Value *o2, BasicBlock *b);
    static Value* createAnd(Module *module, Value *o1, Value *o2, BasicBlock *b);
    static Value* createXor(Module *module, Value *o1, Value *o2, BasicBlock *b);
    static Value* createSup(Module *module, Value *o1, Value *o2, BasicBlock *b);
    static Value* createInf(Module *module, Value *o1, Value *o2, BasicBlock *b);
    static Value* createSOE(Module *module, Value *o1, Value *o2, BasicBlock *b);
    static Value* createIOE(Module *module, Value *o1, Value *o2, BasicBlock *b);
    static Value*  createOr(Module *module, Value *o1, Value *o2, BasicBlock *b);
    static Value*  createEq(Module *module, Value *o1, Value *o2, BasicBlock *b);
    static Value* createNot(Module *module, Value *o1, BasicBlock *b);
};

#endif
