/**
 * Project Untitled
 */


#ifndef _KT_RETURNSTATEMENT_H
#define _KT_RETURNSTATEMENT_H

#include "KT_BlockStatement.h"
#include "KT_Expression.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_ReturnStatement: public KT_BlockStatement {
public: 
    
    KT_ReturnStatement();

    bool isVoidReturn();
    
    KT_Expression* getReturnExpression();
    
    /**
     * @param bool
     */
    void setIsVoidReturn( bool var);
    
    /**
     * @param Kt_Expression *
     */
    void setReturnExpression(KT_Expression* var);
private: 
    bool VoidReturn;
    KT_Expression* returnExppression;
};

#endif //_KT_RETURNSTATEMENT_H