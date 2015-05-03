#ifndef __SEMANTIC__ANALYSIS
#define __SEMANTIC__ANALYSIS

#include <iostream>
#include "../implementation_KawaTree/KT_Class.h"
#include "../implementation_KawaTree/KT_Interface.h"
#include "../implementation_KawaTree/KT_Prototype.h"
#include "../implementation_KawaTree/KT_Affectation.h"
#include "../implementation_KawaTree/KT_Variable.h"
#include "../implementation_KawaTree/KT_Package.h"
#include "../implementation_KawaTree/KT_Program.h"
#include "../implementation_KawaTree/KT_Print.h"
#include "../implementation_KawaTree/KT_FactFinal.h"
#include "../implementation_KawaTree/KT_String.h"
#include "../implementation_KawaTree/KT_Statement.h"
#include "CheckVariableStatementType.cpp"
#include "CheckBlockStatementType.cpp"
#include "CheckAffectationStatementType.cpp"
#include "CheckCallMethodStatementType.cpp"
#include <map>
#include <algorithm>
using namespace std;

void createListOfType(KT_Program * prog);
bool hasHeritageCycle(KT_Class * depart, KT_Class * mere);
bool hasImplementCycle(KT_Interface * depart, KT_Interface * mere);
bool typeIsCorrect(string * packageName, vector<string*> typeName);
string getFullName(vector<string *> beFill);
void createAndVerifySignatureMethod(KT_Class * classe, string * packageName);
void createAndVerifySignaturePrototype(KT_Interface * interface, string * packageName);
int createHeritage(KT_Program * prog);
void completion(KT_Class * classe);
void completionInterface(KT_Interface * interface);
void decoration(KT_Program * prog);

class Semantic{public:
	static bool existSemanticError;
	static void check(KT_Program* prog){

		createListOfType(prog);
		createHeritage(prog);
		decoration(prog);
	};

	static void checkWithDebug(KT_Program* prog){
		check(prog);
		cout << endl << endl << "Resume " << endl << endl;
		for (KT_Package * package : prog->getPackages()) {
			cout << "-(P) " + *package->getName() << endl;
			for (KT_Class * classe : package->getClasses()) {
				cout << "\t-(C) " + *classe->getFQN() << endl;
				if (classe->getParentClasseSemantique() != NULL)
					cout << "\t\t=> classe mere = " + *classe->getParentClasseSemantique()->getName() << endl;
				if (classe->getParentsInterfacesSemantique().size() > 0)
					cout << "\t\t=> interfaces meres = " << endl;
				for (KT_Interface * i : classe->getParentsInterfacesSemantique()) {
					cout << "\t\t\t- " + *i->getFQN() << endl;
				}
				cout << "\t\t=> methodes = "  << endl;
				for (KT_SimpleMethod * m : classe->getSimpleMethods()) {
					cout << "\t\t\t- " + *m->getName() << endl;
					cout << "\t\t\t- proto : " << &(*m->getPrototype()) << endl;
					cout << "\t\t\t\t-visi : " + m->getPrototype()->getModifier()->getVisibility() << endl;
					cout << "\t\t\t\t-return :" + getFullName(m->getPrototype()->getReturnType()->getTypeName()) << endl;
					cout << "\t\t\t\t-name : " + *m->getPrototype()->getName() << endl;
					for (KT_Param * p : m->getPrototype()->getParams()) {
						cout << "\t\t\t\t-param : " + getFullName(p->getParamType()->getTypeName()) << endl;
					}
				}
				cout << "\t\t=> allProto : " << endl;

				for (KT_Prototype * proto : classe->getAllPrototypes()) {
					cout << "\t\t\t- adresse : " << &(*proto);
					cout << "\t- name : " + *proto->getName() << endl;
				}
				cout << "\t\t=> signatures = " << endl;
				for (string s : classe->getFullSignatures()) {
					cout << "\t\t\t- " + s << endl;
				}
			}
			for (KT_Interface * interface : package->getInterfaces()) {
				cout << "\t-(I) " + *interface->getName() << endl;
				if (interface->getParentsInterfacesSemantique().size() > 0)
					cout << "\t\t=> interfaces meres = " << endl;
				for (KT_Interface * i : interface->getParentsInterfacesSemantique()) {
					cout << "\t\t\t- " + *i->getName() << endl;
				}
				cout << "\t\t=> prototypes = " << endl;
				for (KT_Prototype * p : interface->getPrototypes()) {
					cout << "\t\t\t- adr : " << &(*p);
					cout << "\t- name : " + *p->getName() <<endl;;
				}
				cout << "\t\t=> signatures = " << endl;
				for (string s : interface->getFullSignatures()) {
					cout << "\t\t\t- " + s << endl;
				}
			}
		}
		//*
		if (Semantic::existSemanticError) {
			cout << "\n\nIl y a des erreurs => compilation echouee => ICI CA PLANTE :D" << endl;
		} else {
			cout << "\n\nCompilation reussie" << endl;
		}
		//*/
	}
};

#endif /* __SEMANTIC__ANALYSIS  */
