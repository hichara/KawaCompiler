/*
 * KAWATreePrintInteger.cpp
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#include <list>
#include "KAWATreePrint.h"
#include "KAWATreeParam.h"

void KAWATreePrint::setParam(KAWATreeParam* param){
	listParams.clear();
	listParams.push_back(param);
}
