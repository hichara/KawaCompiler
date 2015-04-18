#ifndef IRCOMP_H
#define IRCOMP_H


#define COMPILING_CLASS 0
#define COMPILING_INTER 1


#include "KT_Includes.h"

use namespace llvm;

class IRCompiler {

private:

	Module *IRmodule;

	LLVMContext &IRcontext;

	BasicBlock *currentBloc;

	Function *currentFunction;

	KT_Class *currentClass;

	KT_Interface *currentInterface;

	int compilingState = -1;

	std::string compilingObject;

public:

	IRCompiler(); 

	void compile(KT_Program *program);

	void compile(KT_Package *KT_Package);

	Type* compile(KT_Class *classe);

	Type* compile(KT_Interface *interface);

	Function* compile(KT_Methode *methode);

	Value* compile(KT_Print *print);

	Value* compile(KT_Block *block);

	Function *compile(KT_Prototype*);

private:

	LLVMContext& getContext();
	Module* getModule();
	Function* currentFunction();
	BasicBlock* getCurrentBlock();

	void endCurrentFunction();
};


#endif