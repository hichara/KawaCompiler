#include "Test.h"
#include "entete.h"
int Test::totalparticipants = 0;
int main()
{
	
	/*********************************************************************************************/
	/*******************************************PArtie Declaration**********************************/
	/*********************************************************************************************/

	/***********************package et programme************************/
	KT_Program* programme;
	KT_Package* package;
	string* packageName;

	/***********************Classe************************/
	KT_Class* classe;
	string* classeName;
	string* parentClasseName;
	string* parentInterface1;
	string* parentInterface2;
	KT_Modifier* Classmodifier;

	/*********************** Attributs ************************/
	KT_Attribute* attribute1;
	string* Att1Name;
	KT_Modifier* att1Modifier;
	KT_Type* att1Type;
	bool basicType1 = false;
	string* typeName1;
	int arrayDim1 = 0;

	KT_Attribute* attribute2;
	string* Att2Name;
	KT_Modifier* att2Modifier;
	KT_Type* att2Type;
	bool basicType2 = true;
	string* typeName2;
	int arrayDim2 = 0;

	/***********************Contructeur************************/
	KT_Constructor* contruct1;
	string* constName;
	KT_Modifier* constModifier;
	KT_Block* constBlock;
	
	KT_Param* constparam1;
	string* constParam1Name;
	KT_Modifier* constParam1Modifier;
	KT_Type* constParam1Type;
	bool constParam1basicType = true;
	string* constParam1typeName;
	int constParam1arrayDim = 0;

	/*****************************Statement de block de constructeur****************/
	KT_Print* blockConstPrint;

	
	/***********************Methode************************/
	KT_SimpleMethod* methode;
	string* methodeName;
	KT_Modifier* methModifier;
	KT_Block* methBlock;

	KT_Type* methtType;
	bool methtbasicType = true;
	string* methtypeName;
	int metharrayDim = 0;

	KT_Param* methparam1;
	string* methParam1Name;
	KT_Modifier* methtParam1Modifier;
	KT_Type* methtParam1Type;
	bool methtParam1basicType = true;
	string* methParam1typeName;
	int methParam1arrayDim = 0;

	/*****************************Statement de block de Methode ****************/
	KT_Print* blockMethPrint;

	
	/**************************************les parametre de Print******************/
	KT_String* sArg1;
	string* valueSArg1;

	KT_Entier* eArg2;
	int valueArg2 = 5;

	  /*********************************************************************************************/
	 /*******************************************PArtie Execution**********************************/
	/*********************************************************************************************/
	
	/**************************************Print******************/
	eArg2 = new KT_Entier;
	eArg2->setValue(valueArg2);
	sArg1 = new KT_String;
	valueSArg1 = new string("message de la valeur 5");
	sArg1->setValue(valueSArg1);
	


	  /******************************************************************************/
	 /******************************************Methode*****************************/
	/******************************************************************************/
	
	/*****************************Statement de block de methode ****************/
	blockMethPrint = new KT_Print();
	vector<KT_FactFinal*> args;
	args.push_back(sArg1);
	args.push_back(eArg2);
	blockMethPrint->setArgs(args);
	
	/*********Methode Parametre****/
	methtParam1Type = new KT_Type();
	methtParam1Type->setBasicType(methtParam1basicType);
	methtParam1Type->setArrayDim(methParam1arrayDim);
	methParam1typeName = new string("int");
	methtParam1Type->setTypeName(methParam1typeName);
	
	methtParam1Modifier= new KT_Modifier;

	methParam1Name = new string("par1");

	methparam1 = new KT_Param;
	methparam1->setName(methParam1Name);
	methparam1->setParamModifier(methtParam1Modifier);
	methparam1->setParamType(methtParam1Type);

	/*********Methode Type****/
	methtType = new KT_Type();
	methtType->setBasicType(methtbasicType);
	methtType->setArrayDim(metharrayDim);
	methtypeName = new string("float");
	methtType->setTypeName(methtypeName);

	/*********Methode block****/
	methBlock = new KT_Block;
	vector<KT_Statement*> methodStatements;
	methodStatements.push_back(blockMethPrint);
	methBlock->setStatements(methodStatements);

	/*********Methode name****/
	methodeName = new string("methode1");

	/*********Methode modifier****/
	methModifier =  new KT_Modifier;
	methModifier->setVisibility(1);

	/*********Methode****/
	methode = new KT_SimpleMethod;
	methode->setName(methodeName);
	methode->setModifier(methModifier);
	methode->setBlock(methBlock);
	methode->setType(methtType);
	vector<KT_Param*> paramsMethode;
	paramsMethode.push_back(methparam1);
	methode->setParams(paramsMethode);
	
	  /***********************************************************************************/
	 /*************************************Contructeur***********************************/
	/***********************************************************************************/

	/*****************************Statement de block de const ****************/
	blockConstPrint = new KT_Print();
	vector<KT_FactFinal*> argsCOnstPrint;
	argsCOnstPrint.push_back(sArg1);
	argsCOnstPrint.push_back(eArg2);
	blockConstPrint->setArgs(argsCOnstPrint);

	/*********constr Parametre****/
	constParam1Type = new KT_Type();
	constParam1Type->setArrayDim(constParam1arrayDim); 
	constParam1Type->setBasicType(constParam1basicType);
	constParam1typeName = new string("int");
	constParam1Type->setTypeName(constParam1typeName);

	constParam1Modifier = new KT_Modifier;

	constParam1Name = new string("par1Const");

	constparam1 = new KT_Param;
	constparam1->setName(constParam1Name);
	constparam1->setParamModifier(constParam1Modifier);
	constparam1->setParamType(constParam1Type);

	/*********const block****/
	constBlock = new KT_Block;
	vector<KT_Statement*> blockStats;
	blockStats.push_back(blockConstPrint);
	constBlock->setStatements(blockStats);

	/*********const name****/
	constName = new string("Const1");

	/*********const modifier****/
	constModifier = new KT_Modifier;
	constModifier->setVisibility(1);
	
	/*********const****/
	contruct1= new KT_Constructor;
	contruct1->setModifier(constModifier);
	contruct1->setName(constName);
	contruct1->setBlock(constBlock);
	vector<KT_Param*> paramsConst;
	paramsConst.push_back(constparam1);
	contruct1->setParams(paramsConst);
	
	  /***********************************************************/
	 /************************ Attributs ************************/
	/***********************************************************/
	/***************type attribut 2******/
	typeName2 = new string("int");
	att2Type = new KT_Type();
	att2Type->setArrayDim(arrayDim2);
	att2Type->setBasicType(basicType2);
	att2Type->setTypeName(typeName2);

	/*******************nom attribut2 ******/
	Att2Name = new string("var2");
	
	/*******************modifier attribut 2******/
	att2Modifier = new KT_Modifier;
	att2Modifier->setVisibility(3);
	
	/*** attribut 2****/
	attribute2 = new KT_Attribute;
	attribute2->setModifier(att2Modifier);
	attribute2->setName(Att2Name);
	attribute2->setType(att2Type);

	/***************type attribut 1******/
	typeName1 = new string("int");
	att1Type = new KT_Type();
	att1Type->setArrayDim(arrayDim1);
	att1Type->setBasicType(basicType1);
	att1Type->setTypeName(typeName1);

	/*******************nom attribut 1 ******/
	Att1Name = new string("var1");

	/*******************modifier attribut 1******/
	att1Modifier = new KT_Modifier;
	att1Modifier->setVisibility(3);

	/*** attribut 1****/
	attribute1 = new KT_Attribute;
	attribute1->setModifier(att1Modifier);
	attribute1->setName(Att1Name);
	attribute1->setType(att1Type);

	
	  /***********************************************************/
	 /*****************************Classe************************/
	/***********************************************************/

	/*** class name****/
	classeName = new string("TestClass");
	
	/*** class modifier****/
	Classmodifier = new KT_Modifier;
	Classmodifier->setVisibility(1);
	
	/*** classe mere ****/
	parentClasseName = new string("classemere");
	
	/*** interfaces mere ****/
	parentInterface1 = new string("interfaceMere1");
	parentInterface2 = new string("interfaceMere2");

	/***class***/
	classe = new KT_Class;
	classe->setName(classeName);
	classe->setModifier(Classmodifier);
	classe->setParentClass(parentClasseName);
	vector<string*> interfaces;
	interfaces.push_back(parentInterface1);
	interfaces.push_back(parentInterface2);
	classe->setParentInterfaces(interfaces);
	classe->addAttribut(attribute1);
	classe->addAttribut(attribute2);
	classe->addConstructor(contruct1);
	classe->addMethod(methode);

	  /******************************************************************/
	 /***********************package et programme************************/
	/******************************************************************/
	
	packageName = new string("PackageTest");
	package = new KT_Package;
	package->setName(packageName);
	vector<KT_Class*> classes;
	classes.push_back(classe);
	package->setClasses(classes);

	programme = new KT_Program;
	vector<KT_Package*> packages;
	packages.push_back(package);
	programme->setPackages(packages);

	programme->toString();

	system("PAUSE");
	return 0;
}