#ifndef TYPE_GEN_H
#define TYPE_GEN_H


#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>

#include "llvm/IR/Type.h"

using namespace llvm;

class TypeGenerator {

public:
	static StructType* createClassType(Module *module,
						std::string className,
						std::vector<std::string> att_names, 
						std::vector<Type*> list_types, 
						std::vector<bool> isStatic);

	static Type* strToLLVMType(Module *module, std::string type);

	static Type* getPointerOf(Module *module, std::string, int nb);

	static Type* getMultiDimensionArray(Module *module, std::vector<char> sizes);
};


#endif


