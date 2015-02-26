/*
 * KAWATreePrintFloat.cpp
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#include "KAWATreePrintFloat.h"

class KAWATreePrintFloat : public KAWATreePrint{

	KAWATreePrintFloat::KAWATreePrintFloat() {

	}

	KAWATreePrintFloat::KAWATreePrintFloat(std::list<KAWATreeParam> list) {
		listParams = list;

	}
};
