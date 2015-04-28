/**
 * Project Untitled
 */


#ifndef _KT_METHODCALL_H
#define _KT_METHODCALL_H

#include "../BackEnd/IRCompiler/IRCompiler.h"

#include "KT_MethodOrVarCall.h"
#include "KT_ParamsMethodCall.h"
#include "KT_SimpleMethod.h"
#include "KT_VarOrAttr.h"
#include <stdio.h>
#include <string>
#include <vector>

#include "llvm/IR/Module.h"
class IRCompiler;

using namespace std;


class KT_MethodCall: public KT_MethodOrVarCall {
public: 
    
    KT_MethodCall();
    ~KT_MethodCall();
    
    vector<string> getName();
    
    KT_SimpleMethod* getMethod();
    
    KT_VarOrAttr getCaller();
    
    vector<KT_ParamsMethodCall*> getParams();
    
    /**
     * @param string *
     */
    void setName(vector<string> var);

    /**
     * @param vector<KT_ParamsMethodCall*>
     */
    void setParams(vector<KT_ParamsMethodCall*> var);

    /**
     * @param KT_SimpleMethod*
     */
    void setMethodCall(KT_SimpleMethod* var);

    /**
     * @param KT_VarOrAttr*
     */
    void setCaller(KT_VarOrAttr* var);

    /**
     * @param string*
     */
    void setNameAddStringAtFirstPosition(string var);

    llvm::Value* acceptIRCompiler(IRCompiler *compiler);
private: 
    vector<string> name;
    vector<KT_ParamsMethodCall*> params;
    KT_SimpleMethod* methodCall;
    KT_VarOrAttr* caller;
};

#endif //_KT_METHODCALL_H