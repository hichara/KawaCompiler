/*
 * Classe.h
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#ifndef KAWATreeCLASS_H_
#define KAWATreeCLASS_H_

#include "KAWATreeCompilerNode.h"
#include "KAWATreeMethod.h"
#include <iostream>
#include <list>

using namespace std;

class KAWATreeClass: public KAWATreeCompilerNode{
private:
	std::string name;
	list<KAWATreeMethod> listMethodes;
public:
	
	KAWATreeClass(std::string n);
	~KAWATreeClass(){};
	void addMain(KAWATreeMethod m);

};

#endif /* CLASSE_H_ */
