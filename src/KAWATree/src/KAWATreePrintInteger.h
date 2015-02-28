/*
 * KAWATreePrintInteger.h
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#ifndef KAWATREEPRINTINTEGER_H_
#define KAWATREEPRINTINTEGER_H_

#include "KAWATreePrint.h"
#include "KAWATreeParam.h"

class KAWATreePrintInteger : public KAWATreePrint{
public:
	KAWATreePrintInteger();
	virtual ~KAWATreePrintInteger();
	void setParam(KAWATreeParam p);
};

#endif /* KAWATREEPRINTINTEGER_H_ */
