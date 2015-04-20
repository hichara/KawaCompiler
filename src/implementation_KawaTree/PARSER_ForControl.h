/**
 * Project Untitled
 */


#ifndef _PARSER_FORCONTROL_H
#define _PARSER_FORCONTROL_H

#include "KT_Variable.h"
#include "KT_Expression.h"
#include "KT_IDExpression.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class PARSER_ForControl {
public: 
    
    PARSER_ForControl();

    KT_Expression* getCondition();
    
    vector<KT_IDExpression*> getUpDate();
    
    PARSER_Field* getInitFor();
    
    /**
     * @param KT_Expression *
     */
    void setCondition(KT_Expression* var);

    /**
     * @param vector<KT_IDExpression*>
     */
    void setUpDate(vector<KT_IDExpression*>& var);

    /**
     * @param PARSER_Field*
     */
    void setInitFor(PARSER_Field* var);
private: 
    KT_Expression* condition;
    vector<KT_IDExpression*> upDate;
    PARSER_Field* initFor;
};

#endif //_PARSER_FORCONTROL_H