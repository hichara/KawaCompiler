/**
 * Project Untitled
 */


#include "KT_IndexedArray.h"

/**
 * KT_IndexedArray implementation
 */

KT_IndexedArray::KT_IndexedArray(){}

/**
 * @return int
 */
int KT_IndexedArray::getDimension() {
    return dimension;
}

/**
 * @return vector<int>
 */
vector<int> KT_IndexedArray::getIndex() {
    return index;
}

/**
 * @param int
 */
void KT_IndexedArray::setDimension( int var) {
	dimension=var;
}

/**
 * @param vector<int>
 */
void KT_IndexedArray::setIndex(vector<int>& var){
	index=var;
}