



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

	std::vector<KT_Interface*> pInfs = classe->getParentsInterfacesSemantique();

	if(pInfs.size() != 0) {
		for(int  i = 0; i < pInfs.size(); i++) {
			compile(pInfs[i]);
		}
		compilingState = COMPILING_CLASS;
		currentClass = classe;
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

Type* IRCompiler::compile(KT_Interface *interface) {

	currentInterface = interface;
	std::vector<KT_Interface*> pInfs = classe->getParentsInterfacesSemantique();

	if(pInfs.size() != 0) {
		for(int  i = 0; i < pInfs.size(); i++) {
			compile(pInfs[i]);
		}
		compilingState = COMPILING_CLASS;
		currentInterface = interface;
	}

	std::vector<KT_Prototype *> prototypes = interface->getPrototypes();

	for(int i = 0; i < prototypes.size(); i++) {
		compile(prototypes[i]);
	}


	currentInterface = NULL;
	// A completer
	// Generer la tabe adHoc
}


Function* IRCompiler::compile(KT_Prototype *p) { 
   std::string className;

  if(compilingState == COMPILING_CLASS) {
  	className = *(currentClass->getName());
  } else {
  	className = *(currentInterface->getName());
  }

  KT_Modifier* modifier = p->getModifier();

  std::string name = *(p->getName()):
  std::vector<KT_Param *> params = p->getParams();
  std::stirng r_type = p->getReturnType()->getTypeName();

  bool istatic = modifier->istatic();

  //parametres
  std::vector<std::string> params_names;
  std::vector<std::string> params_types;

  for(int i = 0; i < params.size(); i++) {
  	params.push_back(params[i]->getName());
  	params.push_back(params[i]->getParamType()->getTypeName());
  }

  Function *f =  FunctionGenerator::createPrototype(IRmodule, isStatic,
									className,
									name,
									ret_type, 
									params_types,
									parmas_names);

  nameMap[f] = f->getName();

  return f;
}

Function* IRCompiler::compile(KT_SimpleMethode *methode) {
	  std::string className;

	  if(compilingState == COMPILING_CLASS) {
	  	className = *(currentClass->getName());
	  } else {
	  	className = *(currentInterface->getName());
	  }

	std::vector<KT_Param*> parmas = methode->getParams();

	std::vector <std::string> args_names;
	std::vector <std::string> args_types;

	std::string ret_type = methode->getType()->getTypeName();

	bool isStatic = modifier->getModifier()->istatic();

	for(int i = 0; i < params.size(); i++) {
		args_names.push_back(params[i]->getName());
		args_types.push_back(params[i]->getType()->getTypeName());
	}

  Function *f =  FunctionGenerator::createPrototype(IRmodule, isStatic,
									className,
									name,
									ret_type, 
									args_names,
									args_types);

  nameMap[f] = f->getName();

  compile(methode->getBlock());

  return f;

}

void IRCompiler::compile(KT_Block *block) {
	std::vector<KT_Statement*> stmnts;

	stmnts = block->getStatements();

	for(int i = 0; i < stmnts.size(); i++) {
		compile(KT_Statement);
	}
}

Value* IRCompiler::compile(KT_Block *Statements) {
  // A completer
}

Value* IRCompiler::compile(KT_MethodCall *call) {
	//A completer
}

Value* IRCompiler::compile(KT_Print *print) {

	
}


