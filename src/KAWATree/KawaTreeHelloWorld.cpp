/**
 * Classe de test illustrant un simple hello world représentée à l'aide
 * de son arbre sémantique.
 */
#include <stdio.h>
#include <stdlib.h> 
#include <iostream>
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

using namespace std;

class HelloWorldProgram{
	private:
		KAWATreeProgram program;
	public:
		HelloWorldProgram();
		~HelloWorldProgram(){};
		void run();
};

void Callback(void *data) {
    std::string &s = *(static_cast<std::string*>(data));
    std::cout << s;
}

HelloWorldProgram::HelloWorldProgram(){
	// création d'un programme vide
	KAWATreeProgram program;

		// création d'une classe principale
		KAWATreeClass mainClass("MainClass");

			// création de la méthode main de la classe
			KAWATreeMethod mainMethod("main");

				// écriture du corps de la méthode
				KAWATreeBodyMethod bodyMain;

					// définition de l'instruction printString("Hello World !")
					KAWATreeInstruction printString;
					
						KAWATreeType typeString("string");
						
						char s[] = "Hello world !";
						//Callback( static_cast<void*>(&valueStr) );
						void* valueStr = (void*) s;
						KAWATreeParam paramStr(typeString, valueStr);

						printString.addParam(paramStr);
					
					bodyMain.addInstruction(printString);
					// fin de définition


					// définition de l'instruction printInteger(42)
					KAWATreeInstruction printInteger;

						KAWATreeType typeInteger("int");
						int* integer = (int*) malloc(sizeof(int));
						*integer = 42;

						void* valueInt = (void*) integer;
						KAWATreeParam paramInteger(typeInteger, valueInt);
						
						printInteger.addParam(paramInteger);

					bodyMain.addInstruction(printInteger);
					// fin de définition

					// définition de l'instruction printFloat(13.37)
					KAWATreeInstruction printFloat;
						KAWATreeType typeFloat("float");
						double* doubleVal = (double*) malloc(sizeof(double));
						*doubleVal = 13.37;

						void* valueDouble = (void*) doubleVal;
						KAWATreeParam paramFloat(typeFloat, valueDouble);		

						printFloat.addParam(paramFloat);

					bodyMain.addInstruction(printFloat);
					// fin de définition

			// affectation du corps de la méthode main
			mainMethod.setBody(bodyMain);

		// ajout de la méthode main à la classe
		mainClass.addMain(mainMethod);	

	// ajout de la classe au programme
	program.addClass(mainClass);
}

void HelloWorldProgram::run(){
	//*
	program.debug();
	/*/
	program.compile();
	//*/
}

int main(){
	HelloWorldProgram program;
	program.run();
	return 0;
}
