/*
 * Program.cpp
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#include "KAWATreeProgram.h"
#include <list>
#include <iostream>

class KAWATreeProgram : public KAWATreeCompilerNode{

	std::list<KAWATreeClass> listClasses;

public:
	void addClass(KAWATreeClass c ){
		listClasses.push_back(c);
	}



};

