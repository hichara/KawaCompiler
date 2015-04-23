/**
 * Project Untitled
 */


#include "KT_ParamsMethodCall.h"

#include "../BackEnd/IRCompiler/IRCompiler.h"

/**
 * KT_ParamsMethodCall implementation
 */

KT_ParamsMethodCall::KT_ParamsMethodCall(){}

/**
 * @return KT_IndexedArray *
 */
KT_IndexedArray* KT_ParamsMethodCall::getIndexedArray() {
    return indexedArray;
}

/**
 * @return KT_Expression *
 */
KT_Expression* KT_ParamsMethodCall::getExpression() {
    return expression;
}

/**
 * @param KT_IndexedArray *
 */
void KT_ParamsMethodCall::setIndexedArray(KT_IndexedArray* var) {
	indexedArray=var;
}

/**
 * @param KT_Expression *
 */
void KT_ParamsMethodCall::setExpression(KT_Expression* var) {
	expression=var;
}

llvm::Value* KT_ParamsMethodCall::acceptIRCompiler(IRCompiler *compiler) {
	return compiler->compileParamsMethodCall(this);	
}
