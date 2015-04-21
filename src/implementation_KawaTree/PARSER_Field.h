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
    ~PARSER_Field();

    vector<KT_Variable*> getVariables();
    
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

    /**
     * @param KT_Variable*
     */
    void AddVariableAtFirstPosition(KT_Variable* var);    

    /**
     * @param PARSER_Field*
     */
    void addVectorVariable(PARSER_Field* var);

    /**
     * @param vector<KT_Variable*>
     */
    void addVectorVariable(vector<KT_Variable*>& var);

    /**
     * @param bool
     */
    void setFinal(bool var);   
    
private: 
    vector<KT_Variable*> variables;
};

#endif //_PARSER_FIELD_H