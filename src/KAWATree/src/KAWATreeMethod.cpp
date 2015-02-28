/*
 * Methode.cpp
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#include "KAWATreeMethod.h"
//#include "KAWATreeNodyMethod.h"
#include <iostream>

using namespace std;

std::string KAWATreeMethod::getName(){
	return name;
}

void KAWATreeMethod::setName(std::string newName){
	name = newName;
}

KAWATreeBodyMethod KAWATreeMethod::getBody(){
	return body;
}

void KAWATreeMethod::setBody(KAWATreeBodyMethod newBody){
	body = newBody;
}
