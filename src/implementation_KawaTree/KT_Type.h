/**
 * Project Untitled
 */


#ifndef _KT_TYPE_H
#define _KT_TYPE_H

#include "PARSER_Array.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_Type {
public: 
    
    KT_Type();

    bool isBasicType();
    
    vector<string*> getTypeName();
    
    int getArrayDim();
    
    PARSER_Array* getArray();
    
    
    /**
     * @param bool
     */
    void setBasicType(bool var);
    
    /**
     * @param vector<string*>
     */
    void setTypeName(vector<string*>& var);
    
    /**
     * @param int
     */
    void setArrayDim(int var);

    /**
     * @param PARSER_Array*
     */
    void setArray(PARSER_Array* var);

    /**
     * @param string*
     */
    void addString(string* var);

    /**
     * @param vector<string*>
     */
    void addVectorString(vector<string*>& var);

	void toString();
    
private: 
    bool basicType;
    vector<string*> typeName;
    int arrayDim;
    PARSER_Array* Array;
};

#endif //_KT_TYPE_H