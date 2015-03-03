/**
 * Classe KAWATreeMonolithicCompiler
 * Author: Pierre-Luc BLOT
 */

#ifndef KAWATREEMONOLITHICCOMPILER_H_
#define KAWATREEMONOLITHICCOMPILER_H_

#include <iostream>
#include "KAWATreeCompiler.h"
#include "KAWATreeClass.h"
 
using namespace std;

class KAWATreeMonolithicCompiler: public KAWATreeCompiler {
public:
 	KAWATreeMonolithicCompiler(){};
 	virtual ~KAWATreeMonolithicCompiler(){};
 	
	void compile(KAWATreeProgram* p){
		cout << "> Compile Program block" << endl;
	}

    virtual void compile(KAWATreeClass* c){
    	cout << "> Compile Class " << c->getName() << " block" << endl;
    }
    virtual void compile(KAWATreeMethod* m){
    	cout << "> Compile Method block" << endl;
    }
    virtual void compile(KAWATreeBodyMethod* b){
    	cout << "> Compile BodyMethod block" << endl;
    }
    virtual void compile(KAWATreePrintInteger* pi){
    	cout << "> Compile PrintInteger block" << endl;
    }
    virtual void compile(KAWATreePrintFloat* pf){
    	cout << "> Compile PrintFloat block" << endl;
    }
    virtual void compile(KAWATreePrintString* ps){
    	cout << "> Compile PrintString block" << endl;
    }
    virtual void compile(KAWATreeParam* p){
    	cout << "> Compile Param block" << endl;
    }
    virtual void compile(KAWATreeType* t){
    	cout << "> Compile Type block" << endl;
    }
 };

#endif /* KAWATREEMONOLITHICCOMPILER_H_ */