/**
 * Project Untitled
 */


#ifndef _KT_PARAM_H
#define _KT_PARAM_H

#include "KT_Modifier.h"
#include <iostream>
#include "KT_Type.h"
#include "KT_Variable.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_Param {
public: 
    
    KT_Param();

    string* getName();
    
    KT_Type* getParamType();

    KT_Modifier* getParamModifier();

    KT_Variable* toVariable();
    
    /**
     * @param string *
     */
    void setName(string* var);
    
    /**
     * @param KT_Type *
     */
    void setParamType(KT_Type* var);

    /**
     * @param KT_Modifier*
     */
    void setParamModifier(KT_Modifier* var);

	void toString();

private: 
    string* name;
    KT_Modifier* paramModifier;
    KT_Type* paramType;
};

#endif //_KT_PARAM_H