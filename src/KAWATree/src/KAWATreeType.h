/*
 * KAWATreeType.h
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#ifndef KAWATREETYPE_H_
#define KAWATREETYPE_H_

#include <iostream>
#include "KAWATreeCompilerNode.h"
 
class KAWATreeType: public KAWATreeCompilerNode{
private:
	std::string name;
public:
	KAWATreeType();
	virtual ~KAWATreeType();
	std::string getName();
	void setName(std::string newName);
};

#endif /* KAWATREETYPE_H_ */
