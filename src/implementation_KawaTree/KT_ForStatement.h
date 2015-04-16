/**
 * Project Untitled
 */


#ifndef _KT_FORSTATEMENT_H
#define _KT_FORSTATEMENT_H

#include "KT_BlockStatement.h"
#include "KT_Variable.h"
#include "KT_IDExpression.h"
#include "KT_Expression.h"
#include "PARSER_ForControl.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_ForStatement: public KT_BlockStatement {
public: 
    KT_ForStatement();
	
    KT_BlockStatement* getBlockStatement();
    
    vector<KT_Variable*> getInitFor();
    
    vector<KT_IDExpression*> getUpdate();
    
    KT_Expression* getCondition();
    
    PARSER_ForControl* getForControl();
    
    /**
     * @param KT_Expression *
     */
    void setCondition( KT_Expression* var );
    
    /**
     * @param KT_BlockStatement *
     */
    void setBlockStatement(KT_BlockStatement* var);
    
    /**
     * @param PARSER_ForControl *
     */
    void setForControl(PARSER_ForControl* var);

    /**
     * @param vector<KT_Variable*>
     */
    void setInitFor(vector<KT_Variable*>& var);

    /**
     * @param vector<KT_IDExpression*>
     */
    void setUpdate(vector<KT_IDExpression*>& var);

private: 
    KT_BlockStatement* blockStatement;
    vector<KT_Variable*> initFor;
    vector<KT_IDExpression*> update;
    KT_Expression* condition;
    PARSER_ForControl* forControl;
};

#endif //_KT_FORSTATEMENT_H