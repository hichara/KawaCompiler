/*
 * KAWATreeBodyMethode.cpp
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#include "KAWATreeBodyMethod.h"

class KAWATreeBodyMethod : public KAWATreeCompilerNode{

	std::list<KAWATreeInstruction> listInstructions;

public:
	void addInstruction(KAWATreeInstruction i){
		listInstructions.push_back(i);
	}
};

