/**
 * Project Untitled
 */


#ifndef _KT_LINKEDMETHODORVARCALL_H
#define _KT_LINKEDMETHODORVARCALL_H


#include "KT_FactFinal.h"
#include "KT_MethodOrVarCall.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

#include "llvm/IR/Module.h"
class IRCompiler;


class KT_LinkedMethodOrVarCall: public KT_FactFinal {
public: 
    
	KT_LinkedMethodOrVarCall();
	~KT_LinkedMethodOrVarCall();
    vector<KT_MethodOrVarCall*> getMixedCall();

    /**
     * @param vector<KT_MethodOrVarCall*>
     */
    void setMixedCall(vector<KT_MethodOrVarCall*>& var);

    llvm::Value* acceptIRCompiler(IRCompiler *compiler);
private:
    vector<KT_MethodOrVarCall*> mixteCall;
};

#endif //_KT_LINKEDMETHODORVARCALL_H