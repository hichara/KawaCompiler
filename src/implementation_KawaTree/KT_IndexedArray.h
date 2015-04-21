/**
 * Project KAWA
 */


#ifndef _KT_INDEXEDARRAY_H
#define _KT_INDEXEDARRAY_H
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_IndexedArray {
public: 
    
    KT_IndexedArray();
    ~KT_IndexedArray();

    int getDimension();
    
    vector<int> getIndex();
    
    /**
     * @param int
     */
    void setDimension(int var);

    /**
     * @param vector<int>
     */
    void setIndex(vector<int>& var);

    /**
     * @param int
     */
    void setIndexAddIntAtFirstPosition(int var);

private: 
    int dimension;
    vector<int> index;
};

#endif //_KT_INDEXEDARRAY_H