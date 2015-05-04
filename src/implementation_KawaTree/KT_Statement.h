/**
 * Project Untitled
 */


#ifndef _KT_STATEMENT_H
#define _KT_STATEMENT_H
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "SemanticVisitor.h"
using namespace std;

#include "llvm/IR/Module.h"
class IRCompiler;

class KT_Statement {
public:
	KT_Statement();
  virtual ~KT_Statement();
	virtual void toString();
	virtual void whoAmI();
	virtual void accept(SemanticVisitor* visitor);

	virtual llvm::Value *acceptIRCompiler(IRCompiler *compiler);	
};

#endif //_KT_STATEMENT_H
