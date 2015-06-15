#include "IRCompiler.h"

#include "KT_includes.h"

std::vector<KT_Prototype*> IRCompiler::getActualMethodes(KT_Class* classe) {
/*	std::vector<KT_SimpleMethod*> methodes;
	std::vector<KT_Prototype*> herited, res;

	if(classe == NULL) {
		return res;
	}
	
	KT_Class* parent_classe = classe->getParentClasseSemantique();

	if(parent_classe == NULL) {
		std::cout << "Aucune parent pour la classe :" << *(classe->getFQN()) << "\n";
	} else {
		std::cout << "Parent pour la classe :" << *(classe->getFQN()) << " est ";		
		std::cout << *(parent_classe->getFQN()) << "\n";		
	}


	std::vector<KT_Interface*> interfaces = classe->getParentsInterfacesSemantique();

	bool redefined;

	// Initialisation des fonction nouvellements definies
	methodes = classe->getSimpleMethods();
	
	for(int i = 0; i < methodes.size(); i++) {
		res.push_back(methodes[i]->getPrototype());
	}

	// Ajout des methodes hérités
	herited = getActualMethodes(parent_classe);

	for(int i = 0; i < herited.size(); i++) {
		std::cout << "methode herirte " << *(herited[i]->getName()) << "\n";
		redefined = false;
		for(int j = 0; j < res.size(); j++) {
			if(isRedefiniton(res[j], herited[i])){
				redefined = true;
				break;
			}
		}

		if(!redefined) {
			res.push_back(herited[i]);
		}
	}

	// Ajout des methodes des interfaces pour les classes abstraites
	// Si des methodes sont ajoutés, la classe devient abstraite
	// Donc n'est pas supposé ajouter
	for(int k = 0; k < interfaces.size(); k++) {
		herited = getActualMethodes(interfaces[k]);

		for(int i = 0; i < herited.size(); i++) {
			redefined = false;
			for(int j = 0; j < res.size(); j++) {
				if(isRedefiniton(res[j], herited[i])){
					redefined = true;
					break;
				}
			}

			if(!redefined) {
				res.push_back(herited[i]);
			}
		}		
	}
*/
	return classe->getAllPrototypes();
}


std::vector<KT_Prototype*> IRCompiler::getActualMethodes(KT_Interface* interface) {
/*	std::vector<KT_Prototype*> res;

	if(interface == NULL) {
		return res;
	}


	// initialisation avec les methodes de bases
	res = interface->getPrototypes();

	// Ajout des methodes des interfaces meres
	std::vector<KT_Interface*> interfaces = interface->getParentsInterfacesSemantique();
	std::vector<KT_Prototype*> herited;

	bool redefined;
	for(int k = 0; k < interfaces.size(); k++) {
		herited = getActualMethodes(interfaces[k]);

		for(int i = 0; i < herited.size(); i++) {
			redefined = false;
			for(int j = 0; j < res.size(); j++) {
				if(isRedefiniton(res[j], herited[i])){
					redefined = true;
					break;
				}
			}

			if(!redefined) {
				res.push_back(herited[i]);
			}
		}		
	}
*/
	return interface->getPrototypes();
}

bool IRCompiler::isRedefiniton(KT_Prototype *p1, KT_Prototype *p2) {
	bool b1 = *(p1->getName()) == *(p2->getName());
    
	b1 = b1 && fqnType(
		p1->getReturnType()->getTypeName()) == fqnType(
		p2->getReturnType()->getTypeName());

    std::vector<KT_Param*> params1 = p1->getParams();
    std::vector<KT_Param*> params2 = p2->getParams();

    b1 = b1 && (params1.size() == params2.size());

	for(int i = 0; i < params1.size() && b1; i++) {
		std::string s1 = fqnType(params1[i]->getParamType()->getTypeName());
		std::string s2 = fqnType(params2[i]->getParamType()->getTypeName());

		b1 = (s1 == s2);
	}
    
	return b1;
}

std::vector<KT_Class*> IRCompiler::getAllParentClasses(KT_Class *classe) {
	KT_Class* parent;
	std::vector<KT_Class*> parent_classes;

	parent = classe->getParentClasseSemantique();

	// En cas d'heritage multiple
	while(parent != NULL) {
		parent_classes.push_back(parent);		
		parent = parent->getParentClasseSemantique();
	}

	return parent_classes;
}

std::vector<KT_Interface*> IRCompiler::getAllParentInterfaces(KT_Class* classe) {

	if(classe == NULL) {
		std::vector<KT_Interface*> res;
		return res;
	}

	std::vector<KT_Interface*> interfaces = classe->getParentsInterfacesSemantique();

	return interfaces;	
}

std::vector<KT_Interface*> IRCompiler::getAllParentInterfaces(KT_Interface* interface) {

	if(interface == NULL) {
		std::vector<KT_Interface*> res;
		return res;
	}

	std::vector<KT_Interface *> interfaces = interface->getParentsInterfacesSemantique();

	return interfaces;
}



std::vector<KT_Prototype*> IRCompiler::getPolymorphiqueMethodeFor(KT_Class* staticC, KT_Class* dynamicC) {

	std::vector<KT_Prototype*> static_prototypes = getActualMethodes(staticC)
	, dynamique_prototypes = getActualMethodes(dynamicC);

	return getPolymorphiqueMethodeFor(static_prototypes, dynamique_prototypes);
}

std::vector<KT_Prototype*> IRCompiler::getPolymorphiqueMethodeFor(KT_Interface* staticC, KT_Class* dynamiqueI) {

	std::vector<KT_Prototype *> static_prototypes = getActualMethodes(staticC);
	std::vector<KT_Prototype *> dynamique_prototypes = getActualMethodes(dynamiqueI);

	return getPolymorphiqueMethodeFor(static_prototypes, dynamique_prototypes);	
}


std::vector<KT_Prototype*> IRCompiler::getPolymorphiqueMethodeFor(KT_Interface* staticC, KT_Interface* dynamiqueI){

	std::vector<KT_Prototype*> static_prototypes = getActualMethodes(staticC);
	std::vector<KT_Prototype*> dynamique_prototypes = getActualMethodes(dynamiqueI);

	return getPolymorphiqueMethodeFor(static_prototypes, dynamique_prototypes);
}

// Extrait les fonction pour la table adHoc
std::vector<KT_Prototype*> IRCompiler::getPolymorphiqueMethodeFor(std::vector<KT_Prototype*> s, std::vector<KT_Prototype*> d) {
	std::vector<KT_Prototype*> res;

	int size_s = s.size();
	int size_d = d.size();

	for(int i = 0; i < size_s; i++) {
		KT_Modifier *m = s[i]->getModifier();

		if(m->getVisibility() == PRIVATE || m->isStatic())
			continue;

		for(int j = 0; j < size_d; j++) {
			if(isRedefiniton(s[i], d[j])) {
				res.push_back(d[j]);
			}
		}
	}

	return res;
}