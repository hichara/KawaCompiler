/**
 * Project Untitled
 */

class KT_Expression;

#ifndef _KT_EXPRESSION_H
#define _KT_EXPRESSION_H


#include "KT_IDExpression.h"
#include <stdio.h>
#include <string>
#include <vector>


#include "llvm/IR/Module.h"
class IRCompiler;


using namespace std;


class KT_Expression: public KT_IDExpression {
public: 
	KT_Expression() ;
	~KT_Expression() ;
    
    /**
     * @param ExprVisitor
     */
    void accept( /*ExprVisitor*/);
    
    string* calculReturnType();

    llvm::Value *acceptIRCompiler(IRCompiler *compiler);

private:
	string* returnType;
};

#endif //_KT_EXPRESSION_H