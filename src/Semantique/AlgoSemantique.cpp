#include <iostream>
#include "KT_Class.h"
#include "KT_Interface.h"
#include "KT_Prototype.h"
#include "KT_Package.h"
#include "KT_Program.h"
#include <map>
#include <algorithm>
using namespace std;

map<string, KT_Class *> classTypes;             // Map des classes
map<string, KT_Interface *> interfaceTypes;     // Map des interfaces

map<string, KT_Class *>::iterator iteratorClass;
map<string, KT_Interface *>::iterator iteratorInterface;

// Phase 1
int createListOfType(KT_Program * prog) {
	cout << "===================> Start P1 <===================" << endl << endl;
	vector<string> packagesName;

	// On parcourt chaque package
	for (KT_Package * package : prog->getPackages()) {
		// on vérifie que le nom du package n'est pas déjà utilisé
		if (find(packagesName.begin(), packagesName.end(), *package->getName()) != packagesName.end()) {
			return -1;
		}
		packagesName.push_back(*package->getName());

		// On parcourt chaque classe du package
		for (KT_Class * classe : package->getClasses()) {
			string * fqn = new string(*package->getName() + "." + *classe->getName());

			// On vérifie que le nom de classe n'est pas deja utilisé
			iteratorClass = classTypes.find(*fqn);
			if (iteratorClass == classTypes.end()) {
				classe->setName(fqn);
				classTypes[*fqn] = classe;
			} else {
				return -2;
			}
		}

		// On parcourt chaque interface du package
		for (KT_Interface * interface : package->getInterfaces()) {
			// On vérifie que le nom d'interface n'est pas deja utilisé
			string * fqn = new string(*package->getName() + "." + *interface->getName());
			iteratorInterface = interfaceTypes.find(*fqn);
			iteratorClass = classTypes.find(*fqn);
			if (iteratorInterface == interfaceTypes.end() && iteratorClass == classTypes.end()) {
				interface->setName(fqn);
				interfaceTypes[*fqn] = interface;
			} else {
				return -3;
			}
		}
	}

	// Affichage de confirmation (à supprimer)
	for (iteratorClass = classTypes.begin(); iteratorClass != classTypes.end(); ++iteratorClass) {
		cout << iteratorClass->first << " : " << *iteratorClass->second->getName() << endl;
	}

	for (iteratorInterface = interfaceTypes.begin(); iteratorInterface != interfaceTypes.end(); ++iteratorInterface) {
		cout << iteratorInterface->first << " : " << *iteratorInterface->second->getName() << endl;
	}

	return 0;
}

// Phase 2 (en cours)
bool hasHeritageCycle(KT_Class * depart, KT_Class * mere) {
	if (depart == mere) {
		return true;
	} else if (mere->getParentClasseSemantique() != NULL) {
		return hasHeritageCycle(depart, mere->getParentClasseSemantique());
	} else {
		return false;
	}
}

bool hasImplementCycle(KT_Interface * depart, KT_Interface * mere) {
	if (depart == mere) {
		return true;
	} else if (mere->getParentsInterfacesSemantique().size() > 0) {
		for (KT_Interface * interfaceMere : mere->getParentsInterfacesSemantique()) {
			if (hasImplementCycle(depart, interfaceMere))
				return true;
		}
		return false;
	} else {
		return false;
	}
}

bool typeIsCorrect(string * packageName, vector<string*> typeName) {
	string fqn = *packageName;
	for (string * pieceOfTypeName : typeName) {
		fqn += "." + *pieceOfTypeName;
	}
	iteratorInterface = interfaceTypes.find(fqn);
	iteratorClass = classTypes.find(fqn);
	if (iteratorInterface == interfaceTypes.end() && iteratorClass == classTypes.end()) {
		return false;
	}
	return true;
}

string getFullName(vector<string *> beFill) {
	string toFill = ".(";
	for (string * pieceOfName : beFill)
		toFill += "." + *pieceOfName;
	toFill += ")";
	return toFill;
}

