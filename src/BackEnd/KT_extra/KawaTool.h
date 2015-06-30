#ifndef KWTOOL
#define KWTOOL

#include <cstdio>
#include <cstdlib>

#include "../IRCompiler/KT_includes.h"


using namespace std;


class KawaTool {

public:	
	KawaTool();
	~KawaTool();

	static KT_Type*   	 	 getType(string name);
	static KT_String*    	 getString(string s);
	static KT_Entier* 	 	 getInt(int i);
	static KT_Param*  	 	 getParam(string name, string type);
	static KT_Class*	 	 getClass(string name);
	static KT_Attribute* 	 getAttribute(string name, string type, bool isStatic, int visibility = PUBLIC);
	static KT_Prototype* 	 getPrototype(string name, string parentName, string retType, bool isStatic);
	static KT_Variable*	 	 getDeclaration(string name, string type, KT_Expression *init);
	static KT_ID*		 	 getID(string name);

	static KT_ReturnStatement*		 getReturn(KT_Expression *val);

	static KT_Print*	 	 getPrint(KT_FactFinal *f);
	static KT_Print*		 getPrint(string name);

	static KT_LoadAttribute* getLoadAtt(KT_Expression* caller, string name, int index, bool isstatic = false);
	static KT_LoadAttribute* getLoadAtt(string className, string attName, string attType);

	static KT_Affectation*	 getAffectation(KT_Expression* le, KT_Expression* re);
	static KT_MethodCall*    getMethodeCall(KT_VarOrAttr *caller, KT_SimpleMethod *sm);
	static KT_Interface*     getInterface(string name);

	static KT_Constructor* 	 getConstructor(KT_Class* classe, string nameClasse);

	static bool 			prototype_equal(KT_Prototype *p1, KT_Prototype *p2);
	static string 			fqnType(vector<std::string*> vec);


	static KT_Prototype* 	 CopyPrototype(KT_Prototype *p);

	static KT_Constructor*   getConstructor(string name);

	static KT_ParamsMethodCall *getParamMethodCall(KT_Expression *expr);

	static void addMethode(KT_Class *c, KT_SimpleMethod *sm);
	static void addStatement(KT_Interface *i, KT_Prototype *s);

	static KT_Addition*		getAddition(KT_Expression* expr1, KT_Expression *expr2);	


	static KT_ConstructorCall* getConstructorCall(KT_Constructor* cons);
	static KT_ConstructorCall* getConstructorCall(KT_Constructor* cons, vector<KT_ParamsMethodCall*> params);

//	static void addKT_PrototypeToInterface(KT_Class *c, KT_Interface *i);
//	static void addKT_SimpleMethodeToClass(KT_Class *);
//	static void addInterfaceParent();
//	static void addClassParent();
};

#endif