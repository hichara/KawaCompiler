/**
 * Classe de test illustrant un simple hello world représentée à l'aide
 * de son arbre sémantique.
 */
#include <iostream>
#include "KAWATree.hpp"

using namespace std;

class HelloWorldProgram{
	private:
		KAWATreeProgram program;
	public:
		HelloWorldProgram();
		~HelloWorldProgram(){};
		void run();
};

HelloWorldProgram(){
	// création d'un programme vide
	program = new KAWATreeProgram();

		// création d'une classe principale
		KAWATreeClass mainClass = new KAWATreeClass("MainClass");

			// création de la méthode main de la classe
			KAWATreeMethod mainMethod = new KAWATreeMethod("main");

				// écriture du corps de la méthode
				KAWATreeBodyMethod bodyMain = new KAWATreeBodyMethod();

					// définition de l'instruction printString("Hello World !")
					KAWATreeInstruction printString = new KAWATreePrintString(params);
					
						KAWATreeType typeString = new Type("string");
						void* valueStr = *((void) "Hello World !");
						KAWATreeParam paramStr = new KAWATreeParam(typeInteger, valueStr);

						printString.addParam(paramStr);
					
					bodyMain.addInstruction(printString);
					// fin de définition


					// définition de l'instruction printInteger(42)
					KAWATreeInstruction printInteger = new KAWATreePrintInteger(params);

						KAWATreeType typeInteger = new Type("int");
						void* valueInt = *((void) 42);
						KAWATreeParam paramInteger = new KAWATreeParam(typeInteger, valueInt);
						
						printInteger.addParam(paramInteger);

					bodyMain.addInstruction(printInteger);
					// fin de définition

					// définition de l'instruction printFloat(13.37)
					KAWATreeInstruction printFloat = new KAWATreePrintFloat(params);
						KAWATreeType typeFloat = new Type("float");
						void* valueInt = *((void) 13.37);
						KAWATreeParam paramFloat = new KAWATreeParam(typeFloat, valueInt);		

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
	HelloWorldProgram program = new HelloWorldProgram();
	program.run();
	return 0;
}
