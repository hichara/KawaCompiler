/**
 * Project Untitled
 */


#include "KT_Statement.h"
#include "../BackEnd/IRCompiler/IRCompiler.h"


/**
 * KT_Statement implementation
 */

KT_Statement::KT_Statement(){}


void KT_Statement::toString() {
	cout << "toString for KT_Statement";
}



void KT_Statement::accept(SemanticVisitor* visitor){
	cout << "kt statement visited : " << endl;
	this->toString();
}

llvm::Value* KT_Statement::acceptIRCompiler(IRCompiler *compiler) {
  return compiler->compileStatement(this);	
}
