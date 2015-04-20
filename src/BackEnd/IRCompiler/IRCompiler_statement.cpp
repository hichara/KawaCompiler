

#include "IRCompiler.h"



Value* IRCompiler::compile(KT_MethodCall *call) {
	KT_Prototype *proto = call->getMethod()->getPrototype();

	Value *caller;
	std::vector<Value*> args;

	return 
}
