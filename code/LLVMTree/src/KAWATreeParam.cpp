/*
 * KAWATreeParam.cpp
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#include "KAWATreeParam.h"

class KAWATreeParam : public KAWATreeCompilerNode{

	KAWATreeType type;
	void * value;

public:
	KAWATreeType getType(){
		return type;
	}

	void * getValue(){
		return value;
	}
};

