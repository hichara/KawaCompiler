/**
 * Project Untitled
 */


#ifndef _KT_ENTIER_H
#define _KT_ENTIER_H

#include "../BackEnd/IRCompiler/IRCompiler.h"

#include "KT_FactFinal.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


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

	Value *acceptIRCompiler(IRCompiler *compiler);
private: 
    int value;
};

#endif //_KT_ENTIER_H