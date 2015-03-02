/*
 * KAWATreeBodyMethode.cpp
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#include "KAWATreeBodyMethod.h"
#include "KAWATreeInstruction.h"

void KAWATreeBodyMethod::addInstruction(KAWATreeInstruction* i){
	listInstructions.push_back(i);
}
