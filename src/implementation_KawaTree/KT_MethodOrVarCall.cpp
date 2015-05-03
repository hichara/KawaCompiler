/**
 * Project Untitled
 */


#include "KT_MethodOrVarCall.h"
#include "../BackEnd/IRCompiler/IRCompiler.h"


/**
 * KT_MethodOrVarCall implementation
 */

KT_MethodOrVarCall::KT_MethodOrVarCall(){}
void KT_MethodOrVarCall::accept(SemanticVisitor* visitor){
	cout << "method or var call visited" << endl;
}

#include "../BackEnd/IRCompiler/IRCompiler.h"

llvm::Value* KT_MethodOrVarCall::acceptIRCompiler(IRCompiler *compiler) {
  return compiler->compileMethodOrVarCall(this);	
}
