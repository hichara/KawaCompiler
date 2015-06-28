

#include "IRCompiler.h"

#include "KT_includes.h"


Value* IRCompiler::compileStatement(KT_Statement *expr) {
	debug("compiling a KT_Statement");

	return expr->acceptIRCompiler(this);
}

Value* IRCompiler::compileVariable(KT_Variable *var) {
	debug("compiling a KT_Variable");

	if(var == NULL) {
		debug("KT_Variable *var == NULL");
	}


	std::string name = fqnType(var->getName());

	std::string type = fqnType(var->getType()->getTypeName());

	debug(name);
	debug(type);

	std::stringstream r_name;

	if(var->getType() == NULL) {
		debug("No type");
	}

	r_name << name << "_" << getInbricationLevel();

	Type *t = TypeGenerator::strToLLVMType(getModule(), type);

	Value *dec = BasicInstructionGenerator::createDeclaration(r_name.str(), t, getCurrentBlock());

	KT_Expression *expr = var->getValue();

	if(expr != NULL) {
		Value *v = compileExpression(expr);

		v = BasicInstructionGenerator::stripVal(v, getCurrentBlock());

		return BasicInstructionGenerator::createAffectation(getModule(),
			dec, v, getCurrentBlock());
	}

	debug("fin compiling a KT_Variable");

	return dec;
}


Value* IRCompiler::compileAffectation(KT_Affectation *af) {
	if(af == NULL) {
		debug("KT_Affectation *aff == NULL");
	}

	debug("compiling a KT_Affectation");

	KT_Expression *lexpr =  af->getLExpression();
	KT_Expression *rexpr =  af->getrExpression();

	Value *v1 = compileExpression(lexpr);
	Value *v2 = compileExpression(rexpr);

	debug("bofore strip");

	v2 = BasicInstructionGenerator::stripVal(v2, getCurrentBlock());

	debug("before affectation");

	return BasicInstructionGenerator::createAffectation(
		getModule(), v1, v2, getCurrentBlock());
}

Value* IRCompiler::compilePrint(KT_Print *print) {
	debug("compiling a KT_Print");

	std::vector<KT_FactFinal *> args = print->getArgs();

	IRBuilder<> buider(getModule()->getContext());
	buider.SetInsertPoint(getCurrentBlock());

	Function *f = FunctionGenerator::getOrCreatePrintf(getModule());

	for(int i = 0; i < args.size(); i++) {
		Value *v = compileFactFinal(args[i]);
		v = BasicInstructionGenerator::stripVal(v, getCurrentBlock());

		v = PrimitiveValueConverter::convertToStr(getModule(), v, getCurrentBlock());

		buider.CreateCall(f, v);
	}

	return f;
}


Value* IRCompiler::compileReturnStatement(KT_ReturnStatement *ret) {
	debug("compiling a KT_ReturnStatement");

	IRBuilder<> buider(getContext());
	buider.SetInsertPoint(getCurrentBlock());

	if(ret->isVoidReturn()) {
		return buider.CreateRetVoid();
	}

	Value *v = compileExpression(ret->getReturnExpression());

	v = BasicInstructionGenerator::stripVal(v, getCurrentBlock());

	return buider.CreateRet(v);	
}

Value* IRCompiler::compileBlockStatement(KT_BlockStatement *bstmt) {
	debug("compiling a KT_BlockStatement");

	std::cerr << "IR generation for KT_BlockStatement is not handled\n";
	exit(-1);
	return NULL;
}

Value* IRCompiler::compileBlock(KT_Block *bloc) {
	debug("compiling a KT_Block");

	// provisoire

	std::vector<KT_Statement*> stmnts;
	stmnts = bloc->getStatements();

	debug("Debut compilatiton statements"); 

	for(int i = 0; i < stmnts.size(); i++) {
		compileStatement(stmnts[i]);
	}

    debug("Fin Compilation statements");

    return NULL;
}



