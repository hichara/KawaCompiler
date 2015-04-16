#include <iostream>
#include "KT_Class.h"
#include "KT_Interface.h"
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
    cout << "===================> Start P1 <===================" <<endl<<endl;
    vector<string> packagesName;

    // On parcourt chaque package
	for(KT_Package * package : prog->getPackages()){
        // on vérifie que le nom du package n'est pas déjà utilisé
        if(find(begin(packagesName), end(packagesName), *package->getName()) != packagesName.end()){
           return -1;
        }
        packagesName.push_back(*package->getName());

        // On parcourt chaque classe du package
        for(KT_Class * classe : package->getClasses()){
            string * fqn = new string(*package->getName() + "." + *classe->getName());

            // On vérifie que le nom de classe n'est pas deja utilisé
            iteratorClass = classTypes.find(*fqn);
            if(iteratorClass == classTypes.end()){
                classe->setName(fqn);
                classTypes[*fqn] = classe;
            }else{
                return -2;
            }
        }

        // On parcourt chaque interface du package
        for(KT_Interface * interface : package->getInterfaces()){
            // On vérifie que le nom d'interface n'est pas deja utilisé
            string * fqn = new string (*package->getName() + "." + *interface->getName());
            iteratorInterface = interfaceTypes.find(*fqn);
            if(iteratorInterface == interfaceTypes.end()){
                interface->setName(fqn);
                interfaceTypes[*fqn] = interface;
            }else{
                return -3;
            }
        }
	}

    // Affichage de confirmation (à supprimer)
	for(iteratorClass=classTypes.begin(); iteratorClass!=classTypes.end(); ++iteratorClass){
        cout << iteratorClass->first << " : " << *iteratorClass->second->getName() <<endl;
	}

    for(iteratorInterface=interfaceTypes.begin(); iteratorInterface!=interfaceTypes.end(); ++iteratorInterface){
        cout << iteratorInterface->first << " : " << *iteratorInterface->second->getName() <<endl;
	}

	return 0;
}

// Phase 2 (en cours)
bool isHeritageCycle(KT_Class * fille, KT_Class * mere){
    return false;
}

bool isImplementCycle(KT_Interface * fille, KT_Interface * mere){
    return false;
}

// TODO: reste le cas ClasseX implement I1,I1,I1
int createHeritage(KT_Program * prog){
    cout << "===================> Start P2 <===================" <<endl<<endl;
    // On parcourt chaque package, et chaque classe qu'il contient
    for(KT_Package * package : prog->getPackages()){
        for(KT_Class * classe : package->getClasses()){
            // Si la classe hérite d'une classe mère,
            if(classe->getParentClass() != NULL){
                string * fqn = new string (*package->getName() + "." + *classe->getParentClass());
                // on verifie que le type existe
                if(classTypes.find(*fqn) == classTypes.end()){
                    return -1;
                }
                // on vérifie qu'il n'y a pas de cycle
                if(isHeritageCycle(classe, classTypes[*fqn] )){
                    return -2;
                }

                // on décore
                cout << *classe->getName() << " a pour classe mere : "<< *classTypes[*fqn]->getName() << endl;
                //TODO: classe->setParentClassSemantique(classTypes[*fqn]);
            }
            // Si la classe implémentes une ou plusieurs interfaces,
            if(classe->getParentInterfaces().size() > 0){
                vector<KT_Interface *> listInter;
                for(string * interface : classe->getParentInterfaces()){
                    string * fqn = new string (*package->getName() + "." + *interface);
                    // si le type n'existe pas
                    if(interfaceTypes.find(*fqn) == interfaceTypes.end()){
                        return -3;
                    }

                    cout << *classe->getName() << " a pour interface : "<< *interfaceTypes[*fqn]->getName() << endl;
                    listInter.push_back(interfaceTypes[*fqn]);
                }
                //TODO: classe->setParentInterfacesSemantique(listInter);
            }
        }

        for(KT_Interface * interface : package->getInterfaces()){
            if(interface->getInterfacesparent().size() > 0){
                vector<KT_Interface *> listInter;
                for(string * interfaceName : interface->getInterfacesparent()){
                    string * fqn = new string (*package->getName() + "." + *interfaceName);
                    // ca ne doit pas être une classe ! (peut etre a supp, voir avec parseur)
                    if(classTypes.find(*fqn) != classTypes.end()){
                        return -4;
                    }
                    // si le type n'existe pas
                    if(interfaceTypes.find(*fqn) == interfaceTypes.end()){
                        return -5;
                    }
                    // si ca crée un cycle
                    if(isImplementCycle(interface, interfaceTypes[*fqn])){
                        return -6;
                    }

                    cout << *interface->getName() << " a pour interface : "<< *interfaceTypes[*fqn]->getName() << endl;
                    listInter.push_back(interfaceTypes[*fqn]);
                }
                //TODO: interface->setParentInterfacesSemantique(listInter);
            }

        }
    }
    return 0;
}



int main() {
//	string * badName = new string("classelplp1");
    // Interfaces
    KT_Interface * interface1 = new KT_Interface();
	string * interfaceName1 = new string("i1");
	interface1->setName(interfaceName1);

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
	// Classes
	KT_Class * class1 = new KT_Class();
	string * className1 = new string("classe1");
	class1->setName(className1);
    class1->setParentClass(NULL);

	KT_Class * class2 = new KT_Class();
	string * className2 = new string("classe2");
	class2->setName(className2);
	class2->setParentClass(className1);
    vector<string *> interfaceLists;
    interfaceLists.push_back(interfaceName4);
    interfaceLists.push_back(interfaceName2);
    interfaceLists.push_back(interfaceName1);
    class2->setParentInterfaces(interfaceLists);

	KT_Class * class3 = new KT_Class();
	string * className3 = new string("classe3");
	class3->setName(className3);
	class3->setParentClass(className1);

	KT_Class * class4 = new KT_Class();
	string * className4 = new string("classe4");
	class4->setName(className4);
    class4->setParentClass(NULL);


	// Package
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

    // Program
    KT_Program * prog = new KT_Program();
    vector<KT_Package *> pc(2);
    pc[0] = package;
    pc[1] = package2;
	prog->setPackages(pc);

	int res = createListOfType(prog);
	if(res != 0) {
        cout<< "1. ERROR DANS TA FACE : " << res << endl;
    }else{
        res = createHeritage(prog);
        if(res != 0) {
            cout<< "2. ERROR DANS TA FACE : " << res << endl;
        }
    }

	return 0;


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
