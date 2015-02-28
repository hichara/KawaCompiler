/*
 * Classe.cpp
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#include "KAWATreeClass.h"
#include "KAWATreeCompilerNode.h"
#include <iostream>
#include <list>

KAWATreeClass::KAWATreeClass(std::string n){
	name = n;
}

void KAWATreeClass::addMain(KAWATreeMethod m){
	listMethodes.push_back(m);
}
