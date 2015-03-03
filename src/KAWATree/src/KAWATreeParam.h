/*
 * KAWATreeParam.h
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#ifndef KAWATREEPARAM_H_
#define KAWATREEPARAM_H_

#include "KAWATreeCompilerNode.h"
#include "KAWATreeType.h"

class KAWATreeParam : public KAWATreeCompilerNode{

private:
	KAWATreeType* type;
	void* value;
public:
	KAWATreeParam(KAWATreeType* t, void* v);
	~KAWATreeParam(){};

	KAWATreeType* getType();
	void* getValue();

};

#endif /* KAWATREEPARAM_H_ */
