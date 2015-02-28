/*
 * KAWATreeParam.cpp
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#include "KAWATreeParam.h"
#include "KAWATreeType.h"

KAWATreeType KAWATreeParam::getType(){
	return type;
}

void* KAWATreeParam::getValue(){
	return value;
}

