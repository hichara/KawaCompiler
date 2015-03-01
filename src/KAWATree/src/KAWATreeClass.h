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
	virtual ~KAWATreeClass(){};
	void addMain(KAWATreeMethod m);
	std::string getName();
	void debug(){
		cout << "\t[Class: " << name << " ]" <<endl;
		std::list<KAWATreeMethod>::iterator it;
		for (it = listMethodes.begin(); it != listMethodes.end(); it++){
			it->debug();
		}
	};

};

#endif /* CLASSE_H_ */
