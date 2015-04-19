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

	std::map<KT_SimpleMethode*, Function*> functionMap;
	std::map<KT_Prototype*, Function*> prototypeMap;
	std::map<KT_Constructeur*, Function*> constructeurMap;
	std::map<KT_Class*, Type*> classMap;
	std::map<KT_Interface*, Type*> interfaceMap;

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
	Function* currentFunction();d
	BasicBlock* getCurrentBlock();
	void endCurrentFunction();
	
	// Implementer dans IR_Compiler_tool.cpp
	std::vector<KT_Class *> getAllParentClasses(KT_Class *classe);

	std::vector<KT_Interface *> getAllParentInterfaces(KT_Class* classe);
	std::vector<KT_Interface *> getAllParentInterfaces(KT_Interface* interface);

	std::vector<KT_Prototype*> getActualMethodes(KT_Class*);
	std::vector<KT_Prototype*> getActualMethodes(KT_Interface*);

	std::vector<KT_Prototype *> getPolymorphiqueMethodeFor(KT_Class* staticC, KT_Class* dynamiqueI);
	std::vector<KT_Prototype *> getPolymorphiqueMethodeFor(KT_Interface* staticC, KT_Class* dynamiqueC);
	std::vector<KT_Prototype *> getPolymorphiqueMethodeFor(KT_Interface* staticC, KT_Interface* dynamiqueI);
	std::vector<KT_Prototype *> getPolymorphiqueMethodeFor(std::vector<KT_Prototype*> s, std::vector<KT_Prototype*> d);

	// Implementer dans IR_compileradHoc.cpp
	void createAdHocTable(KT_Class *classe);
	void createAdHocTable(KT_Interface* interface);
};


#endif