/**
 * Project Untitled
 */


#include "KT_String.h"

#include "../BackEnd/IRCompiler/IRCompiler.h"


/**
 * KT_String implementation
 */

KT_String::KT_String(){}

/**
 * @return string *
 */
string* KT_String::getValue() {
    return value;
}

/**
 * @param string *
 */
void KT_String::setValue(string* var) {
	value=var;
}

Value* KT_String::acceptIRCompiler(IRCompiler *compiler){
	return compiler->compileString(this);
}



/*
void KT_String::toString() {
	cout << " String de valeur : " << *value << endl;
}
*/