/*
 * KAWATreePrintFloat.h
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#ifndef KAWATREEPRINTFLOAT_H_
#define KAWATREEPRINTFLOAT_H_

#include "KAWATreePrint.h"

class KAWATreePrintFloat: public KAWATreePrint {
public:
	KAWATreePrintFloat(){
		name = "PrintFloat";
	};
	~KAWATreePrintFloat(){};
	virtual void debug(){
		std::list<KAWATreeParam*>::iterator param = listParams.begin();
		void* value =  (*param)->getValue();
		float fFloat = *((float*) value);
		cout << "\t\t\t\t[PrintFloat]" << endl
			 << "\t\t\t\t > output: " << fFloat << endl;
	}
};

#endif /* KAWATREEPRINTFLOAT_H_ */
