/**
 * Project kawa
 */


#ifndef _KT_CLASS_H
#define _KT_CLASS_H

#include <iostream>
#include "KT_Attribute.h"
#include "KT_SimpleMethod.h"
#include "KT_Constructor.h"
#include "PARSER_MemberDec.h"
#include "KT_Interface.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;


class KT_Class{
public: 
	KT_Class();
    
    vector<KT_SimpleMethod*> getSimpleMethods();
    
    vector<KT_Attribute*> getAttributes();
    
    /**
     * @param KT_Attribute *  attr
     */
    void addAttribut( KT_Attribute*  attr);
    
    /**
     * @param KT_SimpleMethod *  meth
     */
    void addMethod(KT_SimpleMethod*  meth);
    
    vector<KT_Constructor*> getConstructors();
    
    /**
     * @param KT_Constructor *  constr
     */
    void addConstructor(KT_Constructor*  constr);
    
    string* getParentClass();
    
    vector<string*> getParentInterfaces();
    
    string* getName();
    
    vector<PARSER_MemberDec*> getMemberDecs();

	KT_Modifier* getModifier();

    vector<vector<string*>> getImports();
    
    /**
     * @param string *
     */
    void setName(string* var);
    
    /**
     * @param string *
     */
    void setParentClass(string* var);
    
    /**
     * @param PARSER_MemberDec *
     */
    void setMemberDec(vector<PARSER_MemberDec*>& var);
	
	/**
	* @param PARSER_MemberDec *
	*/
	void setParentInterfaces(vector<string*>& var);

	/**
	* @param KT_Modifier *
	*/
	void setModifier(KT_Modifier* var);
	
	/**
	* @param string
	*/
	
	void addSignature(string var);
	
	/**
	* @param vector<string>
	*/
	void setFullSignatures(vector<string> var);
	
	vector<string> getFullSignatures();
	
	string* getFQN();
	
	/**
	* @param string*
	*/
	void setFQN(string* var);
	
	/**
	* @param KT_Class*
	*/
	void setParentClasseSemantique(KT_Class* var);
	
	KT_Class* getParentClasseSemantique();
	
	
	/**
	* @param vector<KT_Interface*>
	*/
	void setParentsInterfacesSemantique(vector<KT_Interface*> &var);
	
	vector<KT_Interface*> getParentsInterfacesSemantique();
	

    /**
    * @param vector<vector<string*>>
    */
    void setImports(vector<vector<string*>>& var);

	void toString();
private: 
    string* name;
    string* ParentClass;
    vector<string*> ParentInterfaces;
    vector<KT_Attribute*> attributes;
    vector<KT_SimpleMethod*> SimpleMethods;
    vector<KT_Constructor*> constructors;
    vector<PARSER_MemberDec*> memberDecs;
	KT_Modifier* modifiers;
    vector<vector<string*>> imports;
	vector<string> fullSignatures;
	KT_Class* parentClasseSemantique;
	vector<KT_Interface*> parentsInterfacesSemantique;
	string* FQN;

};

#endif //_KT_CLASS_H