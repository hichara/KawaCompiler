/**
 * Classe de test illustrant un simple hello world représentée à l'aide
 * de son arbre sémantique.
 */
#include <stdio.h>
#include <stdlib.h> 
#include <iostream>
#include "src/KAWATreeCompiler.h"
#include "src/KAWATreeMonolithicCompiler.h"
#include "src/KAWATreeCompilerNode.h"
#include "src/KAWATreeProgram.h"
#include "src/KAWATreeClass.h"
#include "src/KAWATreeMethod.h"
#include "src/KAWATreeBodyMethod.h"
#include "src/KAWATreeInstruction.h"
#include "src/KAWATreeParam.h"
#include "src/KAWATreeType.h"
#include "src/KAWATreePrintInteger.h"
#include "src/KAWATreePrintFloat.h"
#include "src/KAWATreePrintString.h"

#include "src/IRGen/IRGen.h"

using namespace std;

class HelloWorldProgram{
	private:
		// création d'un programme vide
		KAWATreeProgram* program;
	public:
		HelloWorldProgram();
		~HelloWorldProgram(){};
		void run();
};

HelloWorldProgram::HelloWorldProgram(){
    program = new KAWATreeProgram;
		// création d'une classe principale
		KAWATreeClass* mainClass = new KAWATreeClass("MainClass");

			// création de la méthode main de la classe
			KAWATreeMethod* mainMethod = new KAWATreeMethod("main");

				// écriture du corps de la méthode
				KAWATreeBodyMethod* bodyMain = new KAWATreeBodyMethod;

					// définition de l'instruction printString("Hello World !")
					KAWATreePrintString* printString = new KAWATreePrintString;
					
						KAWATreeType* typeString = new KAWATreeType("string");
						
						
						std::string* valueStr = new std::string("Hello world !");
						KAWATreeParam* paramStr = new KAWATreeParam(typeString, (void*) valueStr);

						printString->addParam(paramStr);
					
					bodyMain->addInstruction(printString);
					// fin de définition


					// définition de l'instruction printInteger(42)
					KAWATreePrintInteger* printInteger = new KAWATreePrintInteger;

						KAWATreeType* typeInteger = new KAWATreeType("int");
						int* integer = (int*) malloc(sizeof(int));
						*integer = 42;

						void* valueInt = (void*) integer;
						KAWATreeParam* paramInteger = new KAWATreeParam(typeInteger, valueInt);
						
						printInteger->addParam(paramInteger);

					bodyMain->addInstruction(printInteger);
					// fin de définition

					// définition de l'instruction printFloat(13.37)
					KAWATreePrintFloat* printFloat = new KAWATreePrintFloat;
						KAWATreeType* typeFloat = new KAWATreeType("float");
						float* doubleVal = (float*) malloc(sizeof(float));
						*doubleVal = 13.37;

						void* valueDouble = (void*) doubleVal;
						KAWATreeParam* paramFloat = new KAWATreeParam(typeFloat, valueDouble);		

						printFloat->addParam(paramFloat);

					bodyMain->addInstruction(printFloat);
					// fin de définition

			// affectation du corps de la méthode main
			mainMethod->setBody(bodyMain);

		// ajout de la méthode main à la classe
		mainClass->addMain(mainMethod);	

	// ajout de la classe au programme
	program->addClass(mainClass);
}

void HelloWorldProgram::run(){
	/*
	program->debug();
	/*/
	KAWATreeMonolithicCompiler *compiler = new KAWATreeMonolithicCompiler();
	program->compile(compiler);
	llvm::Module *module = compiler->getModule();
	llvm::LLVMContext &Context = module->getContext();

	//Complete le return de la fontion Main
	Constant *zero = ConstantInt::get(Type::getInt32Ty(Context), 0);
	llvm::Function *f = FunctionGenerator::getMainFunction(module);
	llvm::BasicBlock &bb = f->getEntryBlock();
	ReturnInst::Create(Context, zero, &bb);
	
	//Affichage du module sur std:cerr :/
	module->dump();
}

int main(){
	HelloWorldProgram program;
	program.run();
	return 0;
}
