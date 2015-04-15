/**
 * Project Untitled
 */


#ifndef _PARSER_FIELD_H
#define _PARSER_FIELD_H

#include "PARSER_MemberDec.h"
#include "KT_Variable.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class PARSER_Field: public PARSER_MemberDec {
public: 
    
    PARSER_Field();

    /**
     * @param KT_Variable *
     */
    void addVariable(KT_Variable* var);
    
    /**
     * @param KT_Type *
     */
    void upDateType(KT_Type* var);

    /**
     * @param vector<KT_Variable*>
     */
    void setVariables(vector<KT_Variable*>& var);
    
    vector<KT_Variable*> getVariables();
private: 
    vector<KT_Variable*> variables;
};

#endif //_PARSER_FIELD_H