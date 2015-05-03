/**
 * Project kawa
 */


#include "KT_Entier.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


#include "../BackEnd/IRCompiler/IRCompiler.h"

/**
 * KT_Entier implementation
 */

 KT_Entier::KT_Entier() {}

/**
 * @return int
 */
int KT_Entier::getValue() {
    return this-> value;
}

/**
 * @param int
 */
void KT_Entier::setValue( int var) {
	this-> value=var;
}

/*
void KT_Entier::toString() {
	cout << " Entier de valeur : " << value << endl;

}
*/

llvm::Value* KT_Entier::acceptIRCompiler(IRCompiler *compiler) {
  return compiler->compileEntier(this);	
}

