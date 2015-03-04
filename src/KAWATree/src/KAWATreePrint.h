/*
 * KAWATreePrint.h
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#ifndef KAWATREEPRINT_H_
#define KAWATREEPRINT_H_

#include <list>
#include "KAWATreeInstruction.h"

class KAWATreePrint: public KAWATreeInstruction{
protected:
	void setParam(KAWATreeParam* param);
public:
	KAWATreePrint(){};
	virtual ~KAWATreePrint(){};
	KAWATreeParam* getParam() {
		std::list<KAWATreeParam*>::iterator param = listParams.begin();
		return *param;
	}
};

#endif /* KAWATREEPRINT_H_ */
