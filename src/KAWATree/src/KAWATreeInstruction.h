/*
 * KAWATreeInstruction.h
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#ifndef KAWATREEINSTRUCTION_H_
#define KAWATREEINSTRUCTION_H_

#include "KAWATreeCompilerNode.h"
#include "KAWATreeParam.h"
#include <iostream>
#include <list>
 
using namespace std;
class KAWATreeInstruction: public KAWATreeCompilerNode {
protected:
	std::list<KAWATreeParam*> listParams;
	std::string name;
public:
	KAWATreeInstruction(){};
	~KAWATreeInstruction(){};
	std::string getName();
	
	std::list<KAWATreeParam*> getParams();
	void setParams(	std::list<KAWATreeParam*> newParams);
	void addParam(KAWATreeParam* p);
};

#endif /* KAWATREEINSTRUCTION_H_ */
