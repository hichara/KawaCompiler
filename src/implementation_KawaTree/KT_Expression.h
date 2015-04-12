/**
 * Project Untitled
 */


#ifndef _KT_EXPRESSION_H
#define _KT_EXPRESSION_H

#include "KT_IDExpression.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_Expression: public KT_IDExpression {
public: 
	KT_Expression() ;
    
    /**
     * @param ExprVisitor
     */
    void accept( ExprVisitor);
    
    string * calculReturnType();
};

#endif //_KT_EXPRESSION_H