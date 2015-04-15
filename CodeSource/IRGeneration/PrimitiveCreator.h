#ifndef PRIM_CREATOR_H
#define PRIM_CREATOR_H

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
	static Value* create(int i, LLVMContext &context);
	static Value* create(char c, LLVMContext &context);
	static Value* create(bool b, LLVMContext &context);	
	static Value* create(float f, LLVMContext &context);
	static Value* create(double d, LLVMContext &context);
	static Value* create(std::string str, LLVMContext &context);
	static Value* create(Type *t, std::string<Value *> size);
};


#endif




