/*
 * KAWATreeParam.cpp
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#include "KAWATreeType.h"
#include "KAWATreeParam.h"

KAWATreeParam::KAWATreeParam(KAWATreeType t, void* v){
	type = t;
	value = v;
}

KAWATreeType KAWATreeParam::getType(){
	return type;
}

void* KAWATreeParam::getValue(){
	return value;
}

