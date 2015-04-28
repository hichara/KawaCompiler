

#include "IRCompiler.h"

#include "KT_includes.h"


Value* IRCompiler::compileStatement(KT_Statement *expr) {
	return expr->acceptIRCompiler(this);
}


Value* IRCompiler::compileAffectation(KT_Affectation *af) {
	KT_Expression *lexpr =  af->getLExpression();
	KT_Expression *rexpr =  af->getrExpression();

	Value *v1 = compileExpression(lexpr);
	Value *v2 = compileExpression(rexpr);

	v2 = BasicInstructionGenerator::stripVal(v2, getCurrentBlock());

	return BasicInstructionGenerator::createAffectation(
		getModule(), v1, v2, getCurrentBlock());
}

Value* IRCompiler::compilePrint(KT_Print *print) {
	std::vector<KT_FactFinal *> args = print->getArgs();

	IRBuilder<> buider(getModule()->getContext());
	buider.SetInsertPoint(getCurrentBlock());

	Function *f = FunctionGenerator::getOrCreatePutsFunction(getModule());

	for(int i = 0; i < args.size(); i++) {
		Value *v = compileFactFinal(args[i]);
		v = BasicInstructionGenerator::stripVal(v, getCurrentBlock());

		v = PrimitiveValueConverter::convertToStr(getModule(), v, getCurrentBlock());

		buider.CreateCall(f, v);
	}

	return f;
}


Value* IRCompiler::compileReturnStatement(KT_ReturnStatement *ret) {
	IRBuilder<> buider(getContext());
	buider.SetInsertPoint(getCurrentBlock());

	if(ret->isVoidReturn())
		buider.CreateRetVoid();

	Value *v = compileExpression(ret->getReturnExpression());

	v = BasicInstructionGenerator::stripVal(v, getCurrentBlock());

	return buider.CreateRet(v);	
}

