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
#include "KAWATreeCompilerNode.h"
#include "KAWATreeClass.h"

class KAWATreeProgram : public KAWATreeCompilerNode{
private:
	std::list<KAWATreeClass> listClasses;
public:
	KAWATreeProgram(){};
	virtual ~KAWATreeProgram();
	void addClass(KAWATreeClass c );

	/*
	 * Je n'arrive pas à mettre cette méthode dans le .cpp
	 * Il s'agit d'une redéfinition de la méthode virtuelle
	 * de la classe mère.
	 */
	void debug(){
		cout << "[Progam Node]\n" << endl;
	}
};

#endif /* PROGRAM_H_ */
