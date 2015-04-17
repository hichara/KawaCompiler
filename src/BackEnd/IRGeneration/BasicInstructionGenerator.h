#ifndef BASIC_INST_GEN_KAWA
#define BASIC_INST_GEN_KAWA

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


class BasicInstructionGenerator {

public:
	/**
	*
	*/
	static Value* createDeclaration(std::string varName, Type* type, BasicBlock *b);
	
	/**
	* La taille de l'array est purement statique
	*/
	static Value* createAllocOfArray(Type *type, BasicBlock *b);

	/**
	*
	*/
	static Value* createAffectation(Value *target, Value *val, BasicBlock *b);

	/**
	* 
	*/
	static Value* createLoad(Value *src, BasicBlock *b);

	/**
	*
	*/
	static Value* getVariableAdresse(Function *f, std::string name);

	/**
	*
	*/
	static Value* getVariableValue(Function *f, std::string name);

	/**
	*
	*/
	static Value* createGetPointerAt(Value *target, std::vector<Value*> v;, BasicBlock *b);

	/**
	* Cree un retour de valeur.
	* si type == null, return void.
	* si type != null, v == null, return null
	* si type != null, v != null, return (type)v 
	*/
	static ReturnInst* createReturn(BasicBlock *b, Type* type = null, Value *v = null);
};


#endif