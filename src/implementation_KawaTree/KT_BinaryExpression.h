/**
 * Project Untitled
 */


class BinaryExpression;

#ifndef _KT_BINARYEXPRESSION_H
#define _KT_BINARYEXPRESSION_H

#include "KT_Expression.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_BinaryExpression: public KT_Expression {
public: 
    KT_BinaryExpression();
	~KT_BinaryExpression();
    
    KT_Expression* getLExpression();
    
    KT_Expression* getRExpression();
    
    /**
     * @param KT_Expression *
     */
    void setLExpression(KT_Expression* var);
    
    /**
     * @param KT_Expression *
     */
    void setRExpression(KT_Expression* var);
private: 
    KT_Expression* lExpression;
    KT_Expression* rExpression;
};

#endif //_KT_BINARYEXPRESSION_H