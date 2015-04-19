#include "FunctionGenerator.h"


#include "NameBuilder.h"
#include "TypeGenerator.h"
#include "KawaUtilitary.h"
#include "KawaEnumeration.h"
#include "GlobalVariableGenerator.h"



BasicBlock* FunctionGenerator::initFunction(Function *f, std::vector<std::string> args_name, bool isStatic = true) {

  BasicBlock *b = BasicBlock::Create(f->getContext(), "entry", f);  
  IRBuilder<> builder(f->getContext());
  builder.SetInsertPoint(b);

  std::vector<std::string> real_args(args_name);

  if(!isStatic) {
	  real_args.insert(real_args.begin(), "this");  	
  }

  unsigned Idx = 0;
  int size = real_args.size(); 

  for(Function::arg_iterator AI = f->arg_begin(); Idx != size;
       ++AI, ++Idx) {
  	Value *v = builder.CreateAlloca(AI->getType(), AI, real_args[Idx]);
  	builder.CreateStore(AI, v);
  }
  
  return b;
}


Function* FunctionGenerator::getOrCreateFunction(Module *module, bool isStatic,
									std::string className,
									std::string name,
									std::string ret_type, 
									std::vector<std::string> args_types,
									std::vector<std::string> args_names) {

	if(className == "")
		KawaUtilitary::stopGenerationIR(ERROR_EMPTY_CLASS_STRING);

	if(name == "")
		KawaUtilitary::stopGenerationIR(ERROR_EMPTY_CLASS_STRING);


	if(args_types.size() != args_names.size())
		KawaUtilitary::stopGenerationIR(ERROR_ILLEGAL_NUMBER_OF_ARGS);
		
	std::string functionName =
			NameBuilder::buildFunctionName(className, name, ret_type, args_types, isStatic);

	Function *f = FunctionGenerator::getFunction(module, functionName);

	if(f != NULL)
		return f;


	Type *r_type = TypeGenerator::strToLLVMType(module, ret_type);

	std::vector<Type*> list_type;

	if(isStatic) {
		Type *c_type = TypeGenerator::strToLLVMType(module, className)->getPointerTo();
		list_type.push_back(c_type);
	}

	for(int i = 0; i < args_types.size(); i++) {
		Type *ty = TypeGenerator::strToLLVMType(module, args_types[i]);
		if(ty->isStructTy()) {
			ty = ty->getPointerTo();
		}
		list_type.push_back(ty);
	}

	FunctionType *ftype = FunctionType::get(r_type, list_type, false);

	f = Function::Create(ftype, Function::ExternalLinkage, functionName, module);

	return f;
}

Function* FunctionGenerator::getConstructor(Module *module,
								std::string className,
								std::vector<std::string> args_types,									
								std::vector<std::string> args_names) {

	std::string consName =
		NameBuilder::buildConstructorName(className, args_types);

	return FunctionGenerator::getFunction(module, consName);			
}

Function* FunctionGenerator::getSubConstructor(Module *module,
								std::string className,
								std::vector<std::string> args_types,									
								std::vector<std::string> args_names) {
	std::string subConsName =
		NameBuilder::buildSubConstructorName(className, args_types);

	return FunctionGenerator::getFunction(module, subConsName);	
}


