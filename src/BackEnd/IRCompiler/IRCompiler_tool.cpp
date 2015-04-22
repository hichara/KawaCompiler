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

int IRCompiler::getInbricationLevel() {
	return inbrication_level;
}


Type* IRCompiler::createType(KT_Interface* interface) {

	std::vector<std::string> att_names;
	std::vector<Type*> att_types;
	std::vector<bool> att_static;

	return TypeGenerator::createClassType(getModule(), 
								*(interface->getName()),
								att_names, att_types, att_static);	
}

std::string IRCompiler::fqnType(std::vector<string*> vec) {
	std::stringstream res;

	res << *(vec[0]);
	for(int i = 1; i < vec.size(); i++) {
		res << "." << *(vec[i]);
	}

	return res.str();
}









