
#include "../IRCompiler/IRCompiler.h"
#include "../IRCompiler/KT_includes.h"


std::vector<KT_Param*> params_intV() {
	std::vector<KT_Param*> vec;

	vec.push_back(KawaTool::getParam("v", "int"));

	return vec;
}

KT_Statement *build_inc_counter() {

	KT_LoadAttribute *load = KawaTool::getLoadAtt("ClassA", "counter", "int");
	KT_Entier* e = KawaTool::getInt(1);
	KT_Addition *add = KawaTool::getAddition(load, e);

	KT_Affectation *aff = KawaTool::getAffectation(load, add);

	return aff;
}

std::vector<KT_Param*> params_empty() {
	std::vector<KT_Param*> vec;

	return vec;
}



KT_Block* bloc_for_methodeUne() {
	KT_Block* b = new KT_Block;
	std::vector<KT_Statement*> vec_stmt;

	KT_Print *p = KawaTool::getPrint("Appel methode une\n");
	vec_stmt.push_back(p);
	b->setStatements(vec_stmt);

	return b;
}

KT_Block* bloc_for_counter() {
	KT_Block* b = new KT_Block;

	return b;	
}

KT_Block* bloc_for_methodeDeux() {
	KT_Block* b = new KT_Block;
	std::vector<KT_Statement*> vec_stmt;

	KT_Print *p = KawaTool::getPrint("Appel methode deux\n");
	vec_stmt.push_back(p);
	b->setStatements(vec_stmt);

	return b;
}

KT_Block* bloc_for_constructor_ClassA() {
	KT_Block* b = new KT_Block;
	std::vector<KT_Statement*> vec_stmt;

	KT_Print *p = KawaTool::getPrint("Appel Constructor ClassA sans arguments\n");

	KT_ID *idThis = KawaTool::getID("this");
	KT_Entier *ent = KawaTool::getInt(75);

	KT_LoadAttribute *attValeur = KawaTool::getLoadAtt(idThis, "valeur", 0, false);

	KT_Affectation *aff = KawaTool::getAffectation(attValeur, ent);

	vec_stmt.push_back(p);
	vec_stmt.push_back(build_inc_counter());

	vec_stmt.push_back(aff);

	b->setStatements(vec_stmt);

	return b;
}

KT_Block* bloc_for_printState() {
	KT_Block *b = new KT_Block;

	KT_ID *idThis = KawaTool::getID("this");

	KT_LoadAttribute *attValeur = KawaTool::getLoadAtt(idThis, "valeur", 0, false);
	KT_LoadAttribute *attCounter  = KawaTool::getLoadAtt("ClassA", "counter", "int");


	KT_Print *endl = KawaTool::getPrint("\n");

	std::vector<KT_Statement*> vec_stmt;

	vec_stmt.push_back(KawaTool::getPrint("valeur = "));
	vec_stmt.push_back(KawaTool::getPrint(attValeur));
	vec_stmt.push_back(KawaTool::getPrint(" / "));
	vec_stmt.push_back(KawaTool::getPrint("counter = "));
	vec_stmt.push_back(KawaTool::getPrint(attCounter));
	vec_stmt.push_back(endl);

	b->setStatements(vec_stmt);

	return b;
}

KT_Block* bloc_for_setValue() {
	KT_Block* b = new KT_Block;
	std::vector<KT_Statement*> vec_stmt;


	KT_ID *idThis = KawaTool::getID("this");
	KT_ID *idV = KawaTool::getID("v");

	KT_LoadAttribute *loadValeurThis = KawaTool::getLoadAtt(idThis, "valeur", 0);


	KT_Affectation *af1 = KawaTool::getAffectation(loadValeurThis, idV);

	vec_stmt.push_back(af1);

	b->setStatements(vec_stmt);

	return b;
}



