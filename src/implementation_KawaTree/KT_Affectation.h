/**
 * Project Untitled
 */


#ifndef _KT_AFFECTATION_H
#define _KT_AFFECTATION_H

#include "KT_IDExpression.h"
#include "KT_VarOrAttr.h"
#include "KT_Expression.h"
#include "KT_Expression.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_Affectation: public KT_IDExpression {
public: 
	KT_Affectation();
    
    KT_Expression * getLExpression();
    
    KT_VarOrAttr * getVarOrAttr();
    
    KT_Expression * getrExpression();
    
    /**
     * @param KT_Expression *
     */
    void setLExpression(KT_Expression * var);
    
    /**
     * @param KT_Expression *
     */
    void setRExpression(KT_Expression * var);
	
private: 
    KT_VarOrAttr reference;
    KT_Expression lExpression;
    KT_Expression rExpression;
};

#endif //_KT_AFFECTATION_H