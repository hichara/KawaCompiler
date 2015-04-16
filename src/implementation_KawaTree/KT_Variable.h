/**
 * Project Untitled
 */


#ifndef _KT_VARIABLE_H
#define _KT_VARIABLE_H

#include "KT_VarOrAttr.h"
#include "KT_Type.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_Variable: public KT_VarOrAttr {
public: 
    
    KT_Variable();
    
    vector<string*> getName();
    
    bool isFinal();
    
    KT_Type* getType();
    
    /**
     * @param string *
     */
    void setName(vector<string*> var);
    
    /**
     * @param bool
     */
    void setFinal(bool var);
    
    /**
     * @param KT_Type *
     */
    void setType(KT_Type* var);
private: 
    vector<string*> name;
    bool Final;
    KT_Type* type;
};

#endif //_KT_VARIABLE_H