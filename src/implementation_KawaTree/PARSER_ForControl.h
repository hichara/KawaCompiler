/**
 * Project Untitled
 */


#ifndef _PARSER_FORCONTROL_H
#define _PARSER_FORCONTROL_H

#include "KT_Variable.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class PARSER_ForControl {
public: 
    
    PARSER_ForControl();

    KT_Expression * getCondition();
    
    vector<KT_IDExpression *> getUpDate();
    
    vector<KT_Variable *> getInitFor();
    
    /**
     * @param KT_Expression *
     */
    void setCondition(KT_Expression * var);
private: 
    KT_Expression * condition;
    vector<KT_IDExpression*> upDate;
    vector<KT_Variable *> initFor;
};

#endif //_PARSER_FORCONTROL_H