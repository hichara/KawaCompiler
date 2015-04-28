/**
 * Project Untitled
 */


#ifndef _KT_STRING_H
#define _KT_STRING_H


#include "KT_FactFinal.h"
#include <stdio.h>
#include <string>
#include <vector>

#include "llvm/IR/Module.h"
class IRCompiler;

using namespace std;


class KT_String: public KT_FactFinal {
public: 
    
    KT_String();
    ~KT_String();
    
    string getValue();
    
    /**
     * @param string *
     */
    void setValue(string var);
	/*virtual void toString() ;*/	

	llvm::Value *acceptIRCompiler(IRCompiler *compiler);
private: 
    string* value;
};

#endif //_KT_STRING_H