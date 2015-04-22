
#include "IRCompiler.h"



void IRCompiler::compile(KT_Program *program) {
  
  // A completer
  IRmodule = new Module(program->getName(), IRcontext);

  std::vector<KT_Package*> pckgs = program->getPackages();

  int size = pckgs.size();

  for(int i = 0; i < size; i++) {
  	compile(pckgs[i]);
  }

  std::stringstream pName;

  pName << program->getName() << ".ll";

  int fd = open(pName.str().c_str(), O_CREAT | O_WRONLY, S_IRWXU | S_IRWXG | S_IRWXG);

  raw_fd_ostream my_out(fd, true);

  getModule()->print(my_out, NULL);
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
		att_names.push_back(*(att[i]->getName()));
		att_static.push_back(att[i]->getModifier()->isStatic());
		std::string strtype = fqnType(att[i]->getType()->getTypeName());
		att_types.push_back(
			TypeGenerator::strToLLVMType(getModule(), strtype));
	}

	return TypeGenerator::createClassType(getModule(), 
								*(classe->getName()),
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
  		params_types.push_back(fqnType(params[i]->getParamType()->getTypeName()));
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
 	currentFunction = f;

	std::vector<KT_Statement*> stmnts;
	stmnts = methode->getBlock()->getStatements();

	for(int i = 0; i < stmnts.size(); i++) {
		compileStatement(stmnts[i]);
	}

  return f;
}

Function* IRCompiler::compile(KT_Constructor * constructor) {

	std::string name = *(constructor->getName());
	std::vector<KT_Param*> params = constructor->getParams();

  	std::vector<std::string> params_names;
  	std::vector<std::string> params_types;

  	for(int i = 0; i < params.size(); i++) {
  		params_names.push_back(*(params[i]->getName()));
  		params_types.push_back(fqnType(params[i]->getParamType()->getTypeName()));
  	}

  	Function *f =  FunctionGenerator::getOrCreateConstructor(getModule(),
								name,
								params_types,									
								params_names);

  	currentBloc = FunctionGenerator::initFunction(f, params_names, true);

	std::vector<KT_Statement*> stmnts;
	stmnts = constructor->getBlock()->getStatements();

	for(int i = 0; i < stmnts.size(); i++) {
		compileStatement(stmnts[i]);
	}

	return FunctionGenerator::getConstructor(getModule(),
		name, params_types, params_names);
}
