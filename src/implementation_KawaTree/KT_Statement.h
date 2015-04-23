/**
 * Project Untitled
 */


class KT_Statement;

#ifndef _KT_STATEMENT_H
#define _KT_STATEMENT_H
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "SemanticVisitor.h"

#include "llvm/IR/Module.h"
class IRCompiler;


using namespace std;

class KT_Statement {
public:
	KT_Statement();
	
	/*virtual void toString() = 0;*/
	virtual void accept(SemanticVisitor* visitor);

	llvm::Value* acceptIRCompiler(IRCompiler *compiler);
};

#endif //_KT_STATEMENT_H