KT_Block* bloc_for_main() {
	KT_Block *b = new KT_Block;

	KT_ID *ident1 = KawaTool::getID("ent1");
	KT_ID *idvarA = KawaTool::getID("varA");

	KT_Print *pDebut = KawaTool::getPrint("Debut program :\n");
	KT_Print *pFin = KawaTool::getPrint("fin program\n");
	KT_Print *pDecEnt1 = KawaTool::getPrint("int ent1 = ");
	KT_Print *pendln = KawaTool::getPrint("\n");
	KT_Print *pEnt1  = KawaTool::getPrint(ident1);


	KT_Entier *e = KawaTool::getInt(15);

	KT_Constructor* cons = KawaTool::getConstructor("ClassA");
	KT_ConstructorCall* consCall = KawaTool::getConstructorCall(cons);

	KT_Variable *varEnt1 = KawaTool::getDeclaration("ent1", "int", e);
	KT_Variable *varA = KawaTool::getDeclaration("varA", "ClassA", consCall);

	KT_Prototype *proto_printState = KawaTool::getPrototype("printState", "ClassA", "void", false);
	KT_SimpleMethod *smM_printState = new KT_SimpleMethod;
	proto_printState->setParams(params_empty());
	smM_printState->setPrototype(proto_printState);
	KT_MethodCall *mcall_printState = KawaTool::getMethodeCall(idvarA, smM_printState);

	KT_Prototype *protoM_une = KawaTool::getPrototype("methode_une", "ClassA", "void", false);
	KT_SimpleMethod *smM_une = new KT_SimpleMethod;
	protoM_une->setParams(params_empty());
	smM_une->setPrototype(protoM_une);
	KT_MethodCall *mcall_methodeUne = KawaTool::getMethodeCall(idvarA, smM_une);

	KT_Prototype *protoM_dx = KawaTool::getPrototype("methode_deux","ClassA", "void", false);
	KT_SimpleMethod *smM_dx = new KT_SimpleMethod;
	protoM_dx->setParams(params_empty());
	smM_dx->setPrototype(protoM_dx);
	KT_MethodCall *mcall_methodeDx = KawaTool::getMethodeCall(idvarA, smM_dx);

	KT_Prototype *proto_setValue = KawaTool::getPrototype("setValue", "ClassA", "void", false);
	KT_SimpleMethod *smM_setValue = new KT_SimpleMethod;
	proto_setValue->setParams(params_intV());
	smM_setValue->setPrototype(proto_setValue);
	KT_MethodCall *mcall_methodesetValue = KawaTool::getMethodeCall(idvarA, smM_setValue);

    vector<KT_ParamsMethodCall*> params_setValue;
    params_setValue.push_back(KawaTool::getParamMethodCall(ident1));
    mcall_methodesetValue->setParams(params_setValue);

	std::vector<KT_Statement*> vec_stmt;

	vec_stmt.push_back(pDebut);
	vec_stmt.push_back(varEnt1);
	vec_stmt.push_back(pDecEnt1);
	vec_stmt.push_back(pEnt1);
	vec_stmt.push_back(pendln);
	vec_stmt.push_back(varA);
	vec_stmt.push_back(mcall_printState);
	vec_stmt.push_back(mcall_methodeUne);
	vec_stmt.push_back(mcall_methodeDx);
	vec_stmt.push_back(consCall);
	vec_stmt.push_back(consCall);
	vec_stmt.push_back(mcall_methodesetValue);
	vec_stmt.push_back(mcall_printState);
	vec_stmt.push_back(pFin);

	b->setStatements(vec_stmt);

	return b;
}

KT_Block* bloc_for_getValue() {
	KT_Block* b = new KT_Block;
	std::vector<KT_Statement*> vec_stmt;

	KT_ID *idThis = KawaTool::getID("this");
	KT_LoadAttribute *loadValeurThis = KawaTool::getLoadAtt(idThis, "valeur", 0);
	
	KT_ReturnStatement*	ret = KawaTool::getReturn(loadValeurThis);

	vec_stmt.push_back(ret);
	b->setStatements(vec_stmt);

	return b;	
}