// surement besoin du package (name) et import necessaire pour la verif de l'existance du type
void createAndVerifySignatureMethod(KT_Class * classe, string * packageName) {
	vector<string> signaturesMethod;
	for (KT_SimpleMethod * methode : classe->getSimpleMethods()) {
		string params;
		for (KT_Param * param : methode->getParams()) {
			if (!param->getParamType()->isBasicType())
				if (!typeIsCorrect(packageName, param->getParamType()->getTypeName())) {
					cout << "ERROR DE TYPE, inexistant" << endl;
				}
			params = params + getFullName(param->getParamType()->getTypeName());
		}
		if (!methode->getType()->isBasicType()) {
			if (!typeIsCorrect(packageName, methode->getType()->getTypeName())) {
				cout << "ERROR DE TYPE, inexistant" << endl;
			}
		}
		string * signature = new string(*methode->getName() + "" + params);
		if (find(signaturesMethod.begin(), signaturesMethod.end(), *signature) != signaturesMethod.end()) {
			cout << "Erreur 2signatures identique ! " << endl;
		}
		signaturesMethod.push_back(*signature);
		string returnType = getFullName(methode->getType()->getTypeName());
		string * fqn = new string(methode->getModifier()->getVisibility() + "." + returnType + "." + *signature);
		cout << *classe->getName() << " a pour methode : " << *fqn << endl;
		classe->addSignature(*fqn);
//        methode->setSignature(fqn);
	}
}

// surement besoin du package (name) et import necessaire pour la verif de l'existance du type
void createAndVerifySignaturePrototype(KT_Interface * interface, string * packageName) {
	vector<string> signaturesMethod;
	for (KT_Prototype * proto : interface->getPrototypes()) {
		string params;
		for (KT_Param * param : proto->getParams()) {
			if (!param->getParamType()->isBasicType())
				if (!typeIsCorrect(packageName, param->getParamType()->getTypeName())) {
					cout << "ERROR DE TYPE, inexistant" << endl;
				}
			params = params + getFullName(param->getParamType()->getTypeName());
		}
		if (!proto->getReturnType()->isBasicType()) {
			if (!typeIsCorrect(packageName, proto->getReturnType()->getTypeName())) {
				cout << "ERROR DE TYPE, inexistant" << endl;
			}
		}
		string * signature = new string(*proto->getName() + "" + params);
		if (find(signaturesMethod.begin(), signaturesMethod.end(), *signature) != signaturesMethod.end()) {
			cout << "Erreur 2signatures identique ! " << endl;
		}
		signaturesMethod.push_back(*signature);
		string returnType = getFullName(proto->getReturnType()->getTypeName());
		string * fqn = new string(proto->getModifier()->getVisibility() + "." + returnType + "." + *signature);
		cout << *interface->getName() << " a pour proto : " << *fqn << endl;
		interface->addSignature(*fqn);
//        proto->setSignature(fqn);
	}
}

