/**
 * Project Untitled
 */


#ifndef _KT_SIMPLEMETHOD_H
#define _KT_SIMPLEMETHOD_H

#include "PARSER_MemberDec.h"
#include <iostream>
#include "KT_Param.h"
#include "KT_Block.h"
#include "KT_Prototype.h"

class KT_SimpleMethod: public PARSER_MemberDec{
public: 
    
    KT_SimpleMethod();
    ~KT_SimpleMethod();
    
    string* getName();
    
    int getIndex();
    
    vector<KT_Param*> getParams();
    
    KT_Block* getBlock();

	KT_Modifier* getModifier();

	KT_Type* getType();
	
	string getFullSignature();
	
	
	/**
	* method semantic
	*/
	KT_Prototype* getPrototype();
    
    /**
     * @param string *
     */
    void setName(string* var);
    
    /**
     * @param KT_Block *
     */
    void setBlock(KT_Block* var);

	/**
	* @param KT_Modifier*
	*/
	void setModifier(KT_Modifier* var);

	/**
	* @param KT_Type*
	*/
	void setType(KT_Type* var);

	/**
	* @param vector<KT_Param*>
	*/
	void setParams(vector<KT_Param*>& var);
	
	
	/**
	* @param KT_Prototype*
	*/
	void setPrototype(KT_Prototype* var);
	
	/**
	* @param string
	*/
	void setFullSignature(string var);

	void toString();
private: 
    string* name;
    int index;
    vector<KT_Param*> params;
    KT_Block* block;
	KT_Modifier* modifier;
	KT_Type* type;
	KT_Prototype* prototype;
	string FullSignature;
};

#endif //_KT_SIMPLEMETHOD_H