/**
 * Project Untitled
 */


#ifndef _KT_METHODORVARCALL_H
#define _KT_METHODORVARCALL_H
#include "KT_FactFinal.h"
#include <stdio.h>
#include <string>
#include <vector>
#include "SemanticVisitor.h"
using namespace std;

#include "llvm/IR/Module.h"
class IRCompiler;

class KT_MethodOrVarCall : public KT_FactFinal{
public:
	KT_MethodOrVarCall();
	void accept(SemanticVisitor* visitor);

    /**
    * Methode accept pour le IRCompiler
    */
//    virtual llvm::Value* acceptIRCompiler(IRCompiler *compiler);
};

#endif //_KT_METHODORVARCALL_H