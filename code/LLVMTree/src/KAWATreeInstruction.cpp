/*
 * KAWATreeInstruction.cpp
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#include "KAWATreeInstruction.h"

#include <list>
#include <string>

#include "KAWATreeCompilerNode.h"

class KAWATreeInstruction : public KAWATreeCompilerNode{

	protected:
	std::list<KAWATreeParam> listParams;
	std::string name;

public:
	std::string getName(){
		return name;
	}

	std::list<KAWATreeParam> getParams(){
		return listParams;
	}

	void setParams(	std::list<KAWATreeParam> newParams){
		listParams = newParams;
	}

	void addParam(KAWATreeParam p){
		listParams.push_back(p);
	}

};
