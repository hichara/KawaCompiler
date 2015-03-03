/*
 * Program.h
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#ifndef KAWATreePROGRAM_H_
#define KAWATreePROGRAM_H_

#include <list>
#include <iostream>
#include "KAWATreeCompiler.h"
#include "KAWATreeCompilerNode.h"
#include "KAWATreeClass.h"

class KAWATreeProgram : public KAWATreeCompilerNode{
private:
	std::list<KAWATreeClass*> listClasses;

public:
	KAWATreeProgram(){};
	virtual ~KAWATreeProgram(){};
	void addClass(KAWATreeClass* c );

	/*
	 * Je n'arrive pas à mettre cette méthode dans le .cpp
	 * Il s'agit d'une redéfinition de la méthode virtuelle
	 * de la classe mère.
	 */
	void debug(){
		cout << "[Progam]" << endl;
		std::list<KAWATreeClass*>::iterator it;
		for (it = listClasses.begin(); it != listClasses.end(); it++){
			(*it)->debug();
		}
	}

	void compile(KAWATreeCompiler* compiler){
		compiler->compile(this);
		std::list<KAWATreeClass*>::iterator it;
		for (it = listClasses.begin(); it != listClasses.end(); it++){
			(*it)->compile(compiler);
		}
	}
};

#endif /* PROGRAM_H_ */