Function* FunctionGenerator::getOrCreateConstructor(Module *module,
								std::string className,
								std::vector<std::string> args_types,									
								std::vector<std::string> args_names) {

	std::vector<Type*> argtypes;

	if(className == "")
		KawaUtilitary::stopGenerationIR(ERROR_EMPTY_CLASS_STRING);

	if(args_types.size() != args_names.size())
		KawaUtilitary::stopGenerationIR(ERROR_ILLEGAL_NUMBER_OF_ARGS);
		
	std::string consName =
		NameBuilder::buildConstructorName(className, args_types);

	std::string subConsName =
		NameBuilder::buildSubConstructorName(className, args_types);

	Function *f = 
		FunctionGenerator::getFunction(module, subConsName);


	// Teste de l'existence du constructeur
	if(f != NULL)
		return f;

	for(int i = 0; i < args_types.size(); i++) {
		Type *ty = TypeGenerator::strToLLVMType(module, args_types[i]);
		if(ty->isStructTy()) {
			ty = ty->getPointerTo();
		}
		argtypes.push_back(ty);
	}

	LLVMContext &context = module->getContext();
	
	FunctionType *cons_ftype, *sub_cons_ftype;
	Function *cons_f, *sub_cons_f;

	Type *classType = TypeGenerator::strToLLVMType(module, className);
	Type *voidTy = Type::getVoidTy(module->getContext());

	cons_ftype = FunctionType::get(classType->getPointerTo(), argtypes, false);

	argtypes.insert(argtypes.begin() ,classType->getPointerTo());
	sub_cons_ftype = FunctionType::get(voidTy, argtypes, false);

	cons_ftype->dump();
	std::cerr << "\n";

	sub_cons_ftype->dump();

	cons_f = Function::Create(cons_ftype, Function::ExternalLinkage, consName, module);
	sub_cons_f = Function::Create(sub_cons_ftype, Function::ExternalLinkage, subConsName, module);

	// Creation du corps du constructeur

	BasicBlock *b = BasicBlock::Create(context, "entry", cons_f);
	IRBuilder<> builder(context);
	builder.SetInsertPoint(b);


	//Instanciation du nouvel objet
	Value *instance = builder.CreateAlloca (classType, NULL, "instance");
	//insertion de la table adHoc a faire

	//Appel de la fonction d'initiallisation
	std::vector<Value*> callargs;
	callargs.push_back(instance);

	for(Function::arg_iterator AI = cons_f->arg_begin(); AI != cons_f->arg_end(); ++AI) {
		callargs.push_back(AI);
    }

	builder.CreateCall(sub_cons_f, callargs);

	builder.CreateRet(instance);

///	f = sub_cons_f;

	return f;	
}

Function* FunctionGenerator::getFunction(Module *module, std::string name) {
	return module->getFunction(name);
}

/*--------------------------------------------------------------------
 *--------------------------------------------------------------------
 */

Function* FunctionGenerator::getOrCreateMainFunction(Module *module, std::string aC, std::string aV) {
  Function *f = module->getFunction("main");

  if(f != NULL)
  	return f;

  std::vector<std::string> args_names;

  if(aC != "")
  	args_names.push_back(aC);
  if(aV != aC && aV != "")
  	args_names.push_back(aV);

  if(args_names.size() == 1)
  	KawaUtilitary::stopGenerationIR(ERROR_MAIN_ONLY_TWO_NOT_EMPTY_NAME_REQUIRED);

  LLVMContext &context = module->getContext();

  std::vector<Type *> args;

  if(args_names.size() == 2) {
    args.push_back(Type::getInt32Ty(context));
    args.push_back(Type::getInt8Ty(context)->getPointerTo()->getPointerTo());  	
  }

  FunctionType *ft = FunctionType::get(Type::getInt32Ty(context), args, false);

  f = Function::Create(ft, GlobalValue::ExternalLinkage ,"main", module);

  initFunction(f, args_names); 

  return f;
}


Function* FunctionGenerator::getOrCreatePutsFunction(Module *module) {
  
  Function *f = module->getFunction("puts");

  if(f != NULL)
  	return f;

  LLVMContext &context = module->getContext();

  std::vector<Type *> type_args;
  type_args.push_back(
      Type::getInt8Ty(context)->getPointerTo());

  FunctionType *ft = FunctionType::get(Type::getInt32Ty(context), type_args, false);

  f = Function::Create(ft, GlobalValue::ExternalLinkage, "puts", module);

  f->addFnAttr(Attribute::NoUnwind);

  return f;
}


Function* FunctionGenerator::getOrCreateStrlenFunction(Module *module) {
  Function *f = module->getFunction("strlen");

  if(f != NULL)
  	return f;


  LLVMContext &context = module->getContext();

  std::vector<Type *> type_args;
  type_args.push_back(
      Type::getInt8Ty(context)->getPointerTo());

  FunctionType *ft = FunctionType::get(Type::getInt32Ty(context), type_args, false);

  f = Function::Create(ft, GlobalValue::ExternalLinkage, "strlen", module);

  f->addFnAttr(Attribute::NoUnwind);

  return f;
}


Function* FunctionGenerator::getOrCreateMallocFunction(Module *module) {
  Function *f = module->getFunction("malloc");

  if(f != NULL)
  	return f;


  LLVMContext &context = module->getContext();

  std::vector<Type *> type_args;
  type_args.push_back(Type::getInt64Ty(context));

  FunctionType *ft = FunctionType::get(Type::getInt8Ty(context)->getPointerTo(), type_args, false);

  f = Function::Create(ft, GlobalValue::ExternalLinkage, "malloc", module);

  f->addFnAttr(Attribute::NoUnwind);

  return f;
}