// TODO: reste le cas ClasseX implement I1,I1,I1
int createHeritage(KT_Program * prog) {
	cout << "===================> Start P2 <===================" << endl << endl;
	// On parcourt chaque package, et chaque classe qu'il contient
	for (KT_Package * package : prog->getPackages()) {
		for (KT_Class * classe : package->getClasses()) {
			// Si la classe hérite d'une classe mère,
			if (!classe->getParentClass()->empty()) {
				string * fqn = new string(*package->getName() + "." + *classe->getParentClass());
				// on verifie que le type existe
				if (classTypes.find(*fqn) == classTypes.end()) {
					return -1;
				}
				// on vérifie qu'il n'y a pas de cycle
				if (hasHeritageCycle(classe, classTypes[*fqn])) {
					cout << " !!!!!!!!!!!!!!! Cycle classe !!!!!!!!!!!" << endl;
					return -2;
				}

				// on décore
				cout << *classe->getName() << " a pour classe mere : " << *classTypes[*fqn]->getName() << endl;
				//TODO:
				classe->setParentClasseSemantique(classTypes[*fqn]);
			}
			// Si la classe implémentes une ou plusieurs interfaces,
			if (classe->getParentInterfaces().size() > 0) {
				vector<KT_Interface *> listInter;
				for (string * interface : classe->getParentInterfaces()) {
					string * fqn = new string(*package->getName() + "." + *interface);
					// si le type n'existe pas
					if (interfaceTypes.find(*fqn) == interfaceTypes.end()) {
						return -3;
					}

					cout << *classe->getName() << " a pour interface : " << *interfaceTypes[*fqn]->getName() << endl;
					listInter.push_back(interfaceTypes[*fqn]);
				}
				//TODO:
				classe->setParentsInterfacesSemantique(listInter);
			}
			createAndVerifySignatureMethod(classe, package->getName());
		}

		// idem avec les interfaces
		for (KT_Interface * interface : package->getInterfaces()) {
			if (interface->getInterfacesparent().size() > 0) {
				vector<KT_Interface *> listInter;
				for (string * interfaceName : interface->getInterfacesparent()) {
					string * fqn = new string(*package->getName() + "." + *interfaceName);
					// si le type n'existe pas
					if (interfaceTypes.find(*fqn) == interfaceTypes.end()) {
						return -5;
					}
					// si ca crée un cycle
					if (hasImplementCycle(interface, interfaceTypes[*fqn])) {
						cout << " !!!!!!!!!!!!!!! Cycle interface !!!!!!!!!!!" << endl;
						return -6;
					}

					cout << *interface->getName() << " a pour interface : " << *interfaceTypes[*fqn]->getName() << endl;
					listInter.push_back(interfaceTypes[*fqn]);
				}
				//TODO:
				interface->setParentsInterfacesSemantique(listInter);
			}
			createAndVerifySignaturePrototype(interface, package->getName());
		}
	}
	return 0;
}

// Phase 3

// (en cours) reste indexation de toutes les methodes (mygod) + gestion des methodes heritees
void decoration(KT_Program * prog) {
	cout << endl << "decoration : " << endl;
	for (KT_Package * package : prog->getPackages()) {
		for (KT_Class * classe : package->getClasses()) {
			// on verifie que toutes les méthodes que la classe doit implémenter le sont (si elle implement des interfaces)
			for (KT_Interface * interface : classe->getParentsInterfacesSemantique()) {
				for (string signature : interface->getFullSignatures()) {
					vector<string> lists = classe->getFullSignatures();
					if (find(lists.begin(), lists.end(), signature) == lists.end()) {
						cout << *classe->getName() << " :: error : une methode n'a pas ete defini lors de l'implemention : " << signature << endl;
					}
				}
			}

			//indexation (prog)

			// on effectue le traitement sur les body de chaque methode
			for (KT_SimpleMethod * methode : classe->getSimpleMethods()) {
				if ((*methode->getName()).compare("main") == 0) {
					cout << "main" << endl;
				} else {
					cout << "simple methode" << endl;
				}
			}
		}
	}
}

