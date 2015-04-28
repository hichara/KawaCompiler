/**
 * Project Untitled
 */


class KT_Constructor;

#ifndef _KT_CONSTRUCTOR_H
#define _KT_CONSTRUCTOR_H

#include "PARSER_MemberDec.h"
#include <iostream>
#include "KT_Param.h"
#include "KT_Modifier.h"
#include "KT_Block.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_Constructor: public PARSER_MemberDec{
public: 
    
    KT_Constructor();
	~KT_Constructor();
	
    string* getName();
    
    KT_Modifier* getModifier();
    
    vector<KT_Param*> getParams();

    KT_Block* getBlock();
	
	string getFullSignature();
	
	/**
	* @param string
	*/
	void setFullSignature(string var);
    
    /**
     * @param string *
     */
    void setName(string var);
    
    /**
     * @param KT_Modifier *
     */
    void setModifier(KT_Modifier* var);
	
	/**
     * @param Vector<KT_Param *>
     */
    void setParams(vector<KT_Param*> var);

    /**
     * @param KT_Block
     */
    void setBlock(KT_Block* var);

	void toString();
private: 
    string name;
    vector<KT_Param*> params;
    KT_Modifier* modifier;
    KT_Block* block;
	string FullSignature;
};

#endif //_KT_CONSTRUCTOR_H