#include "AlgoSemantique.h"
#include "../BackEnd/KT_extra/KawaTool.h"

map<string, KT_Class *> classTypes;             // Map des classes
map<string, KT_Interface *> interfaceTypes;     // Map des interfaces

map<string, KT_Class *>::iterator iteratorClass;
map<string, KT_Interface *>::iterator iteratorInterface;

bool Semantic::existSemanticError = false;

// Phase 1
void createListOfType(KT_Program * prog) {
	vector<string> packagesName;

	// On parcourt chaque package
	for (KT_Package * package : prog->getPackages()) {
		// on vérifie que le nom du package n'est pas déjà utilisé
		if (find(packagesName.begin(), packagesName.end(), *package->getName()) != packagesName.end()) {
			Semantic::existSemanticError = true;
			cout << "!!!!!! ERREUR 1 !!!!! Le nom du package :  est deja utilisé" << endl;
		}
		packagesName.push_back(*package->getName());

		// On parcourt chaque classe du package
		for (KT_Class * classe : package->getClasses()) {
			string * fqn = new string(*package->getName() + "." + *classe->getName());

			// On vérifie que le nom de classe n'est pas deja utilisé
			iteratorClass = classTypes.find(*fqn);
			if (iteratorClass == classTypes.end()) {
				classe->setFQN(fqn);
				classTypes[*fqn] = classe;
			} else {
				Semantic::existSemanticError = true;
				cout << "!!!!!! ERREUR 2 !!!!! Le nom de la classe: est deja utilisé" << endl;
			}
		}

		// On parcourt chaque interface du package
		for (KT_Interface * interface : package->getInterfaces()) {
			// On vérifie que le nom d'interface n'est pas deja utilisé
			string * fqn = new string(*package->getName() + "." + *interface->getName());
			iteratorInterface = interfaceTypes.find(*fqn);
			iteratorClass = classTypes.find(*fqn);
			if (iteratorInterface == interfaceTypes.end() && iteratorClass == classTypes.end()) {
				interface->setFQN(fqn);
				interfaceTypes[*fqn] = interface;
			} else {
				Semantic::existSemanticError = true;
				cout << "!!!!!! ERREUR 3 !!!!! Le nom de l'interface : est deja utilisé" << endl;
			}
		}
	}

	// Affichage de confirmation (à supprimer)
	/*for (iteratorClass = classTypes.begin(); iteratorClass != classTypes.end(); ++iteratorClass) {
		cout << iteratorClass->first << " : " << *iteratorClass->second->getFQN() << endl;
	}

	for (iteratorInterface = interfaceTypes.begin(); iteratorInterface != interfaceTypes.end(); ++iteratorInterface) {
		cout << iteratorInterface->first << " : " << *iteratorInterface->second->getFQN() << endl;
	}*/

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
	if ( typeName.size() == 1 && typeName[0]->compare("void") == 0 ){
		return true;
	}
	if ( typeName.size() == 1 && typeName[0]->compare("String") == 0 ){
		return true;
	}

	string fqn = *packageName;
	for (string * pieceOfTypeName : typeName) {
		fqn += "." + *pieceOfTypeName;
	}
	iteratorInterface = interfaceTypes.find(fqn);
	iteratorClass = classTypes.find(fqn);
	if (iteratorInterface == interfaceTypes.end() && iteratorClass == classTypes.end()) {
		cout << "type error : " << fqn << endl;
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
					Semantic::existSemanticError = true;
					cout << "!!!!!! ERREUR 4a !!!!! Type inexistant " << endl;
				}
			params = params + getFullName(param->getParamType()->getTypeName());
		}
		if (!methode->getType()->isBasicType()) {
			if (!typeIsCorrect(packageName, methode->getType()->getTypeName())) {
				Semantic::existSemanticError = true;
				cout << "!!!!!! ERREUR 4b !!!!! Type inexistant " << endl;
			}
		}
		string * signature = new string(*methode->getName() + "" + params);
		if (find(signaturesMethod.begin(), signaturesMethod.end(), *signature) != signaturesMethod.end()) {
			Semantic::existSemanticError = true;
			cout << "!!!!!! ERREUR 5 !!!!! Deux signatures identiques " << endl;
		}
		signaturesMethod.push_back(*signature);
		string returnType = getFullName(methode->getType()->getTypeName());
		string * fqn = new string(methode->getModifier()->getVisibility() + "." + returnType + "." + *signature);
		// cout << *classe->getFQN() + " a pour methode : " + *fqn << endl;
		classe->addSignature(*fqn);
		methode->setFullSignature(*fqn);
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
					Semantic::existSemanticError = true;
					cout << "!!!!!! ERREUR 4c !!!!! Type inexistant " << endl;
				}
			params = params + getFullName(param->getParamType()->getTypeName());
		}
		if (!proto->getReturnType()->isBasicType()) {
			if (!typeIsCorrect(packageName, proto->getReturnType()->getTypeName())) {
				Semantic::existSemanticError = true;
				cout << "!!!!!! ERREUR 4d !!!!! Type inexistant " << endl;
			}
		}
		string * signature = new string(*proto->getName() + "" + params);
		if (find(signaturesMethod.begin(), signaturesMethod.end(), *signature) != signaturesMethod.end()) {
			Semantic::existSemanticError = true;
			cout << "!!!!!! ERREUR 5 !!!!! Deux signatures identiques " << endl;
		}
		signaturesMethod.push_back(*signature);
		string returnType = getFullName(proto->getReturnType()->getTypeName());
		string * fqn = new string(proto->getModifier()->getVisibility() + "." + returnType + "." + *signature);
		//cout << *interface->getFQN() + " a pour proto : " + *fqn << endl;
		interface->addSignature(*fqn);
		//proto->setSignature(fqn);
	}
}

