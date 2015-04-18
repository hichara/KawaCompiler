



IRCompiler() {
  InitializeNativeTarget();
  IRcontext = getGlobalContext();
}


LLVMContext& getContext() {
	return IRcontext;
}

Module* getModule() {
	return IRmodule;
}


Function* currentFunction() {
	return currentFunction;
}


BasicBlock* getCurrentBlock() {
	return currentFunction;
}


void IRCompiler::compile(KT_Program *program) {

  IRmodule = new Module(program->toString(), IRcontext);

  std::vector<KT_Package*> pckgs = program->getPackages();

  int size = pckgs.size();

  for(int i = 0; i < size; i++) {
  	compile(pckgs[i]);
  }
}

void IRCompiler::compile(KT_Package *package) {
  std::vector<KT_Class*> classes = package->getClasses(); 
  std::vector<KT_Interface*> interfaces = package->getInterfaces();

  int size_i = interfaces.size();
  int size_c = classes.size();  

  for(int i = 0; i < size_i; i++) {
  	compile(interfaces[i]);
  }

  for(int i = 0; i < size_c; i++) {
  	compile(classes[i]);
  }
}


void IRCompiler::compile(KT_Class *classe) {

	currentClassOrInterface = classe;

	KT_Class *pC = classe->getParentClasseSemantique();

	if(pC != NULL) {
		compile(pC);
		currentClass = classe;
		compilingState = COMPILING_CLASS;
	}

	std::vector<KT_Interface*> pInfs = classe->getParentInterfaces();

	if(pInfs.size() != 0) {
		for(int  i = 0; i < pInfs.size(); i++) {
			compile(pInfs[i]);
		}
		compilingState = COMPILING_CLASS;
	}


	std::vector<KT_Attribute> *attribut = classe->getAttributes();

	std::vector<KT_SimpleMethod*> s_mehtodes = classe->getSimpleMethods();

	std::vector<KT_Constructor*> c_constructors = classe->getConstructors();

	// A completer

	int size_m = s_mehtodes.size();
	int size_c = c_constructors.size();

	for(int i = 0; i < size_m; i++) {
		compile(s_mehtodes[i]);
	}

	for(int i = 0; i < size_m; i++) {
		compile(c_constructors);
	}

	currentClass = NULL;
}

void IRCompiler::compile(KT_Interface *interface) {

}

Function *compile(KT_Prototype *p) { 

  KT_Modifier* modifier = p->getModifier();

  std::string name = *(p->getName()):
  std::vector<KT_Param *> params = p->getParams();
  std::stirng r_type = p->getReturnType()->getTypeName();

  bool istatic = modifier->istatic();

  //parametres
  std::vector<std::string> params_names;
  std::vector<std::string> params_types;
  std::vector<std::bool> params_isStatic;

  for(int i = 0; i < params.size(); i++) {
  	params.push_back(params[i]->getName());
  	params.push_back(params[i]->getParamType()->getTypeName());
  	params.push_back(params[i]->getParamModifier()->istatic());
  }

  return FunctionGenerator::createPrototype(IRmodule, isStatic,
									std::string className,
									std::string name,
									std::string ret_type, 
									std::vector<std::string> args_types,
									std::vector<std::string> args_names) {

}

Function *compile(KT_SimpleMethode *methode);


void compile(KT_Print *print);


void compile(KT_Block *block);
