/**
 * Project Untitled
 */


#ifndef _KT_ENTIER_H
#define _KT_ENTIER_H

#include "KT_FactFinal.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

#include "llvm/IR/Module.h"
class IRCompiler;

class KT_Entier: public KT_FactFinal {
public: 
    
	KT_Entier();
	~KT_Entier();
    int getValue();
    
    /**
     * @param int
     */
    void setValue( int var);
	/*virtual void toString();*/

    /**
    * Methode accept pour le IRCompiler
    */
    virtual llvm::Value* acceptIRCompiler(IRCompiler *compiler);

private: 
    int value;
};

#endif //_KT_ENTIER_H