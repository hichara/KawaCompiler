/*
 * Classe.cpp
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#include "KAWATreeClass.h"
#include "KAWATreeCompilerNode.h"
#include <list>

void KAWATreeClass::addMethod(KAWATreeMethod m){
	listMethodes.push_back(m);
}
