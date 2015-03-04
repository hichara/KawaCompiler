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
		KAWATreeParam* param = getParam();
		void* value =  param->getValue();
		std::string sz = *((std::string*) value);
		cout << "\t\t\t\t[PrintString]" << endl
			 << "\t\t\t\t > output: " << sz << endl;

	}
	void compile(KAWATreeCompiler* compiler){
		compiler->compile(this);
	}
};

#endif /* KAWATREEPRINTSTRING_H_ */
