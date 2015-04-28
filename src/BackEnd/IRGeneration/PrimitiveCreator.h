/**
* Creator Hichara
*/

#ifndef PRIM_CREA
#define PRIM_CREA

#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>

#include "llvm/IR/Type.h"

using namespace llvm;


class  PrimitiveCreator {

public:

	static Value* createNull(LLVMContext &context);
	static Value* create(int i, LLVMContext &context);
	static Value* create(char c, LLVMContext &context);
	static Value* create(bool b, LLVMContext &context);	
	static Value* create(float f, LLVMContext &context);
	static Value* create(double d, LLVMContext &context);
	static Value* create(std::string str, BasicBlock *b);
	static Value* create(Type *t, std::vector<Value*> size);
};

#endif
