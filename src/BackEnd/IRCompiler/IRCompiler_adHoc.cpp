

#include "IRCompiler.h"

#include "KT_includes.h"

Value* IRCompiler::createAdHocTable(KT_Class *classe) {
	std::stringstream str;
	str << "Table ad Hoc for classe "<< *(classe->getFQN());
	debug(str.str());
	return createAdHocTable(classe, classe);
}


Value* IRCompiler::createAdHocTable(KT_Interface* interface) {
	std::stringstream str;
	str << "Table ad Hoc for interface " << *(interface->getFQN());
	debug(str.str());

	return createAdHocTable(interface, interface);
}

Value* IRCompiler::createAdHocTable(KT_Class* c1, KT_Class* c2) {
	debug("creation table adHoc classe - classe");

	std::vector<KT_Class*> classes;
	std::vector<KT_Interface*> interfaces;
	std::vector<KT_Prototype*> methodes;
	std::vector<Function*> functions, cpyFunc;

	classes = getAllParentClasses(c1);
	interfaces = getAllParentInterfaces(c1);

	int size_c = classes.size();
	int size_i = interfaces.size();
	std::stringstream str;
	
	for(int i = 0; i < size_c; i++) {
		createAdHocTable(classes[i], c2);
	}

	for(int i = 0; i < size_i; i++) {
		createAdHocTable(interfaces[i], c2);
	}

	debug("calcul polymorph");

	methodes = getPolymorphiqueMethodeFor(c1, c2);

	debug("succes calcul polymorph");

	for(int i = 0; i < methodes.size(); i++) {
		functions.push_back(compile(methodes[i]));

		KT_Prototype *cpy = KawaTool::CopyPrototype(methodes[i]);
		cpy->setParentName(*(c1->getFQN()));
		cpyFunc.push_back(compile(cpy));
	}

	for(int i = 0; i < classes.size(); i++) {
		Function *f = FunctionGenerator::getAdHocTableFunction(getModule(), *(classes[i]->getFQN()), *(c2->getFQN()));
		functions.push_back(f);
		cpyFunc.push_back(f);
	}

	for(int i = 0; i < interfaces.size(); i++) {
		Function *f = FunctionGenerator::getAdHocTableFunction(getModule(), *(interfaces[i]->getFQN()), *(c2->getFQN()));
		functions.push_back(f);
		cpyFunc.push_back(f);
	}

	Function* f = FunctionGenerator::getAdHocTableFunction(getModule(), *(c1->getFQN()), *(c2->getFQN()));
	functions.push_back(f);
	cpyFunc.push_back(f);

	Value *v = GlobalVariableGenerator::createAdHocTable(getModule(), *(c1->getFQN()), 
				*(c2->getFQN()), functions);

	for(int i = 0; i < cpyFunc.size(); i++) {
		std::string indexName = NameBuilder::buildFunctionIndexName(cpyFunc[i]->getName().str());
		GlobalVariableGenerator::getOrCreateIndexOfMember(getModule(), indexName, i);		
	}

	f = FunctionGenerator::createAdHocTableFunction(getModule(), *(c1->getFQN()), *(c2->getFQN()));

	debug("fin creation table adHoc");

	return v;
}

Value* IRCompiler::createAdHocTable(KT_Interface* i1, KT_Class* c2) {
	debug("creation table adHoc interface - classe");

	std::vector<KT_Interface * > interfaces;
	std::vector<KT_Prototype*> methodes;
	std::vector<Function*> functions, cpyFunc;

	interfaces = getAllParentInterfaces(i1);

	int size_i = interfaces.size();

	for(int i = 0; i < size_i; i++) {
		createAdHocTable(interfaces[i], c2);
	}

	methodes = getPolymorphiqueMethodeFor(i1, c2);

	for(int i = 0; i < methodes.size(); i++) {
		functions.push_back(compile(methodes[i]));

		KT_Prototype *cpy = KawaTool::CopyPrototype(methodes[i]);
		cpy->setParentName(*(i1->getFQN()));
		cpyFunc.push_back(compile(cpy));	
	}

	for(int i = 0; i < interfaces.size(); i++) {
		Function *f = FunctionGenerator::getAdHocTableFunction(getModule(),*(interfaces[i]->getFQN()), *(c2->getFQN()));

		functions.push_back(f);
		cpyFunc.push_back(f);
	}

	Function* f = FunctionGenerator::getAdHocTableFunction(getModule(), *(i1->getFQN()), *(c2->getFQN()));
	functions.push_back(f);
	cpyFunc.push_back(f);

	Value *v = GlobalVariableGenerator::createAdHocTable(getModule(), *(i1->getFQN()), 
				*(c2->getFQN()), functions);

	for(int i = 0; i < cpyFunc.size(); i++) {
		std::string indexName = NameBuilder::buildFunctionIndexName(cpyFunc[i]->getName().str());
		GlobalVariableGenerator::getOrCreateIndexOfMember(getModule(), indexName, i);		
	}	

	f = FunctionGenerator::createAdHocTableFunction(getModule(), *(i1->getFQN()), *(c2->getFQN()));

	return v;
}

Value* IRCompiler::createAdHocTable(KT_Interface* i1, KT_Interface* i2) {
	debug("creation table adHoc interface - interface");

	std::vector<KT_Interface*> interfaces;
	std::vector<KT_Prototype*> methodes;
	std::vector<Function*> functions, cpyFunc;

	interfaces = getAllParentInterfaces(i1);

	int size_i = interfaces.size();

	for(int i = 0; i < size_i; i++) {
		createAdHocTable(interfaces[i], i2);
	}

	methodes = getPolymorphiqueMethodeFor(i1, i2);

	for(int i = 0; i < methodes.size(); i++) {
		functions.push_back(compile(methodes[i]));

		KT_Prototype *cpy = KawaTool::CopyPrototype(methodes[i]);
		cpy->setParentName(*(i1->getFQN()));
		cpyFunc.push_back(compile(cpy));
	}

	for(int i = 0; i < interfaces.size(); i++) {
		Function *f = FunctionGenerator::getAdHocTableFunction(getModule(), *(interfaces[i]->getFQN()), *(i2->getFQN()));
		functions.push_back(f);
		cpyFunc.push_back(f);
	}

	Function* f = FunctionGenerator::getAdHocTableFunction(getModule(), *(i1->getFQN()), *(i2->getFQN()));
	functions.push_back(f);
	cpyFunc.push_back(f);

	Value *v = GlobalVariableGenerator::createAdHocTable(getModule(), *(i1->getFQN()), 
				*(i2->getFQN()), functions);

	for(int i = 0; i < cpyFunc.size(); i++) {
		std::string indexName = NameBuilder::buildFunctionIndexName(cpyFunc[i]->getName().str());
		GlobalVariableGenerator::getOrCreateIndexOfMember(getModule(), indexName, i);		
	}	

	f = FunctionGenerator::createAdHocTableFunction(getModule(), *(i1->getFQN()), *(i2->getFQN()));

	return v;
}


