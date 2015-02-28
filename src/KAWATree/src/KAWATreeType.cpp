/*
 * KAWATreeType.cpp
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#include <iostream>
#include "KAWATreeType.h"

KAWATreeType::KAWATreeType(std::string n){
	name = n;
}

std::string KAWATreeType::getName(){
	return name;
}

void KAWATreeType::setName(std::string newName){
	name=newName;
}


