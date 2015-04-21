/**
 * Project Untitled
 */


#ifndef _PARSER_ARRAY_H
#define _PARSER_ARRAY_H
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class PARSER_Array {
public: 
    
    PARSER_Array();
    ~PARSER_Array();

    bool isArray();
    
    int getArrayDim();
    
    /**
     * @param int
     */
    void setArrayDim( int var);

    /**
     * @param bool
     */
    void setArray(bool var);
private: 
    bool Array;
    int arrayDim;
};

#endif //_PARSER_ARRAY_H