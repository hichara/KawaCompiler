/**
 * Project Untitled
 */


#ifndef _KT_PRINT_H
#define _KT_PRINT_H

#include "KT_Statement.h"
#include "KT_FactFinal.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

#include "llvm/IR/Module.h"
class IRCompiler;


class KT_Print: public KT_Statement {
public: 
    
    KT_Print();
    ~KT_Print();
    
    vector<KT_FactFinal*> getArgs();

	/**
	* @param vector<KT_FactFinal*>
	*/
	void setArgs(vector<KT_FactFinal*> var);

	/*virtual void toString() ;*/

    /**
    * Methode accept pour le IRCompiler
    */
    virtual llvm::Value* acceptIRCompiler(IRCompiler *compiler);

private: 
    vector<KT_FactFinal*> args;
};

#endif //_KT_PRINT_H