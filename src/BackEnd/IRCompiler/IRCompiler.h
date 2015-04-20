#ifndef IRCOMP_H
#define IRCOMP_H




#define COMPILING_NONE  0
#define COMPILING_CLASS 1
#define COMPILING_INTER 2
#define COMPILING_METHO 3
#define COMPILING_CONST 4


#include <map>

#include "IRGen_includes.h"
#include "KT_includes.h"


using namespace llvm;

class IRCompiler {

private:

	Module *IRmodule;

	LLVMContext &IRcontext = getGlobalContext();

	BasicBlock *currentBloc;

	Function *currentFunction;

	//Element en cours de compilation
	KT_Class *currentClass;
	KT_Interface *currentInterface;

	std::map<KT_SimpleMethod*, Function*> functionMap;
	std::map<KT_Prototype*, Function*> prototypeMap;
	std::map<KT_Constructor*, Function*> constructeurMap;
	std::map<KT_Class*, Type*> classMap;
	std::map<KT_Interface*, Type*> interfaceMap;

	int compilingState = COMPILING_NONE;

public:

	IRCompiler(); 

	void compile(KT_Program *program);

	void compile(KT_Package *KT_Package);

	void compile(KT_Class *classe);

	void compile(KT_Interface *interface);

	Function* compile(KT_SimpleMethod *methode);

	Function* compile(KT_Constructor *constructor);

	Value* compile(KT_Block *block);

	Function *compile(KT_Prototype*);

	// ---------Statement-------------------

	Value* compile(KT_Statement *stmt);

	Value* compile(KT_MethodCall *stmt);

	Value* compile(KT_Print *print);

	Value* compile(KT_Expression *expr);

	Value* compile(KT_Entier *expr);


	// ---------Exression -------------------


	Type* createType(KT_Class *classe);
	Type* createType(KT_Interface* interface);

private:

	LLVMContext& getContext();
	Module* getModule();
	Function* getCurrentFunction();
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
	Value* createAdHocTable(KT_Class *classeI);
	Value* createAdHocTable(KT_Interface *interfaceI);
	Value* createAdHocTable(KT_Class *classeI, KT_Class *classeII);
	Value* createAdHocTable(KT_Interface* interfaceI, KT_Class *classeII);
	Value* createAdHocTable(KT_Interface* interfaceI, KT_Interface* interfaceII);
};




#endif