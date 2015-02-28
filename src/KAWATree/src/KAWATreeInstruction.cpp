/*
 * KAWATreeInstruction.cpp
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#include "KAWATreeInstruction.h"
#include "KAWATreeParam.h"
#include <iostream>

std::string KAWATreeInstruction::getName(){
	return name;
}

std::list<KAWATreeParam> KAWATreeInstruction::getParams(){
	return listParams;
}

void KAWATreeInstruction::setParams(std::list<KAWATreeParam> newParams){
	listParams = newParams;
}

void KAWATreeInstruction::addParam(KAWATreeParam p){
	listParams.push_back(p);
}
