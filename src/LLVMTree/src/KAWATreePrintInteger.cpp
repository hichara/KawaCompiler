/*
 * KAWATreePrintInteger.cpp
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#include "KAWATreePrintInteger.h"

class KAWATreePrintInteger : public KAWATreePrint{

	KAWATreePrintInteger::KAWATreePrintInteger() {

	}

	KAWATreePrintInteger::KAWATreePrintInteger(std::list<KAWATreeParam> list) {
		listParams = list;

	}
};



