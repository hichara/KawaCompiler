#include "FunctionGenerator.h"

#include "NameBuilder.h"




Function *createMethode(Module *module, int index, bool isStatic,
									std::string className,
									std::string name,
									std::string ret_type,
									std::vector<std::string> args_types,									
									std::vector<std::string> args_names) {

	if(className == "")
		KawaUtilitarty::stopGenerationIR(EMPTY_CLASS_NAME);

	if(name == "")
		KawaUtilitarty::stopGenerationIR(EMPTY_METHODE_NAME);


	if(args_types.size() != args_names.size())
		KawaUtilitarty::stopGenerationIR(MISMATCH_NB_ARGS_NB_TYPES);
		

	std:string functionName = (isStatic)
			: NameBuilder::buildFunctionName(className, name, args_types)
			? NameBuilder::buildStaticFunctionName(className, name, args_types);

	GlobalVariableGenerator::createIndex(module, functionName, index);

	Funtion *f = module->getFonction(functionName);

	if(!f->empty())
		KawaUtilitarty::stopGenerationIR(FUNCTION_ALREADY_EXIST);

	Type *r_type = NameBuilder::StrToLLVMType(ret_type, module);

	//Pointeur sur l'objet effectuant l'appel de la fonction
	Type *c_type = NameBuilder::StrToLLVMType(className, module).getPointerTy();

	std::vector<Type*> list_type;

	list_type.push_back(c_type);

	for(std::std::vector<std::string::iterator *it = args_type.begin(); 
		it != args_type.end(); ++it) {

		list_type.push_back(NameBuilder::StrToLLVMType(ret_type, module));
	}

	FunctionType *ftype = FunctionType::get(r_type, list_type, false);

	Function *f = module->getOrInsertFunction (new Twine(functionName), ftype);

	Function::arg_iterator AI = f->arg_begin();
	unsigned Idx = 0;

	AI->setName(KAWA_THIS);

	while(Idx != args_names.size()) {
		AI->setName(args_names[Idx + 1]);
	}

	return f;
}


Function *createConstructor(Module *module,
								std::string className,
								std::vector<std::string> args_types,									
								std::vector<std::string> args_names) {
	if(className == "")
		KawaUtilitarty::stopGenerationIR(EMPTY_CLASS_NAME);

	if(args_types.size() != args_names.size())
		KawaUtilitarty::stopGenerationIR(MISMATCH_NB_ARGS_NB_TYPES);

	std:string functionName = NameBuilder::buildConstructorName(className, args_types);

	Funtion *f = module->getFonction(functionName);

	if(!f->empty())
		KawaUtilitarty::stopGenerationIR(FUNCTION_ALREADY_EXIST);

	//Pointeur sur l'objet effectuant l'appel de la fonction
	Type *c_type = NameBuilder::StrToLLVMType(className, module).getPointerTy();

	std::vector<Type*> list_type;

	list_type.push_back(c_type);

	for(std::std::vector<std::string::iterator *it = args_type.begin(); 
		it != args_type.end(); ++it) {

		list_type.push_back(NameBuilder::StrToLLVMType(ret_type, module));
	}

	FunctionType *ftype = FunctionType::get(r_type, list_type, false);

	Function *f = module->getOrInsertFunction (new Twine(functionName), ftype);

	Function::arg_iterator AI = f->arg_begin();
	unsigned Idx = 0;

	AI->setName(KAWA_THIS);

	while(Idx != args_names.size()) {
		AI->setName(args_names[Idx + 1]);
	}

	return f;
}

Function *getFonction(Module *module, std::string name) {
	return module->getFonction(name);
}

void addBlock(Function *f, BasicBlock *block) {
	block->insertInto(f);
}

void setBody(Function *f, BasicBlock* block) {
	f->deleteBody();
	block->insertInto(f);
}

void setBody(Function *f, std::std::vector<BasicBlock *> list_b) {
	f->deleteBody();	

	for(int i = 0; i < list_b.size(); i++) {
		b->insertInto(f);
	}
}

void setBody(Function *f, std::vector<Instruction *> list_inst;) {

	f->deleteBody();

	BasicBlock *b = BasicBlock::create(f->getContext());

	InstListType &li = b->getInstList();

	for(int i = 0; i < list_inst.size(); i++) {
		li.push_back(list_inst[i]);
	}
}

Value *getFunctionIndex(Module *module, std::string name) {

}