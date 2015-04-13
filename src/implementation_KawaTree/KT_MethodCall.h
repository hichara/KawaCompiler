/**
 * Project Untitled
 */


#ifndef _KT_METHODCALL_H
#define _KT_METHODCALL_H

#include "KT_MethodOrVarCall.h"
#include "KT_ParamsMethodCall.h"
#include "KT_SimpleMethod.h"
#include "KT_VarOrAttr.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_MethodCall: public KT_MethodOrVarCall {
public: 
    
    KT_MethodCall();
    
    vector<string *> getName();
    
    KT_SimpleMethod * getMethod();
    
    KT_VarOrAttr * getCaller();
    
    vector<KT_ParamsMethodCall *> getParams();
    
    /**
     * @param string *
     */
    void setName(string * var);
private: 
    vector<string *> name;
    vector<KT_ParamsMethodCall*> params;
    KT_SimpleMethod* methodCall;
    KT_VarOrAttr* caller;
};

#endif //_KT_METHODCALL_H