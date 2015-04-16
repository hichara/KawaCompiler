/**
 * Project kawa
 */


#ifndef _KT_ARRAYINITILIZER_H
#define _KT_ARRAYINITILIZER_H

#include "KT_FactFinal.h"
#include "KT_IndexedArray.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_ArrayInitilizer: public KT_FactFinal {
public: 
    KT_ArrayInitilizer();
	
    KT_IndexedArray* getIndexedArray();
    
    /**
     * @param KT_IndexedArray *
     */
    void setIndexedArray( KT_IndexedArray* var);
private: 
    KT_IndexedArray* indexedArray;
};

#endif //_KT_ARRAYINITILIZER_H