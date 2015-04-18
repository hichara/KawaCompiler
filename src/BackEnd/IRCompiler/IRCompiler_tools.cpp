

std::vector<KT_Prototype*> IRCompiler::getActualMethodes(KT_Class*);
std::vector<KT_Prototype*> IRCompiler::getActualMethodes(KT_Interface*);



std::vector<KT_Class *> IRCompiler::getAllParentClasses(KT_Class *classe) {
	std::vector<KT_Class *> parent_classes;

	KT_Class* parent;

	parent = classe->getParentClasseSemantique();

	while(parent != NULL) {
		parent_classes.push_back(parent);
		parent = parent->getParentClasseSemantique();
	}

	return parent_classes;
}

std::vector<KT_Interface*> getAllParentInterfaces(KT_Class* classe) {
	std::vector<KT_Class*> parent_classes;
	std::vector<KT_Class*> parent_interfaces;

	if(classe == NULL) {
		std::vector<KT_Interface*> res;
		return res;
	}

	std::vector<KT_Interface*> res = getAllParentInterfaces(classe);
	std::vector<KT_Interface*> interfaces = classe->getParentsInterfacesSemantique();
	std::vector<KT_Interface*> tmp;

	for(int i = 0; i < res.size(); i++) {
		tmp = getParentsInterfacesSemantique(interfaces[i]);
		for(int j = 0; i < tmp.size(); j++) {
			if(!std::find(res.begin(), res.end(), tmp[i])) {
				res.push_back();
			}
		}		
	}

	return res;	
}

std::vector<KT_Interface *> getAllParentInterfaces(KT_Interface* interface) {
	std::vector<KT_Interface *> interfaces = interface->getParentsInterfacesSemantique();
	std::vector<KT_Interface *> res;

	int size = interfaces.size();
	for(int i = 0; i < size; i++) {
		tmp = getAllParentInterfaces(interfaces[i]);
		for(int j = 0; j < tmp.size(); j++) {
			if(!std::find(res.begin(), res.end(), tmp[i])) {
				res.push_back(tmp[i]);
			}
		}
	}

	return res;
}

std::vector<KT_Prototype *> solvePolymorphisme(KT_Class* staticC, KT_Class* dynamicC) {
	std::vector<KT_SimpleMethode *> static_methodes = staticC->getSimpleMethodes;
	std::vector<KT_SimpleMethode *> dynamic_methodes = dynamicC->getSimpleMethodes();

	std::vecor<KT_Prototype*> static_prototypes, dynamiqueC_prototypes;

	for(int i = 0; i < static_methodes.size(); i++) {
		Modifier *modifier = static_methodes[i]->getModifier();
		if(!modifier->isStatic() && !modifier->isPrivate()) {
			static_prototypes.push_back(static_methodes[i]->getPrototype());
		}
	}

	for(int i = 0; i < dynamique_methodes.size(); i++) {
		Modifier *modifier = static_methodes[i]->getModifier();
		if(!modifier->isStatic() && !modifier->isPrivate()) {
			static_prototypes.push_back(static_methodes[i]->getPrototype());
		}
	}

	return solvePolymorpheMethode(static_prototypes, static_prototypes);
}

std::vector<KT_Methode *> getPolymorphiqueMethodeFor(KT_Class* staticC, KT_Class* dynamiqueI) {
	std::vector<KT_SimpleMethode *> static_methodes = staticC->getSimpleMethodes;
	std::vector<KT_SimpleMethode *> dynamic_methodes = dynamicC->getSimpleMethodes();

	std::vecor<KT_Prototype*> static_prototypes, dynamiqueC_prototypes;

	for(int i = 0; i < static_methodes.size(); i++) {
		Modifier *modifier = static_methodes[i]->getModifier();
		if(!modifier->isStatic() && !modifier->isPrivate()) {
			static_prototypes.push_back(static_methodes[i]->getPrototype());
		}
	}

	for(int i = 0; i < dynamique_methodes.size(); i++) {
		Modifier *modifier = static_methodes[i]->getModifier();
		if(!modifier->isStatic() && !modifier->isPrivate()) {
			static_prototypes.push_back(static_methodes[i]->getPrototype());
		}
	}

	return solvePolymorpheMethode(static_prototypes, static_prototypes);	
}

std::vector<KT_Methode *> getPolymorphiqueMethodeFor(KT_Interface* staticC, KT_Interface* dynamiqueI){

	std::vector<KT_Prototype*> static_prototypes
	std::vector<KT_Prototype*> dynamiqueC_prototypes;

	for(int i = 0; i < static_methodes.size(); i++) {
		Modifier *modifier = static_methodes[i]->getModifier();
		if(!modifier->isStatic() && !modifier->isPrivate()) {
			static_prototypes.push_back(static_methodes[i]->getPrototype());
		}
	}

	for(int i = 0; i < dynamique_methodes.size(); i++) {
		Modifier *modifier = static_methodes[i]->getModifier();
		if(!modifier->isStatic() && !modifier->isPrivate()) {
			static_prototypes.push_back(static_methodes[i]->getPrototype());
		}
	}

	return solvePolymorpheMethode(static_prototypes, static_prototypes);
}

// Extraite les fonction pour la table adHoc
std::vector<KT_Methode *> getPolymorphiqueMethodeFor(std::vector<KT_Prototype*> s, std::vector<KT_Prototype*> d) {
	std::vector<KT_Prototype*> res;

	int size_s = d.size();
	int size_d = d.size();
	bool found = false;

	for(int i = 0; i < size_s; i++) {
		Modifier *f = s[i]->getModifier();

		if(s[i]->isPrivate() || s[i]->isStatic())
			continue;

		for(int j = 0; j < size_d; j++) {
			if(s[i]->equal(d[j])) {
				res.push_back(s[i]);
				break;
			}
		}
	}

	return res;
}