// TODO: reste le cas ClasseX implement I1,I1,I1
int createHeritage(KT_Program * prog) {
	// On parcourt chaque package, et chaque classe qu'il contient
	for (KT_Package * package : prog->getPackages()) {
		for (KT_Class * classe : package->getClasses()) {
			// Si la classe hérite d'une classe mère,
			if (!classe->getParentClass()->empty()) {
				string * fqn = new string(*package->getName() + "." + *classe->getParentClass());
				// on verifie que le type existe
				if (classTypes.find(*fqn) == classTypes.end()) {
					Semantic::existSemanticError = true;
					cout << "!!!!!! ERREUR 4e !!!!! Type inexistant " << endl;
				}
				// on vérifie qu'il n'y a pas de cycle
				if (hasHeritageCycle(classe, classTypes[*fqn])) {
					Semantic::existSemanticError = true;
					cout << "!!!!!! ERREUR 6 !!!!! Cycle présent dans l'arbre d'héritage " << endl;
				}

				// on décore
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
						Semantic::existSemanticError = true;
						cout << "!!!!!! ERREUR 4f !!!!! Type inexistant " << endl;
					}

					//cout << *classe->getFQN() + " a pour interface : " + *interfaceTypes[*fqn]->getFQN() << endl;
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
						Semantic::existSemanticError = true;
						cout << "!!!!!! ERREUR 4g !!!!! Type inexistant " << endl;
					}
					// si ca crée un cycle
					if (hasImplementCycle(interface, interfaceTypes[*fqn])) {
						Semantic::existSemanticError = true;
						cout << "!!!!!! ERREUR 7 !!!!! Cycle présent dans l'arbe d'implémentation " << endl;
					}

					//cout << *interface->getFQN() + " a pour interface : " + *interfaceTypes[*fqn]->getFQN() << endl;
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

void completion(KT_Class * classe) {
	if (classe->getParentClasseSemantique() != NULL) {
		completion(classe->getParentClasseSemantique());
		for (KT_SimpleMethod * methode : classe->getSimpleMethods()) {
			if (methode->getPrototype() == NULL) {

				KT_Prototype * proto = new KT_Prototype();
				proto->setParentName(*(classe->getFQN()));
				proto->setModifier(methode->getModifier());
				proto->setName(methode->getName());
				vector<KT_Param*> x = methode->getParams();
				proto->setParams(x);
				proto->setReturnType(methode->getType());
				methode->setPrototype(proto);
				classe->addPrototype(proto);
			}
		}
		bool ispresent;
		for (KT_Prototype * protoParent : classe->getParentClasseSemantique()->getAllPrototypes()) {
			if(protoParent->getModifier()->getVisibility() != 3){
				ispresent = false;
				for (KT_Prototype * protoFils : classe->getAllPrototypes()) {
					if (KawaTool::prototype_equal(protoFils, protoParent)) {
						ispresent = true;
					}
				}
				if (!ispresent) {
					classe->addPrototype(protoParent);
					classe->addSignature(protoParent->toString());
				}
			}
			/*
			 vector<string> signa = classe->getFullSignatures();
			 if (find(signa.begin(), signa.end(), protoParent->toString()) == signa.end()) {
			 classe->addPrototype(protoParent);
			 classe->addSignature(protoParent->toString());
			 }*/
		}
	} else {
		for (KT_SimpleMethod * methode : classe->getSimpleMethods()) {
			if (methode->getPrototype() == NULL) {
				KT_Prototype * proto = new KT_Prototype();
				proto->setParentName(*(classe->getFQN()));
				proto->setModifier(methode->getModifier());
				proto->setName(methode->getName());
				vector<KT_Param*> x = methode->getParams();
				proto->setParams(x);
				proto->setReturnType(methode->getType());
				methode->setPrototype(proto);
				classe->addPrototype(proto);
			}
		}
	}

	//for()
}

void completionInterface(KT_Interface * interface) {
	for(int i = 0; i < interface->getPrototypes().size(); i++) {
		KT_Prototype *p = interface->getPrototypes()[i];
		p->setParentName(*interface->getFQN());
	}

	if (interface->getParentsInterfacesSemantique().size() > 0) {
		for (KT_Interface * parent : interface->getParentsInterfacesSemantique()) {
			completionInterface(parent);
			for (string signaParent : parent->getFullSignatures()) {
				interface->addSignature(signaParent);
			}
		}
	}
}

// (en cours) reste indexation de toutes les methodes (mygod) + gestion des methodes heritees
void decoration(KT_Program * prog) {
	for (KT_Package * package : prog->getPackages()) {
		for (KT_Interface * interface : package->getInterfaces()) {
			for (KT_Interface * iParent : interface->getParentsInterfacesSemantique()) {
				for (string signature : iParent->getFullSignatures()) {
					vector<string> lists = interface->getFullSignatures();
					/*if (find(lists.begin(), lists.end(), signature) == lists.end()) {
						Semantic::existSemanticError = true;
						cout << "!!!!!! ERREUR 8 !!!!! Une interface en implemente une autre sans reprendre ses prototypes " << endl;
						cout << *interface->getFQN() << endl;
						cout << signature << endl;
					}*/
				}
			}
			completionInterface(interface);
		}
		for (KT_Class * classe : package->getClasses()) {
			// on verifie que toutes les méthodes que la classe doit implémenter le sont (si elle implement des interfaces)
			for (KT_Interface * interface : classe->getParentsInterfacesSemantique()) {
				for (string signature : interface->getFullSignatures()) {
					vector<string> lists = classe->getFullSignatures();
					if (find(lists.begin(), lists.end(), signature) == lists.end()) {
						Semantic::existSemanticError = true;
						cout << "!!!!!! ERREUR 9 !!!!! Méthode non défini malgré implémentation " << endl;
						cout << *classe->getFQN() << endl;
						cout << signature << endl;
					}
				}
			}

			completion(classe);

			// on effectue le traitement sur les body de chaque methode
			for (KT_SimpleMethod * methode : classe->getSimpleMethods()) {
				if ((*methode->getName()).compare("main") == 0) {


					// Constructeur
					KT_Constructor *cons1 = KawaTool::getConstructor(classe, "test.ClassA");
					KT_Constructor *cons2 = KawaTool::getConstructor(classe, "test.ClassB");

				    // ConsCall
				    KT_ConstructorCall *consCall1 = KawaTool::getConstructorCall(cons1);
				    KT_ConstructorCall *consCall2 = KawaTool::getConstructorCall(cons2);

					// Declaration
					KT_Variable *varA = KawaTool::getDeclaration("varA", "test.ClassA", consCall1);
					KT_Variable *varB = KawaTool::getDeclaration("varB", "test.ClassB", consCall1);
					KT_Variable *varC = KawaTool::getDeclaration("varC", "test.ClassB", consCall2);

					// Bloc
					KT_Block *b1 = new KT_Block;
					KT_Block *b2 = new KT_Block;

					methode->setBlock(b1);
					cons1->setBlock(b2);					
					cons2->setBlock(b2);					
					// Statement 
					vector<KT_Statement*> vec_stmnts1;
					vector<KT_Statement*> vec_stmnts2;

					vec_stmnts1.push_back(varA);
					vec_stmnts1.push_back(varB);
					vec_stmnts1.push_back(varC);

					KT_Print *kt_endln = KawaTool::getPrint( KawaTool::getString("\n"));
	
					// Appel methode de la classe A
					// ClassA a = new A();

					for(KT_Prototype *p : classe->getAllPrototypes()) {

						if ((*p->getName()).compare("main") != 0) {
								KT_Prototype *callP = KawaTool::CopyPrototype(p);
								callP->setParentName("test.ClassA");
								KT_SimpleMethod *sm = new KT_SimpleMethod;
								sm->setPrototype(callP);

								// Methode call
								KT_ID *idVarA = KawaTool::getID("varA");

								KT_MethodCall *call = KawaTool::getMethodeCall(idVarA, sm);

								vec_stmnts1.push_back(call);
								vec_stmnts1.push_back(kt_endln);
						}


						if((*p->getName()).compare("methodeTrois") == 0) {
								KT_SimpleMethod *sm = new KT_SimpleMethod;
								KT_Prototype *pp = KawaTool::CopyPrototype(p);
								pp->setParentName("test.ClassB");
								sm->setPrototype(pp);


								KT_ID *idVarB = KawaTool::getID("varB");
								KT_ID *idVarC = KawaTool::getID("varC");

								KT_MethodCall *call = KawaTool::getMethodeCall(idVarB, sm);
								KT_MethodCall *call2 = KawaTool::getMethodeCall(idVarC, sm);

								vec_stmnts1.push_back(call);
								vec_stmnts1.push_back(kt_endln);							
								vec_stmnts1.push_back(call2);
								vec_stmnts1.push_back(kt_endln);							
						}

						if((*p->getName()).compare("methodeFromI") == 0) {
								KT_SimpleMethod *sm = new KT_SimpleMethod;
								KT_Prototype *pp = KawaTool::CopyPrototype(p);
								pp->setParentName("test.InterfaceI");
								sm->setPrototype(pp);

								// Declaration InterfaceI i;
								KT_Variable *varI = KawaTool::getDeclaration(
									"varI", "test.InterfaceI", NULL);

								KT_ID *idVarA = KawaTool::getID("varA");
								KT_ID *idVarB = KawaTool::getID("varB");
								KT_ID *idVarC = KawaTool::getID("varC");
								KT_ID *idVarI = KawaTool::getID("varI");

								// Affectation
								// i = a;
								// i = b;
								// i = c;
								KT_Affectation *affI_A = KawaTool::getAffectation(idVarI, idVarA);
								KT_Affectation *affI_B = KawaTool::getAffectation(idVarI, idVarB);
								KT_Affectation *affI_C = KawaTool::getAffectation(idVarI, idVarC);

								// Appel i.methodeFromI()
								KT_MethodCall *callFromI = KawaTool::getMethodeCall(idVarI, sm);

								vec_stmnts1.push_back(varI);
								vec_stmnts1.push_back(affI_A);
								vec_stmnts1.push_back(callFromI);
								vec_stmnts1.push_back(kt_endln);

								vec_stmnts1.push_back(affI_B);
								vec_stmnts1.push_back(callFromI);								
								vec_stmnts1.push_back(kt_endln);
								vec_stmnts1.push_back(affI_C);
								vec_stmnts1.push_back(callFromI);								
								vec_stmnts1.push_back(kt_endln);
						} 
					}

					// Appel methode 3 Avec ClassB b = new A();




					// Ajout des statements aux blocs

					b1->setStatements(vec_stmnts1);
					b2->setStatements(vec_stmnts2);

					/*
					// todo: ligne a dé/commenter pour dé/activer le traitement
					KT_Block* mainBlock = methode->getBlock();
					bool mainIsGood = true;
					SemanticVisitor* affectationVisitor = new CheckAffectationStatementType();
					SemanticVisitor* callMethodVisitor = new CheckCallMethodStatementType();
					// pour les déclarations
					SemanticVisitor* variableVisitor = new CheckVariableStatementType();
					SemanticVisitor* blockStatementVisitor = new CheckBlockStatementType();

					for(KT_Statement* statement : mainBlock->getStatements()){
						statement->accept(variableVisitor);
						statement->accept(affectationVisitor);
						statement->accept(callMethodVisitor);
						statement->accept(blockStatementVisitor);

						// si le statement n'est pas une déclaration ou une affectation ou un appel de méthode
						// c'est qu'il s'agit d'un autre type de statement, alors le main n'est pas correct.
						if ((!variableVisitor->isVisited() && !affectationVisitor->isVisited()
							&& !callMethodVisitor->isVisited()) || blockStatementVisitor->isVisited()){

								mainIsGood = false;
						}
					}
					if (!mainIsGood){
						Semantic::existSemanticError = true;
						// todo: définir le numéro de l'erreur
						cout << "!!!!!!! ERREUR * !!!!!!!! Méthode main doit comporter uniquement des déclarations,"
						     << "affectations ou appels de méthodes uniquement" << endl;
					}
					
					//cout << "main" << endl;
					*/

				} else {
					KT_Print * ktPrint = new KT_Print();
					vector<KT_FactFinal *> args;
					KT_FactFinal * arg1 = new KT_String();
					string * argValue1 = new string("Méthode " + *methode->getName() + " appartenant a la classe " + *classe->getFQN());
					((KT_String *) arg1)->setValue(argValue1);
					args.push_back(arg1);
					ktPrint->setArgs(args);

					//cout << "simple methode :" << endl;
				} 
			}

			// analyse des appels
			CheckConstructorCallStatementType* constructorCallVisitor = new CheckConstructorCallStatementType;
			for(KT_SimpleMethod* method : classe->getSimpleMethods()){
				KT_Block* block = method->getBlock();
				// parcours des statements
				for(KT_Statement* statement : block->getStatements()){
					statement->accept(constructorCallVisitor);
				}
			}
		}
	}

}

int main_semantic() {
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
	string * nameMethod1 = new string("m1");
	method1->setName(nameMethod1);
	method1->setModifier(modif1);
	method1->setType(type1);
	vector<KT_Param *> paramsListMethod1;
	paramsListMethod1.push_back(param1);
	paramsListMethod1.push_back(param2);
	method1->setParams(paramsListMethod1);

	KT_SimpleMethod * method2 = new KT_SimpleMethod();
	string * nameMethod2 = new string("m2");
	method2->setName(nameMethod2);
	method2->setModifier(modif2);
	method2->setType(type2);
	vector<KT_Param *> paramsListMethod2;
	paramsListMethod2.push_back(param1);
	paramsListMethod2.push_back(param3);
	method2->setParams(paramsListMethod2);

	KT_SimpleMethod * method3 = new KT_SimpleMethod();
	string * nameMethod3 = new string("p3");
	method3->setName(nameMethod3);
	method3->setModifier(modif3);
	method3->setType(type3);
	vector<KT_Param *> paramsListMethod3;
	paramsListMethod3.push_back(param1);
	paramsListMethod3.push_back(param2);
	paramsListMethod3.push_back(param3);
	method3->setParams(paramsListMethod3);

	KT_SimpleMethod * method4 = new KT_SimpleMethod();
	string * nameMethod4 = new string("p1");
	method4->setName(nameMethod4);
	method4->setModifier(modif1);
	method4->setType(type1);
	vector<KT_Param *> paramsListMethod4;
	paramsListMethod4.push_back(param1);
	paramsListMethod4.push_back(param2);
	method4->setParams(paramsListMethod4);

	// *****************************************************************************
	// ************************ PROTOTYPE ******************************************
	// *****************************************************************************

	KT_Prototype * p1 = new KT_Prototype();
	string * nameProto1 = new string("p1");
	p1->setName(nameProto1);
	p1->setModifier(modif1);
	p1->setReturnType(type1);
	vector<KT_Param *> paramsList;
	paramsList.push_back(param1);
	paramsList.push_back(param2);
	p1->setParams(paramsList);

	KT_Prototype * p2 = new KT_Prototype();
	string * nameProto2 = new string("p2");
	p2->setName(nameProto2);
	p2->setModifier(modif3);
	p2->setReturnType(type2);
	vector<KT_Param *> paramsList2;
	paramsList2.push_back(param1);
	p2->setParams(paramsList2);

	KT_Prototype * p3 = new KT_Prototype();
	string * nameProto3 = new string("p3");
	p3->setName(nameProto3);
	p3->setModifier(modif3);
	p3->setReturnType(type3);
	vector<KT_Param *> paramsList3;
	paramsList3.push_back(param1);
	paramsList3.push_back(param2);
	paramsList3.push_back(param3);
	p3->setParams(paramsList3);

	KT_Prototype * p4 = new KT_Prototype();
	string * nameProto4 = new string("p4");
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
	vector<KT_Prototype *> protoList2;
	protoList2.push_back(p1);
	interface2->setPrototypes(protoList2);
	interface2->setName(interfaceName2);

	KT_Interface * interface3 = new KT_Interface();
	string * interfaceName3 = new string("i3");
	vector<KT_Prototype *> protoList3;
	protoList3.push_back(p1);
	protoList3.push_back(p2);
	protoList3.push_back(p4);
	interface3->setPrototypes(protoList3);
	interface3->setName(interfaceName3);

	KT_Interface * interface4 = new KT_Interface();
	string * interfaceName4 = new string("i4");
	interface4->setName(interfaceName4);
	vector<string *> intList;
	intList.push_back(interfaceName2);
	interface4->setInterfacesparent(intList);
	vector<KT_Prototype *> protoList4;
	protoList4.push_back(p3);
	protoList4.push_back(p1);
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
    interfaceLists.push_back(interfaceName2);
//    interfaceLists.push_back(interfaceName1);
	class2->setParentInterfaces(interfaceLists);
	class2->addMethod(method3);
	class2->addMethod(method4);

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

	createListOfType(prog);
	createHeritage(prog);
	decoration(prog);



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

	if (Semantic::existSemanticError) {
		cout << "\n\nIl y a des erreurs => compilation echouee => ICI CA PLANTE :D" << endl;
		return -1;
	} else {
		cout << "\n\nCompilation reussie" << endl;
		return 0;
	}
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
