/**
 * Project Kawa
 */


#include "KT_IndexedArray.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/**
 * KT_IndexedArray implementation
 */

 KT_IndexedArray::KT_IndexedArray() {}

/**
 * @return int
 */
int KT_IndexedArray::getDimension() {
    return this->dimension;
}

/**
 * @return vector<int>
 */
vector<int> KT_IndexedArray::getIndex() {
    return this-> index;
}

/**
 * @param int
 */
void KT_IndexedArray::setDimension( int var ) {
	this->dimension= var;
}