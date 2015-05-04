/**
 * Project Untitled
 */


#ifndef _KT_STRING_H
#define _KT_STRING_H

#include "KT_FactFinal.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

#include "llvm/IR/Module.h"
class IRCompiler;

class KT_String: public KT_FactFinal {
public: 
    
    KT_String();
    ~KT_String();
    
    string* getValue();
    
    /**
     * @param string *
     */
    void setValue(string* var);
	/*virtual void toString() ;*/	

    /**
    * Methode accept pour le IRCompiler
    */
    virtual llvm::Value* acceptIRCompiler(IRCompiler *compiler);

private: 
    string* value;
};

#endif //_KT_STRING_H