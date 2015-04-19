

std::vector<KT_Prototype*> IRCompiler::getActualMethodes(KT_Class* classe) {
	return classe->getAllPrototypes(classe);
}


std::vector<KT_Prototype*> IRCompiler::getActualMethodes(KT_Interface* interface) {
	return interface->getAllPrototypes(interface);
}

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

	std::vector<KT_Interface*> res = getAllParentInterfaces(parent_classe);
	std::vector<KT_Interface*> interfaces = classe->getParentsInterfacesSemantique();
	std::vector<KT_Interface*> tmp;

	for(int i = 0; i < res.size(); i++) {
		tmp = getAllParentInterfaces(interfaces[i]);
		for(int j = 0; i < tmp.size(); j++) {
			if(std::find(res.begin(), res.end(), tmp[i]) == res.end()) {
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
			if(std::find(res.begin(), res.end(), tmp[i]) == res.end()) {
				res.push_back(tmp[i]);
			}
		}
	}

	return res;
}

std::vector<KT_Prototype *> getPolymorphiqueMethodeFor(KT_Class* staticC, KT_Class* dynamicC) {

	std::vecor<KT_Prototype*> static_prototypes = getActualMethodes(staticC)
	, dynamique_prototypes = getActualMethodes(dynamicC);

	return solvePolymorpheMethode(static_prototypes, dynamic_prototypes);
}

std::vector<KT_Prototype *> getPolymorphiqueMethodeFor(KT_Interface* staticC, KT_Class* dynamiqueI) {

	std::vector<KT_Prototype *> static_prototypes = getActualMethodes(staticC);
	std::vector<KT_Prototype *> dynamique_prototypes = getActualMethodes(dynamiqueI);

	return getPolymorphiqueMethodeFor(static_prototypes, dynamique_prototypes);	
}


std::vector<KT_Prototype *> getPolymorphiqueMethodeFor(KT_Interface* staticC, KT_Interface* dynamiqueI){

	std::vector<KT_Prototype*> static_prototypes = getActualMethodes(staticC);
	std::vector<KT_Prototype*> dynamique_prototypes = getActualMethodes(dynamiqueI);

	return getPolymorphiqueMethodeFor(static_prototypes, dynamique_prototypes);
}

// Extrait les fonction pour la table adHoc
std::vector<KT_Prototype *> getPolymorphiqueMethodeFor(std::vector<KT_Prototype*> s, std::vector<KT_Prototype*> d) {
	std::vector<KT_Prototype*> res;

	int size_s = d.size();
	int size_d = d.size();
	bool found = false;

	for(int i = 0; i < size_s; i++) {
		Modifier *m = s[i]->getModifier();

		if(m->isPrivate() || m->isStatic())
			continue;

		for(int j = 0; j < size_d; j++) {
			if(s[i]->equal(d[j])) {
				res.push_back(d[i]);
				break;
			}
		}
	}

	return res;
}