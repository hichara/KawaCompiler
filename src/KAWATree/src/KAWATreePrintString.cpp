/*
 * KAWATreePrintString.cpp
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#include "KAWATreePrintString.h"

class KAWATreePrintString : public KAWATreePrint{

	KAWATreePrintString::KAWATreePrintString() {

	}

	KAWATreePrintString::KAWATreePrintString(std::list<KAWATreeParam> list) {
		listParams = list;

	}
};
