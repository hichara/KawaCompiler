/**
 * Project Untitled
 */


#ifndef _KT_UNARYEXPRESSION_H
#define _KT_UNARYEXPRESSION_H

#include "KT_Expression.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_UnaryExpression: public KT_Expression {
public: 
    
    KT_UnaryExpression();

    KT_Expression* getExpression();
    
    /**
     * @param KT_Expression *
     */
    void setExpression(KT_Expression* var);
private: 
    KT_Expression* expression;
};

#endif //_KT_UNARYEXPRESSION_H