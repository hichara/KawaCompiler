/**
 * Project Untitled
 */


#ifndef _KT_SWITCHBLOCKSTATEMENT_H
#define _KT_SWITCHBLOCKSTATEMENT_H
#include "KT_Block.h"
#include "KT_Expression.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_SwitchBlockStatement {
public: 
    
    KT_SwitchBlockStatement();
    ~KT_SwitchBlockStatement();
    
    bool isCaseExist();
    
    KT_Block* getBlock();
    
    KT_Expression* getExpression();
    
    /**
     * @param bool
     */
    void setCaseExist(bool var);
    
    /**
     * @param KT_Block *
     */
    void setBlock(KT_Block* var);
    
    /**
     * @param KT_Expression *
     */
    void setExpression(KT_Expression* var);
private: 
    bool caseExist;
    KT_Block* block;
    KT_Expression* expression;
};

#endif //_KT_SWITCHBLOCKSTATEMENT_H