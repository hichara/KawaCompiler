/*
 * KAWATreeBodyMethode.h
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#ifndef KAWATREEBODYMETHOD_H_
#define KAWATREEBODYMETHOD_H_

#include "KAWATreeCompilerNode.h"
#include "KAWATreeInstruction.h"
#include <list>

using namespace std;

class KAWATreeBodyMethod: public KAWATreeCompilerNode {

private:
	std::list<KAWATreeInstruction*> listInstructions;

public:
	KAWATreeBodyMethod(){};
	~KAWATreeBodyMethod(){};
	void addInstruction(KAWATreeInstruction* i);

	virtual void debug(){
		cout << "\t\t\t[BodyMethod]" << endl;
		std::list<KAWATreeInstruction*>::iterator it;
		for (it = listInstructions.begin(); it != listInstructions.end(); it++){
			(*it)->debug();
		}
	}
};

#endif /* KAWATREEBODYMETHODE_H_ */
