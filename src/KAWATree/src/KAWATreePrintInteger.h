/*
 * KAWATreePrintInteger.h
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#ifndef KAWATREEPRINTINTEGER_H_
#define KAWATREEPRINTINTEGER_H_

#include "KAWATreePrint.h"

class KAWATreePrintInteger : public KAWATreePrint{
public:
	KAWATreePrintInteger(){
		name = "PrintInteger";
	}
	virtual ~KAWATreePrintInteger();
	void debug(){
		cout << "\t\t\t\t[Instruction: " << name << "]" << endl;
	}
};

#endif /* KAWATREEPRINTINTEGER_H_ */
