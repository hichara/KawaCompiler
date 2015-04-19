




void IRCompiler::createAdHocTable(KT_Class *classe) {
	createAdHocTable(classe, classe);
}


void IRCompiler::createAdHocTable(KT_Interface* interface) {
	createAdHocTable(interface, interface);
}

void IRCompiler::createAdHocTable(KT_Class* c1, KT_Class* c2) {
	std::vector<KT_Class *> classes;
	std::vector<KT_Class * > interfaces;
	std::vector<KT_Prototype*> methodes;
	std::vector<Function*> functions;

	classes = getAllParentClass(c1);
	interfaces = getAllParentInterface(c1);

	int size_c = classes.size();
	int size_i = interfaces.size();

	for(int i = 0; i < size_c; i++) {
		createAdHocTable(classes[i], c2);
	}

	for(int i = 0; i < size_i; i++) {
		createAdHocTable(interfaces[i], c2);
	}

	methodes = getPolymorphiqueMethodeFor(c1, c2);

	for(int i = 0; i < methodes.size(); i++) {
		functions.push_back(map[methodes[i]]);
	}

	for(int i = 0; i < classes.size(); i++) {
		Function *f = FunctionGenerator::getOrCreateAdHocTableFunction(getModule(), classes[i]->getFQN(), c2->getFQN());
		functions.push_back(f);
	}

	for(int i = 0; i < classes.size(); i++) {
		Function *f = FunctionGenerator::getOrCreateAdHocTable(getModule(), interfaces[i]->getFQN(), c2->getFQN());
		functions.push_back(f);
	}

	functions.push_back();

	return Value* createAdHocTable(getModule(), c1->getFQN(), 
				c2->getFQN(), functions);
}

void IRCompiler::createAdHocTable(KT_Interface* i1, KT_Class* c2) {
	std::vector<KT_Class * > interfaces;
	std::vector<KT_Prototype*> methodes;
	std::vector<Function*> functions;

	interfaces = getAllParentInterface(i1);

	int size_i = interfaces.size();

	for(int i = 0; i < size_i; i++) {
		createAdHocTable(interfaces[i], c2);
	}

	methodes = getPolymorphiqueMethodeFor(i1, c2);

	for(int i = 0; i < methodes.size(); i++) {
		functions.push_back(map[methodes[i]]);
	}

	for(int i = 0; i < classes.size(); i++) {
		Function *f = FunctionGenerator::getOrCreateAdHocTableFunction(getModule(), interfaces[i]->getFQN(), c2->getFQN());
		functions.push_back(f);
	}

	return Value* createAdHocTable(getModule(), i1->getFQN(), 
				c2->getFQN(), functions);
}

void IRCompiler::createAdHocTable(KT_Interface* i1, KT_Interface* i2) {
	std::vector<KT_Class*> interfaces;
	std::vector<KT_Prototype*> methodes;
	std::vector<Function*> functions;

	interfaces = getAllParentInterface(i1);

	int size_i = interfaces.size();

	for(int i = 0; i < size_i; i++) {
		createAdHocTable(interfaces[i], i2);
	}

	methodes = getPolymorphiqueMethodeFor(i1, i2);

	for(int i = 0; i < methodes.size(); i++) {
		functions.push_back(map[methodes[i]]);
	}

	for(int i = 0; i < classes.size(); i++) {
		Function *f = FunctionGenerator::getOrCreateAdHocTableFunction(getModule(), interfaces[i]->getFQN(), i2->getFQN());
		functions.push_back(f);
	}

	return Value* createAdHocTable(getModule(), i1->getFQN(), 
				i2->getFQN(), functions);
}


