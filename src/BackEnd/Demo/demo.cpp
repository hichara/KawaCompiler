
#include "../IRCompiler/IRCompiler.h"
#include "../IRCompiler/KT_includes.h"


int okF(std::string *s) {
	return 0;
}

int main() {

//  --------- Types -------------------

	//void 
	KT_Type *voidType   = KawaTool::getType("void");
	//int
	KT_Type *intType    = KawaTool::getType("int");
	//float
	KT_Type *floatType  = KawaTool::getType("float");
	//string
	KT_Type *stringType = KawaTool::getType("string");
	//classA
	KT_Type *classAType = KawaTool::getType("package_ClassA");


//	--------- Programme ---------------

	KT_Program *program;

	program = new KT_Program;

	program->setName("programme_test");

//  --------- Package -----------------

	KT_Package *package = new KT_Package;
	std::vector<KT_Package*> vec_packages;

	string pk_name = "pkName";
	package->setName(&pk_name);

	vec_packages.push_back(package);

	program->setPackages(vec_packages);

// 	--------- Interface ---------------

//	KT_Interface *i1, *i2, *i3;
//	std::vector<KT_Interface*> vec_interfaces;


//	vec_interfaces.push_back(i1);
//	vec_interfaces.push_back(i2);
//	vec_interfaces.push_back(i3);

//	package->setInterfaces(vec_interfaces);	

//	--------- Classe ------------------

	KT_Class *c1 = KawaTool::getClass("package_ClassA");

	std::vector<KT_Class*> vec_classes;
	vec_classes.push_back(c1);

	package->setClasses(vec_classes);

//  --------- Attributs ---------------

	KT_Attribute *att1 = KawaTool::getAttribute("valeur", "int", false, PUBLIC);
	KT_Attribute *att2 = KawaTool::getAttribute("coeff", "float", false, PUBLIC);

	std::vector<KT_Attribute*> vec_att_c1;
	c1->addAttribut(att1);
	c1->addAttribut(att2);

//  --------- SimpleMethode -----------

	KT_SimpleMethod *sm1 = new KT_SimpleMethod;
	KT_SimpleMethod *sm2 = new KT_SimpleMethod;
	KT_SimpleMethod *sm3 = new KT_SimpleMethod;

	c1->addMethod(sm1);
	c1->addMethod(sm2);
	c1->addMethod(sm3);


//  --------- Prototype ---------------
	KT_Prototype *p1 = new KT_Prototype;
	KT_Prototype *p2 = new KT_Prototype;
	KT_Prototype *p3 = new KT_Prototype;
	KT_Prototype *p4 = new KT_Prototype;

	p1 = KawaTool::getPrototype("main", *(c1->getFQN()), "int", true);
	p2 = KawaTool::getPrototype("methode_une", *(c1->getFQN()), "void", false);
	p3 = KawaTool::getPrototype("methode_deux", *(c1->getFQN()), "void", false);

	sm1->setPrototype(p1);
	sm2->setPrototype(p2);
	sm3->setPrototype(p3);

// ---------- Constructor -------------

	KT_Constructor *cons1 = new KT_Constructor;

	cons1->setName(new string("package_ClassA"));
	cons1->setModifier(new KT_Modifier);

    c1->addConstructor(cons1);

//  --------- Paramas -----------------

	KT_Param *param1 = new KT_Param;

	std::vector<KT_Param*> vec_param1;

	p1->setParams(vec_param1);
	cons1->setParams(vec_param1);


//  --------- Bloc --------------------

	KT_Block *b1 = new KT_Block;
	KT_Block *b2 = new KT_Block;
	KT_Block *b3 = new KT_Block;
	KT_Block *b4 = new KT_Block;

	sm1->setBlock(b1);
	sm2->setBlock(b2);
	sm3->setBlock(b4);
	cons1->setBlock(b3);

//  --------- String ------------------

	KT_String *str1  = KawaTool::getString("Appel fonction static main\n");
	KT_String *str2  = KawaTool::getString("int var1 = ");
	KT_String *str3  = KawaTool::getString("Appel methode une\n");
	KT_String *str4  = KawaTool::getString("Appel constructeur\n");
	KT_String *str5  = KawaTool::getString("ClassA var3 = new ClassA()\n");
	KT_String *strln = KawaTool::getString("\n");
	KT_String *str7  = KawaTool::getString("Appel methode deux\n");


//  --------- Entier ------------------

	KT_Entier *int1 = KawaTool::getInt(15);
	KT_Entier *int2 = KawaTool::getInt(159);

//  --------- Call Cons ---------------

	KT_ConstructorCall *consCall1 = new KT_ConstructorCall;
	KT_ConstructorCall *consCall2 = new KT_ConstructorCall;

	std::vector<KT_ParamsMethodCall*> var_cons_call;

	consCall1->setMethod(cons1);
	consCall1->setParams(var_cons_call);

//  ----------- Declaration -----------

	KT_Variable *var1 = KawaTool::getDeclaration("var1", "int", int1);
	KT_Variable *var2 = KawaTool::getDeclaration("var2", "string", NULL);
	KT_Variable *var3 = KawaTool::getDeclaration("var3", "package_ClassA", consCall1);

//  --------- ID ----------------------

	KT_ID *id1 = KawaTool::getID("var3");
	KT_ID *id2 = KawaTool::getID("this");
	KT_ID *id3 = KawaTool::getID("var1");

//  --------- Mehode Call -------------

	KT_MethodCall *call1 = new KT_MethodCall;
	KT_MethodCall *call2 = new KT_MethodCall;

	call1->setCaller(id1);
	call1->setMethodCall(sm2);

	call2->setCaller(id1);
	call2->setMethodCall(sm3);


//  --------- Get Attribute -----------

//	KT_LoadAttribute *load1 = KawaTool::getLoadAtt(id2, "valeur", 0) ;
//	KT_LoadAttribute *load2 = KawaTool::getLoadAtt(id2, "coeff", 1) ;

//  --------- Print ---------------

	KT_Print *print1 = KawaTool::getPrint(str1); 
	KT_Print *print2 = KawaTool::getPrint(str2);
	KT_Print *print3 = KawaTool::getPrint(str3);
	KT_Print *print4 = KawaTool::getPrint(str4);
	KT_Print *print5 = KawaTool::getPrint(str5);
	KT_Print *print6 = KawaTool::getPrint(id3);
	KT_Print *println = KawaTool::getPrint(strln);
	KT_Print *print7 = KawaTool::getPrint(str7);


// ---------- Affectation -------------

//	KT_Affectation *af1 = KawaTool::getAffectation(load1, int1);
//	KT_Affectation *af2 = KawaTool::getAffectation(load1, int2);
//	KT_Affectation *af3 = KawaTool::getAffectation(load2, int2);

//  --------- Add Statement -----------

	std::vector<KT_Statement*> vec_stmt1;
	std::vector<KT_Statement*> vec_stmt2;
	std::vector<KT_Statement*> vec_stmt3;
	std::vector<KT_Statement*> vec_stmt4;

	vec_stmt1.push_back(print1);
	vec_stmt1.push_back(var1);
	vec_stmt1.push_back(print2);
	vec_stmt1.push_back(print6);
	vec_stmt1.push_back(println);
	vec_stmt1.push_back(var3);
	vec_stmt1.push_back(print5);
	vec_stmt1.push_back(call1);
	vec_stmt1.push_back(call2);

	vec_stmt2.push_back(print3);

	vec_stmt3.push_back(print4);

	vec_stmt4.push_back(print7);

	b1->setStatements(vec_stmt1);
	b2->setStatements(vec_stmt2);
	b3->setStatements(vec_stmt3);
	b4->setStatements(vec_stmt4);

// --------------------------------------

	IRCompiler *cmp = new IRCompiler;

	cmp->debugOn = false;

	cmp->compile(program);

	return 0;
}

