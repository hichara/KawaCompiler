

#include "IRCompiler.h"

#include "KT_includes.h"

Value* IRCompiler::compileExpression(KT_Expression *expr) {
	debug("compiling a KT_Expression");

	return expr->acceptIRCompiler(this);
}

Value *IRCompiler::compileFactFinal(KT_FactFinal *expr) {
	debug("compiling a KT_FactFinal");

	return expr->acceptIRCompiler(this);
}

Value* IRCompiler::compileMethodOrVarCall(KT_MethodOrVarCall *call) {
	debug("compiling a KT_MethodOrVarCall");

	return call->acceptIRCompiler(this);
}

Value* IRCompiler::compileVarOrAttr(KT_VarOrAttr *call) {
	debug("compiling a KT_VarOrAttr");

	return call->acceptIRCompiler(this);
}


Value* IRCompiler::compileLinkedMethodOrVarCall(KT_LinkedMethodOrVarCall* link) {
	debug("compiling a KT_LinkedMethodORVarCall");

	std::vector<KT_MethodOrVarCall*> linked = link->getMixedCall();

	Value *v = NULL;
	for(int i = 0; i < linked.size(); i++) {
		linked[i]->whoAmI();
		v = compileExpression(linked[i]);
	}

	debug("end linked call");

	return v;	
}

Value *IRCompiler::compileParamsMethodCall(KT_ParamsMethodCall *pmc) {	
	debug("compiling a KT_ParamsMethodCall");

	return compileExpression(pmc->getExpression());
}


Value* IRCompiler::compileEntier(KT_Entier *expr) {
	debug("compiling a KT_Entier");

	return PrimitiveCreator::create(expr->getValue(), getContext());
}

Value* IRCompiler::compileString(KT_String *expr) {
	debug("compiling a KT_String");

	std::string s = *(expr->getValue());
	return PrimitiveCreator::create(s, getCurrentBlock());
}

Value* IRCompiler::compileMethodCall(KT_MethodCall *call) {
	debug("compiling a MethodCall");

	KT_Prototype *proto = call->getMethod()->getPrototype();
	bool isStatic = proto->getModifier()->isStatic();

	Function *f = compile(proto);	
	std::string index_str = NameBuilder::buildFunctionIndexName(
		f->getName().str());

	std::vector<KT_ParamsMethodCall*> params = call->getParams();
	std::vector<Value*> v_args;
	std::vector<Type*> param_types;

	for(int i = 0; i < proto->getParams().size(); i++) {
		std::string tn = fqnType(proto->getParams()[i]->getParamType()->getTypeName());
		param_types.push_back(TypeGenerator::strToLLVMType(getModule(), tn));
	}

	IRBuilder<> builder(getModule()->getContext());
	builder.SetInsertPoint(getCurrentBlock());


	for(int i = 0; i < params.size(); i++) {
		Value *v = compileExpression(params[i]->getExpression());
		v = BasicInstructionGenerator::stripVal(v, getCurrentBlock());

		v_args.push_back(v);
	}

	if(isStatic) {
		return CallGenerator::createStaticMethodeCall(getModule(),
			f->getName().str(), v_args, getCurrentBlock());
	}

	Value *caller = compileVarOrAttr(call->getCaller());

	Value *index = GlobalVariableGenerator::getOrCreateIndexOfMember(getModule(), index_str);
	index = builder.CreateLoad(index);

	return CallGenerator::createMethodeCall(getModule(),
	 f, caller, v_args, index, getCurrentBlock());
}


Value* IRCompiler::compileConstructorCall(KT_ConstructorCall *call) {
	debug("compiling a KT_ConstructorCall");


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
  			name, params_types, params_names);

  	std::string consName = f->getName().str();

	std::vector<KT_ParamsMethodCall*> params_call = call->getParams();
	std::vector<Value*> v_args;

	IRBuilder<> builder(getModule()->getContext());

	for(int i = 0; i < params.size(); i++) {
		Value *v = compileExpression(params_call[i]->getExpression());
		v = BasicInstructionGenerator::stripVal(v, getCurrentBlock());

		builder.SetInsertPoint(getCurrentBlock());
		Value *vv = builder.CreateAlloca(TypeGenerator::strToLLVMType(getModule(),
				 params_types[i]));

		BasicInstructionGenerator::createAffectation(getModule(),
			vv, v, getCurrentBlock());

		v_args.push_back(v);
	}

	Value* res = CallGenerator::createStaticMethodeCall(getModule(),
					 consName, v_args, getCurrentBlock());

	debug("call done");

	return res;
}

Value* IRCompiler::compileID(KT_ID *id) {
	debug("compiling a KT_ID");

	ValueSymbolTable &table = currentFunction->getValueSymbolTable();
	Value *v;

	// Concatene le nom
	std::string v_name = fqnType(id->getValue());

	int currentlvl = getInbricationLevel();

	while(currentlvl >= 0) {
		std::stringstream str;
		str << v_name;

		v = table.lookup(str.str());
		if(v != NULL) {
			return v;
		}

		str << "_" << currentlvl;
		v = table.lookup(str.str());
		if(v != NULL) {
			return v;
		}


		currentlvl--;
	}

	std::stringstream s;

	s << v_name << " not found\n";

	KawaUtilitary::stopGenerationIR(s.str());

	return NULL;
}


Value* IRCompiler::compileNULL(KT_Null *vnull) {
	debug("compiling a KT_Null");

	return PrimitiveCreator::createNull(getModule());
}

Value* IRCompiler::compileAddition(KT_Addition *add) {
	debug("compiling a KT_Addition");

	Value* vl = compileExpression(add->getLExpression());
	Value* vg = compileExpression(add->getRExpression());

	vl = BasicInstructionGenerator::stripVal(vl, getCurrentBlock());
	vg = BasicInstructionGenerator::stripVal(vg, getCurrentBlock());

	Type *t = PrimitiveValueConverter::dominatingType(vl->getType(), vg->getType());

	return PrimitiveBinaryOperationGenerator::createAdd(getModule(), t, vl, vg, getCurrentBlock());
}


Value* IRCompiler::compileLoadAttribute(KT_LoadAttribute *att) {

	if(att->isStatic()) {
		Type *t = TypeGenerator::strToLLVMType(getModule(), att->getType());
		return GlobalVariableGenerator::getOrCreateStaticAttribut(getModule(), att->getClassName(), att->getAttName(), t);
	}

	return BasicInstructionGenerator::createLoadAttribute(getModule(), 
		compileExpression(att->getCaller()), att->getIndex(), getCurrentBlock());
}
