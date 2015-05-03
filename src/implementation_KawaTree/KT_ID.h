/**
 * Project kawa
 */


#ifndef _KT_ID_H
#define _KT_ID_H


#include "KT_MethodOrVarCall.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

#include "llvm/IR/Module.h"
class IRCompiler;


class KT_ID: public KT_MethodOrVarCall {
public: 
    KT_ID ();
    ~KT_ID ();
    vector<string*> getValue();
	 void setValue(vector<string*> var);

	/**
     * @param string*
     */
    void setNameAddStringAtFirstPosition(string* var);   

    llvm::Value* acceptIRCompiler(IRCompiler *compiler);
    
private: 
    vector<string*> value;
};

#endif //_KT_ID_H