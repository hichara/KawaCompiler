#ifndef IRCOMP_H
#define IRCOMP_H




#define COMPILING_NONE  0
#define COMPILING_CLASS 1
#define COMPILING_INTER 2
#define COMPILING_METHO 3
#define COMPILING_CONST 4


#include <map>
#include <stdio.h>
#include <fcntl.h>

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

	// state
	int compilingState = COMPILING_NONE;
	int inbrication_level = 0;

public:

	IRCompiler(); 

	void compile(KT_Program *program);
	void compile(KT_Package *KT_Package);
	void compile(KT_Class *classe);
	void compile(KT_Interface *interface);

	Function* compile(KT_SimpleMethod *methode);
	Function* compile(KT_Constructor *constructor);
	Function *compile(KT_Prototype*);

	Type* createType(KT_Class *classe);
	Type* createType(KT_Interface* interface);
	

	Value* compileLinkedMethodOrVarCall(KT_LinkedMethodOrVarCall *c);
	Value* compileAffectation(KT_Affectation *af);
	Value* compilePrint(KT_Print *print);
	Value* compileExpression(KT_Expression *expr);
	Value* compileFactFinal(KT_FactFinal *expr);
	Value* compileParamsMethodCall(KT_ParamsMethodCall *pmC);
	Value* compileMethodOrVarCall(KT_MethodOrVarCall *call);
	Value* compileEntier(KT_Entier *expr) ;
	Value* compileString(KT_String *expr);
	Value* compileMethodCall(KT_MethodCall *call);
	Value* compileConstructorCall(KT_ConstructorCall *call);
	Value* compileVariable (KT_ID *id);
	Value* compileNULL(KT_Null *vnull);
	Value* compileVarOrAttr(KT_VarOrAttr *vOa);
	Value* compileVariable(KT_Variable *id);
	Value* compileStatement(KT_Statement *stm);

	// ---------Exression -------------------



private:

	LLVMContext& getContext();
	Module* getModule();
	Function* getCurrentFunction();
	BasicBlock* getCurrentBlock();
	void endCurrentFunction();
	int getInbricationLevel();


	Value* searchVariable(std::string);

	std::string fqnType(std::vector<std::string*> vec);

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