/**
 * Project Untitled
 */


#ifndef _KT_WHILESTATEMENT_H
#define _KT_WHILESTATEMENT_H

#include "KT_BlockStatement.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_WhileStatement: public KT_BlockStatement {
public: 
    
    KT_WhileStatement();
    
    KT_Expression * getCondition();
    
    KT_BlockStatement * getWBStatement();
    
    /**
     * @param KT_Expression *
     */
    void setCondition(KT_Expression * var);
    
    /**
     * @param KT_BlockStatement *
     */
    void setWBStatement(KT_BlockStatement * var);
private: 
    KT_Expression * condition;
    KT_BlockStatement* setWBStatement;

};

#endif //_KT_WHILESTATEMENT_H