int main() {

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
	std::vector<KT_Interface*> vec_interfaces;

	KT_Interface *i1 = KawaTool::getInterface("i1");

	vec_interfaces.push_back(i1);
//	vec_interfaces.push_back(i2);
//	vec_interfaces.push_back(i3);

	package->setInterfaces(vec_interfaces);	

//	--------- Classe ------------------
	std::vector<KT_Class*> vec_classes;

	KT_Class *c1 = KawaTool::getClass("ClassA");

	vec_classes.push_back(c1);

	package->setClasses(vec_classes);

//  --------- Attributs ---------------

	KT_Attribute *att1 = KawaTool::getAttribute("valeur", "int", false, PUBLIC);
	KT_Attribute *att2 = KawaTool::getAttribute("counter", "int", true, PUBLIC);

	std::vector<KT_Attribute*> vec_att_c1;
	c1->addAttribut(att1);
	c1->addAttribut(att2);

//  --------- Prototype ---------------
	KT_Prototype *protoMain = KawaTool::getPrototype("main", *(c1->getFQN()), "int", true);
	KT_Prototype *protoM_une = KawaTool::getPrototype("methode_une", *(c1->getFQN()), "void", false);
	KT_Prototype *protoM_deux = KawaTool::getPrototype("methode_deux", *(c1->getFQN()), "void", false);

	KT_Prototype *proto_getValue = KawaTool::getPrototype("getValue", *(c1->getFQN()), "int", false);
	KT_Prototype *proto_setValue = KawaTool::getPrototype("setValue", *(c1->getFQN()), "void", false);
	KT_Prototype *proto_printState = KawaTool::getPrototype("printState", *(c1->getFQN()), "void", false);

	KT_Prototype *proto_counter = KawaTool::getPrototype("counter", *(c1->getFQN()), "void", true);

	protoMain->setParams(params_empty());
	protoM_une->setParams(params_empty());
	protoM_deux->setParams(params_empty());
	proto_getValue->setParams(params_empty());
	proto_setValue->setParams(params_intV());
	proto_printState->setParams(params_empty());
	proto_counter->setParams(params_empty());

//  --------- SimpleMethode -----------
	KT_SimpleMethod *smMain = new KT_SimpleMethod;
	KT_SimpleMethod *smM_une = new KT_SimpleMethod;
	KT_SimpleMethod *smM_deux = new KT_SimpleMethod;
	KT_SimpleMethod *smM_getValue = new KT_SimpleMethod;
	KT_SimpleMethod *smM_setValue = new KT_SimpleMethod;
	KT_SimpleMethod *smM_printState = new KT_SimpleMethod;
	KT_SimpleMethod	*smM_counter = new KT_SimpleMethod;

	smMain->setPrototype(protoMain);
	smM_une->setPrototype(protoM_une);
	smM_deux->setPrototype(protoM_deux);
	smM_getValue->setPrototype(proto_getValue);
	smM_setValue->setPrototype(proto_setValue);
	smM_printState->setPrototype(proto_printState);	
	smM_counter->setPrototype(proto_counter);

	smMain->setBlock(bloc_for_main());
	smM_une->setBlock(bloc_for_methodeUne());
	smM_deux->setBlock(bloc_for_methodeDeux());
	smM_getValue->setBlock(bloc_for_getValue());
	smM_setValue->setBlock(bloc_for_setValue());
	smM_printState->setBlock(bloc_for_printState());
	smM_counter->setBlock(bloc_for_counter());

// ---------- Constructor -------------

	KT_Constructor *cons1 = KawaTool::getConstructor("ClassA");

    cons1->setBlock(bloc_for_constructor_ClassA());
    cons1->setParams(params_empty());

// ----------- add Hoc C1 ----------------
   std::vector<KT_Prototype*> vec_proto_c1;

   vec_proto_c1.push_back(protoM_une);
   vec_proto_c1.push_back(protoM_deux);
   vec_proto_c1.push_back(proto_getValue);
   vec_proto_c1.push_back(proto_setValue);
   vec_proto_c1.push_back(proto_printState);

   c1->setAllPrototypes(vec_proto_c1);

// ----------- Populate C1 --------------

    c1->addConstructor(cons1);

	c1->addMethod(smMain);
	c1->addMethod(smM_une);
	c1->addMethod(smM_deux);
	c1->addMethod(smM_getValue);
	c1->addMethod(smM_setValue);
	c1->addMethod(smM_printState);
	c1->addMethod(smM_counter);

// --------------------------------------

	IRCompiler *cmp = new IRCompiler;

	cmp->debugOn = false;

	cmp->compile(program);


/*
  InitializeNativeTarget();
  LLVMContext &Context = getGlobalContext();
  IRBuilder<> builder(getGlobalContext());

  Module *myModule = new Module("Module Test", Context);

  std::vector<std::string> args_types, args_names;

  args_types.push_back("int");
  args_types.push_back("float");
  args_types.push_back("ClasseInconnu");

  args_names.push_back("valeur");
  args_names.push_back("coeff");
  args_names.push_back("objet");
  

  // Teste des fonctions

  Function *f = FunctionGenerator::getOrCreateFunction(myModule, true,
									"classA",
									"methodeUne",
									"int", 
									args_types,									
									args_names);



  f->dump();

 f = FunctionGenerator::getOrCreateFunction(myModule, false,
									"classB",
									"methodeDx",
									"ClassB", 
									args_types,									
									args_names);

  f->dump();

  // Teste generation table adHoc et indexes

*/  



	return 0; 


}


