/**
* Creator Hichara
*/


#ifndef BASIC_INST_GEN_KAWA
#define BASIC_INST_GEN_KAWA

#include "llvm/IR/DataLayout.h"
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


class BasicInstructionGenerator {

public:

	/**
	*  Transforme un objet LLVM::Value en un objet utilisable pour des fonctions de bases
	*/
	static Value *stripVal(Value* val, BasicBlock *b);

	/**
	*  Cree une declaration
	*/
	static Value* createDeclaration(std::string varName, Type* type, BasicBlock *b);
	
	/**
	*  
	*/
	static Value* createAffectationReg(Module *module, Value *target, Value *val, BasicBlock *b);

	/**
	*
	*/
	static Value* createAffectationObj(Module *module, Value *target, Value *val, BasicBlock *b);

	/**
	*  Cree une affectation
	*/
	static Value* createAffectation(Module *module, Value *target, Value *val, BasicBlock *b);

	/**
	*  Cree l'acces a un attribut
	*/
	static Value* createLoadAttribute(Module *module, Value *src, int attIndex, BasicBlock *b);

	/**
	* Cree un retour de valeur.
	* si type == null, return void.
	* si type != null, v == null, return null
	* si type != null, v != null, return (type)v 
	*/
	static ReturnInst* createReturn(BasicBlock *b, Type* type, Value *v);

	/**
	*  Termine une fonction par une instruction de retour null ou void
	*/
	static ReturnInst* endFunction(Function *f, BasicBlock *b);		
};


#endif