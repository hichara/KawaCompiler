/**
 * Project kawa
 */


#ifndef _KT_IFELSESTATEMENT_H
#define _KT_IFELSESTATEMENT_H

#include "KT_BlockStatement.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_ifElseStatement: public KT_BlockStatement {
public: 
	KT_ifElseStatement();
    
    KT_Expression * getCondition();
    
    KT_BlockStatement * getIfBStatement();
    
    KT_BlockStatement * getElseBStatement();
    
    /**
     * @param KT_Expression *
     */
    void setCondition(KT_Expression * var);
    
    /**
     * @param KT_BlockStatement *
     */
    void setIfBStatement( KT_BlockStatement * var );
    
    /**
     * @param KT_BlockStatement *
     */
    void setElseBStatement(KT_BlockStatement * var );
private: 
    KT_Expression * condition;
    KT_BlockStatement * ifBStatement;
    KT_BlockStatement * elseBStatement;
};

#endif //_KT_IFELSESTATEMENT_H