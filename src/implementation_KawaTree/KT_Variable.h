/**
 * Project Untitled
 */

#ifndef _KT_VARIABLE_H
#define _KT_VARIABLE_H

#include "../BackEnd/IRCompiler/IRCompiler.h"

#include "KT_VarOrAttr.h"
#include "KT_Type.h"
#include "KT_Expression.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_Variable: public KT_VarOrAttr, public KT_Statement {
public: 
    
    KT_Variable();
    ~KT_Variable();
    
    vector<string> getName();
    
    bool isFinal();
    
    KT_Type* getType();

    KT_Expression* getValue();
    
    /**
     * @param string *
     */
    void setName(vector<string> var);
    
    /**
     * @param bool
     */
    void setFinal(bool var);
    
    /**
     * @param KT_Type *
     */
    void setType(KT_Type* var);

    /**
     * @param KT_Expression*
     */
    void setValue(KT_Expression* var);

    Value* acceptIRCompiler(IRCompiler *compiler); 
private: 
    vector<string> name;
    bool Final;
    KT_Type* type;
    KT_Expression* value; 
};

#endif //_KT_VARIABLE_H