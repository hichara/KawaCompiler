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
	};
	~KAWATreePrintInteger(){};
	virtual void debug(){
		std::list<KAWATreeParam*>::iterator param = listParams.begin();
		void* value =  (*param)->getValue();
		int dInteger = *((int*) value);
		cout << "\t\t\t\t[PrintInteger]" << endl
			 << "\t\t\t\t > output: " << dInteger << endl;
	}
	
	void compile(KAWATreeCompiler* compiler){
		compiler->compile(this);
	}
};

#endif /* KAWATREEPRINTINTEGER_H_ */
