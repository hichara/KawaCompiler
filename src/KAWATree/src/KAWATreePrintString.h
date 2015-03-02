/*
 * KAWATreePrintString.h
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#ifndef KAWATREEPRINTSTRING_H_
#define KAWATREEPRINTSTRING_H_

#include "KAWATreePrint.h"
#include "KAWATreeCompilerNode.h"

class KAWATreePrintString: public KAWATreePrint, public KAWATreeCompilerNode {
public:
	KAWATreePrintString(){
		name = "print_string";
	};
	~KAWATreePrintString(){};
	virtual void debug(){
		cout << "\t\t\t\t[PrintInstruction: " << name << "]" << endl;
	}
};

#endif /* KAWATREEPRINTSTRING_H_ */
