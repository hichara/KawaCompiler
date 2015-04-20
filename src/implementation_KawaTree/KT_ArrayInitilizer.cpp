/**
 * Project Untitled
 */


#include "KT_ArrayInitilizer.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/**
 * KT_ArrayInitilizer implementation
 */

KT_ArrayInitilizer::KT_ArrayInitilizer(){}

/**
 * @return KT_IndexedArray *
 */
KT_IndexedArray* KT_ArrayInitilizer::getIndexedArray() {
    return this->indexedArray;
}

/**
 * @return KT_IndexedArray *
 */
KT_Type* KT_ArrayInitilizer::getType() {
    return this->type;
}

/**
 * @param KT_IndexedArray *
 */
void KT_ArrayInitilizer::setIndexedArray(KT_IndexedArray* var) {
	this-> indexedArray= var;
}

/**
 * @param KT_Type*
 */
void KT_ArrayInitilizer::setType( KT_Type* var){
	this->type= var;
}