
#include "IRCompiler.h"

IRCompiler::IRCompiler() {
  InitializeNativeTarget();
}


LLVMContext& IRCompiler::getContext() {
	return IRcontext;
}

Module* IRCompiler::getModule() {
	return IRmodule;
}


Function* IRCompiler::getCurrentFunction() {
	return currentFunction;
}


BasicBlock* IRCompiler::getCurrentBlock() {
	return currentBloc;
}


void IRCompiler::compile(KT_Program *program) {
  
  // A completer
  IRmodule = new Module(program->getName(), IRcontext);

  std::vector<KT_Package*> pckgs = program->getPackages();

  int size = pckgs.size();

  for(int i = 0; i < size; i++) {
  	compile(pckgs[i]);
  }

/*  PassManager PM;
  PM.add(new PrintModulePass(&llvm::cout));
  PM.run(*Mod); */
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

  for(int i = 0; i < size_i; i++) {
  	createAdHocTable(interfaces[i]);
  }

  for(int i = 0; i < size_c; i++) {
  	createAdHocTable(classes[i]);
  }
}


void IRCompiler::compile(KT_Class *classe) {

	Type *t = createType(classe);

	std::vector<KT_SimpleMethod*> s_mehtodes = classe->getSimpleMethods();

	std::vector<KT_Constructor*> c_constructors = classe->getConstructors();

	int size_m = s_mehtodes.size();
	int size_c = c_constructors.size();

	for(int i = 0; i < size_m; i++) {
		compile(s_mehtodes[i]->getPrototype());
		compile(s_mehtodes[i]);
	}

	for(int i = 0; i < size_c; i++) {
		compile(c_constructors[i]);
	}
}

void IRCompiler::compile(KT_Interface *interface) {
  	createType(interface);

	std::vector<KT_Prototype *> prototypes = interface->getPrototypes();

	for(int i = 0; i < prototypes.size(); i++) {
		compile(prototypes[i]);
	}
}


Type* IRCompiler::createType(KT_Class * classe) {

	std::vector<KT_Attribute*> att = classe->getAttributes();

	std::vector<std::string> att_names;
	std::vector<Type*> att_types;
	std::vector<bool> att_static;

	for(int i = 0; i < att.size(); i++) {
//		A replacer appres
//		att_names.push_back(*(att[i]->getName()));
//		att_static.push_back(att[i]->getType()->isStatic());
//		att_types.push_back(
//			TypeGenerator::strToLLVMType(getModule(), att[i]->getType()->getTypeName()));
	}

	return TypeGenerator::createClassType(getModule(), 
								*(classe->getName()),
								att_names, att_types, att_static);
}


Type* IRCompiler::createType(KT_Interface* interface) {

	std::vector<std::string> att_names;
	std::vector<Type*> att_types;
	std::vector<bool> att_static;

	return TypeGenerator::createClassType(getModule(), 
								*(interface->getName()),
								att_names, att_types, att_static);	
}

Function* IRCompiler::compile(KT_Prototype *p) { 

	KT_Modifier* modifier = p->getModifier();

	std::string className = p->getParentName();
	std::string name = *(p->getName());
	std::vector<KT_Param* > params = p->getParams();
	std::string r_type /* =  p->getReturnType()->getTypeName() */;

	bool istatic = modifier->isStatic();

	//parametres
  	std::vector<std::string> params_names;
  	std::vector<std::string> params_types;

  	for(int i = 0; i < params.size(); i++) {
  		params_names.push_back(*(params[i]->getName()));
  		params_types.push_back(/* params[i]->getParamType()->getTypeName() */ NULL);
  	}

  	Function *f =  FunctionGenerator::getOrCreateFunction(getModule(), istatic,
									className,
									name,
									r_type, 
									params_types,
									params_names);

  return f;
}

Function* IRCompiler::compile(KT_SimpleMethod *methode) {
  
  	// A completer
 	KT_Prototype* proto = methode->getPrototype();
 	std::vector<KT_Param*> params = proto->getParams();
 	std::vector<std::string> param_names;
 	bool addThis = !proto->getModifier()->isStatic();

 	for(int i = 0; i < params.size(); i++){
 		param_names.push_back(*(params[i]->getName()));
 	}

 	Function *f = compile(methode->getPrototype());

 	currentBloc = FunctionGenerator::initFunction(f, param_names, addThis);

	std::vector<KT_Statement*> stmnts;
	stmnts = methode->getBlock()->getStatements();

	for(int i = 0; i < stmnts.size(); i++) {
		compile(stmnts[i]);
	}

  return f;
}



