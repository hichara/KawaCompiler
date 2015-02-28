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
#include <list>

using namespace std;

class KAWATreeClass: public KAWATreeCompilerNode{
private:
	list<KAWATreeMethod> listMethodes;
public:
	KAWATreeClass();
	virtual ~KAWATreeClass();
	void addMethod(KAWATreeMethod m);
};

#endif /* CLASSE_H_ */
