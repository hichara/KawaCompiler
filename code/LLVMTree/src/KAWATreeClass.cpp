/*
 * Classe.cpp
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#include "KAWATreeClass.h"
#include <list>

class KAWATreeClass: public KAWATreeCompilerNode{

	std::list<KAWATreeMethod> listMethodes;

public:
	void addMethod(KAWATreeMethod m){
		listMethodes.push_back(m);
	}

};
