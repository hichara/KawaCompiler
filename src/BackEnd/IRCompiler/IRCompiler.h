#ifndef IRCOMP_H
#define IRCOMP_H


#define COMPILING_NONE  0
#define COMPILING_CLASS 1
#define COMPILING_INTER 2
#define COMPILING_METHO 3
#define COMPILING_CONST 4


#include "KT_Includes.h"
#include <map>

use namespace llvm;

class IRCompiler {

private:

	Module *IRmodule;

	LLVMContext &IRcontext;

	BasicBlock *currentBloc;

	Function *currentFunction;

	//Element en cours de compilation
	KT_Class *currentClass;
	KT_Interface *currentInterface;

	std::map<Value*, std::string> nameMap;

	int compilingState = COMPILING_NONE;

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