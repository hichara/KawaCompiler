

#include "IRCompiler.h"


Value* IRCompiler::compileExpression(KT_Expression *expr) {
	return expr->acceptIRCompiler(this);
}

Value *IRCompiler::compileFactFinal(KT_FactFinal *expr) {
	return expr->acceptIRCompiler(this);
}

Value *IRCompiler::compileParamsMethodCall(KT_ParamsMethodCall *pmc) {
	return pmc->acceptIRCompiler(this);
}

Value* IRCompiler::compileMethodOrVarCall(KT_MethodOrVarCall *call) {
	return call->acceptIRCompiler(this);
}

Value* IRCompiler::compileVarOrAttr(KT_VarOrAttr *call) {
	return call->acceptIRCompiler(this);
}


Value* IRCompiler::compileEntier(KT_Entier *expr) {
	return PrimitiveCreator::create(expr->getValue(), getContext());
}

Value* IRCompiler::compileString(KT_String *expr) {
	std::string s = *(expr->getValue());
	return PrimitiveCreator::create(s, getCurrentBlock());
}

Value* IRCompiler::compileMethodCall(KT_MethodCall *call) {
	KT_Prototype *proto = call->getMethod()->getPrototype();
	
	Value *caller = compileVarOrAttr(call->getCaller());

	Function *f = compile(proto);	
	std::string index_str = NameBuilder::buildFunctionIndexName(
		f->getName().str());

	std::vector<KT_ParamsMethodCall*> params = call->getParams();
	std::vector<Value*> v_args;

	for(int i = 0; i < params.size(); i++) {
		Value *v  = compileExpression(params[i]->getExpression());
		v = BasicInstructionGenerator::stripVal(v, getCurrentBlock());
		v_args.push_back(v);
	}

	Value *index = GlobalVariableGenerator::getOrCreateIndexOfMember(getModule(), index_str);

	return CallGenerator::createMethodeCall(getModule(),
	 f, caller, v_args, index, getCurrentBlock());
}


Value* IRCompiler::compileConstructorCall(KT_ConstructorCall *call) {
	KT_Constructor *cons = call->getMethod();
	std::string name = *(cons->getName());
	std::vector<KT_Param*> params = cons->getParams();

  	std::vector<std::string> params_names;
  	std::vector<std::string> params_types;

  	for(int i = 0; i < params.size(); i++) {
  		params_names.push_back(*(params[i]->getName()));
  		params_types.push_back(fqnType(params[i]->getParamType()->getTypeName()));
  	}

  	Function *f = FunctionGenerator::getOrCreateConstructor(getModule(),
								name,
								params_types,									
								params_names);

  	f = FunctionGenerator::getConstructor(getModule(),
  			name, params_types, params_types);

  	std::string consName = f->getName().str();

	std::vector<KT_ParamsMethodCall*> params_call = call->getParams();
	std::vector<Value*> v_args;

	for(int i = 0; i < params.size(); i++) {
		Value *v  = compileExpression(params_call[i]->getExpression());
		v = BasicInstructionGenerator::stripVal(v, getCurrentBlock());
		v_args.push_back(v);
	}

	Value* res = CallGenerator::createStaticMethodeCall(getModule(),
					 consName, v_args, getCurrentBlock());

	return res;
}

Value* IRCompiler::compileVariable(KT_Variable *id) {
	ValueSymbolTable &table = currentFunction->getValueSymbolTable();
	Value *v;

	// Concatene le nom
	std::string v_name = fqnType(id->getName());

	int currentlvl = getInbricationLevel();

	while(currentlvl >= 0) {
		std::stringstream str;
		str << v_name << "_" << currentlvl;

		v = table.lookup(v_name);
		if(v != NULL) {
			return v;
		}

		currentlvl--;
	}

	std::stringstream s;

	s << "error : " << v_name << " not found\n";

	KawaUtilitary::stopGenerationIR(s.str());
}


Value* IRCompiler::compileNULL(KT_Null *vnull) {
	return PrimitiveCreator::createNull(getModule()->getContext());
}



