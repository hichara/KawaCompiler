#include "IRCompiler.h"

#include "KT_includes.h"
#include "IRGen_includes.h"

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

int IRCompiler::getInbricationLevel() {
	return inbrication_level;
}


Type* IRCompiler::createType(KT_Interface* interface) {

	std::vector<std::string> att_names;
	std::vector<Type*> att_types;
	std::vector<bool> att_static;

	return TypeGenerator::createClassType(getModule(), 
								*(interface->getFQN()),
								att_names, att_types, att_static);	
}


Type* IRCompiler::createType(KT_Class *classe) {

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
								*(classe->getFQN()),
								att_names, att_types, att_static);
}

std::string IRCompiler::fqnType(std::vector<std::string*> vec) {
	std::stringstream res;

	res << *(vec[0]);
	for(int i = 1; i < vec.size(); i++) {
		res << "." << *(vec[i]);
	}

	return res.str();
}


void IRCompiler::debug(std::string msg) {
	if(debugOn){
		std::cout << "IRCompiler : " << msg << "\n";
	}

}









