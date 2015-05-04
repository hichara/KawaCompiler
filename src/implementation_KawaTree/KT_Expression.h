/**
 * Project Untitled
 */


#ifndef _KT_EXPRESSION_H
#define _KT_EXPRESSION_H

#include "KT_IDExpression.h"
#include <stdio.h>
#include <string>
#include <vector>
#include "SemanticVisitor.h"
using namespace std;

#include "llvm/IR/Module.h"
class IRCompiler;


class KT_Expression: public KT_IDExpression {
public:
	KT_Expression() ;
	virtual ~KT_Expression();

    /**
     * @param ExprVisitor
     */
    //void accept( /*ExprVisitor*/);
	  virtual void accept(SemanticVisitor* visitor){};

    string* calculReturnType();

    /**
    * Methode accept pour le IRCompiler
    */
    //virtual llvm::Value* acceptIRCompiler(IRCompiler *compiler);

private:
	string* returnType;
};

#endif //_KT_EXPRESSION_H
