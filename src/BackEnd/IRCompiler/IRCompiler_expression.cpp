

#include "IRCompiler.h"



Value* IRCompiler::compile(KT_Expression *expr) {


}



Value* IRCompiler::compile(KT_Entier *expr) {
	return PrimitiveCreator::Create(expr->getValue(), getContext());
}

Value *IRCompiler::factFinal(KT_FactFinal *expr) {

}
