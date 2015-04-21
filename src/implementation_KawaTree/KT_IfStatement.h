/**
 * Project kawa
 */


#ifndef _KT_IFSTATEMENT_H
#define _KT_IFSTATEMENT_H

#include "KT_BlockStatement.h"
#include "KT_Expression.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_IfStatement: public KT_BlockStatement {
public: 
    KT_IfStatement();
    ~KT_IfStatement();
	
    KT_Expression* getCondition();
    
    KT_BlockStatement* getBStatement();
    
    /**
     * @param KT_Expression *
     */
    void setCondition(KT_Expression* var);
    
    /**
     * @param KT_BlockStatement *
     */
    void setBStatement( KT_BlockStatement* var);
	
	
private: 
    KT_Expression* condition;
    KT_BlockStatement* bStatement;
};

#endif //_KT_IFSTATEMENT_H