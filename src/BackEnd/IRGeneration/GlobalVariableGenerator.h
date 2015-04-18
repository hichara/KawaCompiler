
#ifndef GLOBAL_VARIABLE_GEN_KAWA
#define GLOBAL_VARIABLE_GEN_KAWA


#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"

#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>

using namespace llvm;

class GlobalVariableGenerator {

public:

// Cree un attribut static
static Value* getOrCreateStaticAttribut(Module *module, std::string className,
				std::string name, Type* type);

// Cree un l'index d'un attribut
static Value* createIndexOfMember(Module *module,
				std::string name, int index);

// Retourne un objet value contenant un entier
static Value* getIndexOfMember(Module *module, std::string name);


// Creee une table AdHoc
static Value* createAdHocTable(Module *module, std::string classStatic, 
				std::string classDynamic, std::vector<Function *> functions);

static Value* getAdHocTable(Module *module, std::string classStatic, 
				std::string classDynamic);
};


#endif