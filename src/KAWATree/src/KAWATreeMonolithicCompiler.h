/**
 * Classe KAWATreeMonolithicCompiler
 * Author: Pierre-Luc BLOT
 */

#ifndef KAWATREEMONOLITHICCOMPILER_H_
#define KAWATREEMONOLITHICCOMPILER_H_

#include <iostream>
#include "KAWATreeCompiler.h"
#include "KAWATreeClass.h"

#include "./IRGen/IRGen.h"
#include "./IRGen/FunctionGenerator.h"
#include "./IRGen/PrimitiveCreator.h"
 
using namespace std;

class KAWATreeMonolithicCompiler: public KAWATreeCompiler {

private:

    llvm::LLVMContext &Context = llvm::getGlobalContext();
    llvm::Module *module;
public:
    KAWATreeMonolithicCompiler() {}

 	virtual ~KAWATreeMonolithicCompiler(){};

    virtual llvm::Module* getModule();
 	
	void compile(KAWATreeProgram* p){
        module = new  llvm::Module("Hello world Module", Context);
//		cout << "> Compile Program block" << endl;
	}

    virtual void compile(KAWATreeClass* c){

//    	cout << "> Compile Class " << c->getName() << " block" << endl;
    }

    virtual void compile(KAWATreeMethod* m){
        if(m->getName() == "main") {
            // C'est un sigleton.Si la fonction n'existe pas encore,
            // Elle est cree et ne contient rien
            FunctionGenerator::createMainFunction(module);
        } else {
            cout << "> Compile Method block :"  << m->getName() << endl;
        }

    }

    virtual void compile(KAWATreeBodyMethod* b){
//    	cout << "> Compile BodyMethod block" << endl;
        llvm::Function *f = FunctionGenerator::getMainFunction(module);
        f->deleteBody();
        llvm::BasicBlock::Create(module->getContext(), "", f);
    }

    virtual void compile(KAWATreePrintInteger* pi) {
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