/**
 * Project Untitled
 */


#include "KT_BlockStatement.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/**
 * KT_BlockStatement implementation
 */
 KT_BlockStatement::KT_BlockStatement() {}
 KT_BlockStatement::~KT_BlockStatement() {}
/**
 * @param StatementVisitor
 */
void KT_BlockStatement::accept(SemanticVisitor* visitor){
  visitor->visitBlockStatement(this);
}

void KT_BlockStatement::toString(){}



#include "../BackEnd/IRCompiler/IRCompiler.h"

llvm::Value* KT_BlockStatement::acceptIRCompiler(IRCompiler *compiler) {
	return compiler->compileBlockStatement(this);
}