int main() {
//	string * badName = new string("classelplp1");

	// *****************************************************************************
	// ************************ TYPE ***********************************************
	// *****************************************************************************

	KT_Type * type1 = new KT_Type();
	type1->setBasicType(true);
	vector<string *> typeName1;
	typeName1.push_back(new string("int"));
	type1->setTypeName(typeName1);

	KT_Type * type2 = new KT_Type();
	type2->setBasicType(true);
	vector<string *> typeName2;
	typeName2.push_back(new string("double"));
	type2->setTypeName(typeName2);

	KT_Type * type3 = new KT_Type();
	type3->setBasicType(false);
	vector<string *> typeName3;
	typeName3.push_back(new string("classe1"));
	type3->setTypeName(typeName3);

	KT_Type * type4 = new KT_Type();
	type4->setBasicType(false);
	vector<string *> typeName4;
	typeName4.push_back(new string("FAKE"));
	type4->setTypeName(typeName4);

	//Modifier
	KT_Modifier * modif1 = new KT_Modifier();
	modif1->setVisibility(1);

	KT_Modifier * modif2 = new KT_Modifier();
	modif1->setVisibility(2);

	KT_Modifier * modif3 = new KT_Modifier();
	modif1->setVisibility(3);

	// *****************************************************************************
	// ************************ PARAMS *********************************************
	// *****************************************************************************

	KT_Param * param1 = new KT_Param();
	string * paramName1 = new string("paramDeTypeInt");
	param1->setName(paramName1);
	param1->setParamModifier(modif1);
	param1->setParamType(type1);

	KT_Param * param2 = new KT_Param();
	string * paramName2 = new string("paramDeTypeDouble");
	param2->setName(paramName2);
	param2->setParamModifier(modif2);
	param2->setParamType(type2);

	KT_Param * param3 = new KT_Param();
	string * paramName3 = new string("paramDeTypeClasse1");
	param3->setName(paramName3);
	param3->setParamModifier(modif3);
	param3->setParamType(type3);

	// *****************************************************************************
	// ************************ METHODE SIMPLE *************************************
	// *****************************************************************************

	KT_SimpleMethod * method1 = new KT_SimpleMethod();
	string * nameMethod1 = new string("main");
	method1->setName(nameMethod1);
	method1->setModifier(modif1);
	method1->setType(type1);
	vector<KT_Param *> paramsListMethod1;
	paramsListMethod1.push_back(param1);
	paramsListMethod1.push_back(param2);
	method1->setParams(paramsListMethod1);

	KT_SimpleMethod * method2 = new KT_SimpleMethod();
	string * nameMethod2 = new string("methodReturnDoubleByIntEtClasse1");
	method2->setName(nameMethod2);
	method2->setModifier(modif2);
	method2->setType(type2);
	vector<KT_Param *> paramsListMethod2;
	paramsListMethod2.push_back(param1);
	paramsListMethod2.push_back(param3);
	method2->setParams(paramsListMethod2);

	KT_SimpleMethod * method3 = new KT_SimpleMethod();
	string * nameMethod3 = new string("protoReturnClasse1ByIntEtDoubleEtClass1");
	method3->setName(nameMethod3);
	method3->setModifier(modif3);
	method3->setType(type3);
	vector<KT_Param *> paramsListMethod3;
	paramsListMethod3.push_back(param1);
	paramsListMethod3.push_back(param2);
	paramsListMethod3.push_back(param3);
	method3->setParams(paramsListMethod3);

	// *****************************************************************************
	// ************************ PROTOTYPE ******************************************
	// *****************************************************************************

	KT_Prototype * p1 = new KT_Prototype();
	string * nameProto1 = new string("protoReturnIntByIntEtDouble");
	p1->setName(nameProto1);
	p1->setModifier(modif1);
	p1->setReturnType(type1);
	vector<KT_Param *> paramsList;
	paramsList.push_back(param1);
	paramsList.push_back(param2);
	p1->setParams(paramsList);

	KT_Prototype * p2 = new KT_Prototype();
	string * nameProto2 = new string("protoReturnDoubleByInt");
	p2->setName(nameProto2);
	p2->setModifier(modif3);
	p2->setReturnType(type2);
	vector<KT_Param *> paramsList2;
	paramsList2.push_back(param1);
	p2->setParams(paramsList2);

	KT_Prototype * p3 = new KT_Prototype();
	string * nameProto3 = new string("protoReturnClasse1ByIntEtDoubleEtClass1");
	p3->setName(nameProto3);
	p3->setModifier(modif3);
	p3->setReturnType(type3);
	vector<KT_Param *> paramsList3;
	paramsList3.push_back(param1);
	paramsList3.push_back(param2);
	paramsList3.push_back(param3);
	p3->setParams(paramsList3);

	KT_Prototype * p4 = new KT_Prototype();
	string * nameProto4 = new string("protoReturnDoubleByInt");
	p4->setName(nameProto4);
	p4->setModifier(modif1);
	p4->setReturnType(type1);
	vector<KT_Param *> paramsList4;
	paramsList4.push_back(param1);
	p4->setParams(paramsList4);

	// *****************************************************************************
	// ************************ INTERFACES *****************************************
	// *****************************************************************************

	KT_Interface * interface1 = new KT_Interface();
	string * interfaceName1 = new string("i1");
	interface1->setName(interfaceName1);
	vector<KT_Prototype *> protoList;
	protoList.push_back(p1);
	protoList.push_back(p2);
	protoList.push_back(p4);
	interface1->setPrototypes(protoList);

	KT_Interface * interface2 = new KT_Interface();
	string * interfaceName2 = new string("i2");
	interface2->setName(interfaceName2);

	KT_Interface * interface3 = new KT_Interface();
	string * interfaceName3 = new string("i3");
	interface3->setName(interfaceName3);

	KT_Interface * interface4 = new KT_Interface();
	string * interfaceName4 = new string("i4");
	interface4->setName(interfaceName4);
	vector<string *> intList;
	intList.push_back(interfaceName2);
	intList.push_back(interfaceName3);
	interface4->setInterfacesparent(intList);
	vector<KT_Prototype *> protoList4;
	protoList4.push_back(p3);
	interface4->setPrototypes(protoList4);

	vector<string *> intListError;
	intListError.push_back(interfaceName1);
	intListError.push_back(interfaceName2);
	interface3->setInterfacesparent(intListError);

	// *****************************************************************************
	// ************************ CLASSES ********************************************
	// *****************************************************************************

	KT_Class * class1 = new KT_Class();
	string * className1 = new string("classe1");
	class1->setName(className1);
	class1->addMethod(method1);
	class1->addMethod(method2);

	KT_Class * class2 = new KT_Class();
	string * className2 = new string("classe2");
	class2->setName(className2);
	class2->setParentClass(className1);
	vector<string *> interfaceLists;
	interfaceLists.push_back(interfaceName4);
//    interfaceLists.push_back(interfaceName2);
//    interfaceLists.push_back(interfaceName1);
	class2->setParentInterfaces(interfaceLists);
	class2->addMethod(method3);

	KT_Class * class3 = new KT_Class();
	string * className3 = new string("classe3");
	class3->setName(className3);
	class3->setParentClass(className2);

	KT_Class * class4 = new KT_Class();
	string * className4 = new string("classe4");
	class4->setName(className4);
	class4->setParentClass(className3);

	string * vide = new string("");
	class1->setParentClass(vide);

	// *****************************************************************************
	// ************************ PACKAGES *******************************************
	// *****************************************************************************

	KT_Package * package = new KT_Package();
	string * packageName = new string("modele");
	package->setName(packageName);

	vector<KT_Class *> classList(4);
	classList[0] = class1;
	classList[1] = class2;
	classList[2] = class3;
	classList[3] = class4;

	vector<KT_Interface *> interfaceList(4);
	interfaceList[0] = interface1;
	interfaceList[1] = interface2;
	interfaceList[2] = interface3;
	interfaceList[3] = interface4;

	package->setClasses(classList);
	package->setInterfaces(interfaceList);

	KT_Package * package2 = new KT_Package();
	string * packageName2 = new string("vue");
	package2->setName(packageName2);

	// *****************************************************************************
	// ************************ PROGRAM ********************************************
	// *****************************************************************************

	KT_Program * prog = new KT_Program();
	vector<KT_Package *> pc(2);
	pc[0] = package;
	pc[1] = package2;
	prog->setPackages(pc);

	int res = createListOfType(prog);
	if (res != 0) {
		cout << "1. ERROR DANS TA FACE : " << res << endl;
	} else {
		res = createHeritage(prog);
		if (res != 0) {
			cout << "2. ERROR DANS TA FACE : " << res << endl;
		}
		decoration(prog);
	}

	return EXIT_SUCCESS;

	/*

	 // *************** variable 1 **********************
	 KT_Variable * var1 = new KT_Variable();

	 //nom
	 vector<string*> name("var1");
	 var1->setName(name);

	 //type
	 KT_Type * type = new KT_Type();
	 type->setBasicType(false);
	 string * typeString = new string("i");
	 type->setTypeName(typeString);
	 var1->setType(type);

	 // *************** variable 2 **********************
	 KT_Variable * var2 = new KT_Variable();

	 //nom
	 vector<string*> name2("var1");
	 var2->setName(name2);

	 //type
	 KT_Type * type2 = new KT_Type();
	 type2->setBasicType(false);
	 string * typeString2 = new string("i");
	 type2->setTypeName(typeString2);
	 var2->setType(type2);

	 // *************** affectation 1 **********************
	 KT_Affectation * affect = new KT_Affectation();
	 affect->setLExpression();
	 KT_SimpleMethod * main = new KT_SimpleMethod();
	 main->setParams()
	 */
}
