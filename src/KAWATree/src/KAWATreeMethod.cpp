/*
 * Methode.cpp
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#include "KAWATreeMethod.h"
#include <iostream>

using namespace std;

KAWATreeMethod::KAWATreeMethod(std::string n){
	name = n;
}

std::string KAWATreeMethod::getName(){
	return name;
}

void KAWATreeMethod::setName(std::string newName){
	name = newName;
}

KAWATreeBodyMethod* KAWATreeMethod::getBody(){
	return body;
}

void KAWATreeMethod::setBody(KAWATreeBodyMethod* newBody){
	body = newBody;
}