Function* FunctionGenerator::getOrCreateStrcatFunction(Module *module) {

  Function *f = module->getFunction("strcat");

  if(f != NULL)
		return f;

  LLVMContext &context = module->getContext();

  Type* i8ptr = Type::getInt8Ty(context)->getPointerTo();

  std::vector<Type *> type_args;
  type_args.push_back(i8ptr);
  type_args.push_back(i8ptr);

  FunctionType *ft = FunctionType::get(i8ptr, type_args, false);

  f = Function::Create(ft, GlobalValue::ExternalLinkage, "strcat", module);

  return f;
}

Function* FunctionGenerator::getOrCreateCallocFunction(Module *module) {
	Function *f = module->getFunction("calloc");

	if(f != NULL)
		return f;

	LLVMContext &context = module->getContext();

	Type* i8 = Type::getInt8Ty(context);
	Type* i64 = Type::getInt64Ty(context);

	std::vector<Type*> args;

	args.push_back(i64);
	args.push_back(i64);

	FunctionType *ft = FunctionType::get(i8->getPointerTo(), args, false);
  
  	f = Function::Create(ft, GlobalValue::ExternalLinkage, "calloc", module);

  	return f;	
}

Function* FunctionGenerator::getOrCreateSprintf(Module *module) {
	Function *f = module->getFunction("sprintf");

	if(f != NULL)
		return f;

	LLVMContext &context = module->getContext();

	Type* i8 = Type::getInt8Ty(context);
	Type* i32 = Type::getInt32Ty(context);

	std::vector<Type*> args;

	args.push_back(i8->getPointerTo());
	args.push_back(i8->getPointerTo());

	FunctionType *ft = FunctionType::get(i32, args, true);
  
  	f = Function::Create(ft, GlobalValue::ExternalLinkage, "sprintf", module);

  	return f;
}



Function* FunctionGenerator::getOrCreateIntToStrFunction(Module *module) {
	Function *f = module->getFunction("int_to_str");

	if(f != NULL)
		return f;

	LLVMContext &context = module->getContext();
	GlobalVariable *gv = module->getGlobalVariable(KAWA_FORMAT_INT_TO_STRING);

	if(gv == NULL) {
		Type *i8ptr = Type::getInt8Ty(context)->getPointerTo();

		Constant* ar = ConstantDataArray::getString(context, "%d");

		gv = new GlobalVariable (*module, 
								ar->getType(),
			 					true,
			  					GlobalValue::ExternalLinkage,
			  					ar,
			  					KAWA_FORMAT_INT_TO_STRING);
	}

	//Creation de la fonction

	Type *i8 = Type::getInt8Ty(context);

	std::vector<Type*> args;

	args.push_back(Type::getInt32Ty(context));

	FunctionType *ft = FunctionType::get(i8->getPointerTo(), args, false);

	f = Function::Create(ft, GlobalValue::ExternalLinkage, "int_to_str", module);

	BasicBlock *b = BasicBlock::Create(module->getContext(), "entry", f);

	IRBuilder<> builder(context);
	builder.SetInsertPoint(b);

	Constant* size = ConstantInt::get(Type::getInt64Ty(context), 50);

	Value *format = builder.CreateBitCast(gv, Type::getInt8Ty(context)->getPointerTo());

	Function* mlc = FunctionGenerator::getOrCreateMallocFunction(module);
	Function* spf = FunctionGenerator::getOrCreateSprintf(module);
	Argument *arg = f->arg_begin();   // Get the arg.

	Value* space = builder.CreateCall(mlc, size);

	builder.CreateCall3(spf, space, format, arg);

	builder.CreateRet(space);

	return f;
}



