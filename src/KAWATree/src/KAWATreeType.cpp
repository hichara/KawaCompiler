/*
 * KAWATreeType.cpp
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#include "KAWATreeType.h"

class KAWATreeType: public KAWATreeCompilerNode{

	std::string name;

public:
	std::string getName(){
		return name;
	}

	void setName(std::string newName){
		name=newName;
	}
};

