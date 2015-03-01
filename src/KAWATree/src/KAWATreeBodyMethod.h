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

class KAWATreeBodyMethod: public KAWATreeCompilerNode {

private:
	std::list<KAWATreeInstruction> listInstructions;

public:
	KAWATreeBodyMethod(){};
	~KAWATreeBodyMethod(){};
	void addInstruction(KAWATreeInstruction i);
};

#endif /* KAWATREEBODYMETHODE_H_ */