Function* FunctionGenerator::getOrCreateDoubleToStrFunction(Module *module) {
	Function *f = module->getFunction("float_to_str");

	if(f != NULL)
		return f;

	LLVMContext &context = module->getContext();
	GlobalVariable *gv = module->getGlobalVariable(KAWA_FORMAT_DOUBLE_TO_STRING);

	if(gv == NULL) {
		Type *i8ptr = Type::getInt8Ty(context)->getPointerTo();

		Constant* ar = ConstantDataArray::getString(context, "%f");

		gv = new GlobalVariable (*module, 
								ar->getType(),
			 					true,
			  					GlobalValue::ExternalLinkage,
			  					ar,
			  					KAWA_FORMAT_DOUBLE_TO_STRING);
	}

	//Creation de la fonction

	Type *i8 = Type::getInt8Ty(context);

	std::vector<Type*> args;

	args.push_back(Type::getDoubleTy(context));

	FunctionType *ft = FunctionType::get(i8->getPointerTo(), args, false);

	f = Function::Create(ft, GlobalValue::ExternalLinkage, "float_to_str", module);

	BasicBlock *b = BasicBlock::Create(module->getContext(), "entry", f);

	IRBuilder<> builder(context);
	builder.SetInsertPoint(b);

	Constant* size = ConstantInt::get(Type::getInt64Ty(context), 50);

	Value *format = builder.CreateBitCast(gv, Type::getInt8Ty(context)->getPointerTo());

	Function* mlc = FunctionGenerator::getOrCreateMallocFunction(module);
	Function* spf = FunctionGenerator::getOrCreateSprintf(module);
	Argument *arg = f->arg_begin();   // Get the arg.

	Value* space = builder.CreateCall(mlc, size);

	builder.CreateCall3(spf, space, format, arg);

	builder.CreateRet(space);

	return f;
}


Function* FunctionGenerator::getOrCreateCharToStrFunction(Module *module) {
	Function *f = module->getFunction("char_to_str");

	if(f != NULL)
		return f;

	LLVMContext &context = module->getContext();
	GlobalVariable *gv = module->getGlobalVariable(KAWA_FORMAT_CHAR_TO_STRING);

	if(gv == NULL) {
		Type *i8ptr = Type::getInt8Ty(context)->getPointerTo();

		Constant* ar = ConstantDataArray::getString(context, "%c");

		gv = new GlobalVariable (*module, 
								ar->getType(),
			 					true,
			  					GlobalValue::ExternalLinkage,
			  					ar,
			  					KAWA_FORMAT_CHAR_TO_STRING);
	}

	//Creation de la fonction

	Type *i8 = Type::getInt8Ty(context);

	std::vector<Type*> args;

	args.push_back(i8);

	FunctionType *ft = FunctionType::get(i8->getPointerTo(), args, false);

	f = Function::Create(ft, GlobalValue::ExternalLinkage, "char_to_str", module);

	BasicBlock *b = BasicBlock::Create(module->getContext(), "entry", f);

	IRBuilder<> builder(context);
	builder.SetInsertPoint(b);

	Constant* size = ConstantInt::get(Type::getInt64Ty(context), 50);

	Value *format = builder.CreateBitCast(gv, Type::getInt8Ty(context)->getPointerTo());

	Function* mlc = FunctionGenerator::getOrCreateMallocFunction(module);
	Function* spf = FunctionGenerator::getOrCreateSprintf(module);
	Argument *arg = f->arg_begin();   // Get the arg.

	Value* space = builder.CreateCall(mlc, size);

	builder.CreateCall3(spf, space, format, arg);

	builder.CreateRet(space);

	return f;
}



Function* FunctionGenerator::getAdHocTableFunction(Module *module, 
			std::string nameStatic, std::string nameDyn) {

	std::string name = NameBuilder::buildgetAdHocTableFunction(nameStatic, nameDyn);

	Function *f =FunctionGenerator::getFunction(module, name);

	if(f != NULL)
		return f;

	Type* i8 = Type::getInt8Ty(module->getContext());
	std::vector<Type*> empty;
	FunctionType *ft = FunctionType::get(i8->getPointerTo()->getPointerTo(), empty, false);
	f = Function::Create(ft, GlobalValue::ExternalLinkage, name, module);

	return f;
}


Function* FunctionGenerator::createAdHocTableFunction(Module *module, 
			std::string nameStatic, std::string nameDyn) {

	Function *f = FunctionGenerator::getAdHocTableFunction(module, nameStatic, nameDyn);

	f->deleteBody();

	BasicBlock * b = BasicBlock::Create(module->getContext(), "entry", f);

	// A completer
	Value *v = GlobalVariableGenerator::getAdHocTable(module, nameStatic, nameDyn);

	IRBuilder<> builder(module->getContext());
	builder.CreateRet(v);

	return f;
}

