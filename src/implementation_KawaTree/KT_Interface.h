/**
 * Project Untitled
 */


class KT_Interface;

#ifndef _KT_INTERFACE_H
#define _KT_INTERFACE_H

#include "KT_Modifier.h"
#include "KT_Prototype.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_Interface{
public: 
    
    KT_Interface(); 
    ~KT_Interface(); 

    string* getName();
    
    vector<string*> getInterfacesparent();
    
	vector<KT_Prototype*> getPrototypes();
    
    KT_Modifier* getModifier();

    vector<vector<string*> > getImports();
    
    
    /**
     * @param string *
     */
    void setName(string* var);
    
    /**
     * @param vector<string*>
     */
    void setInterfacesparent(vector<string*>& var);

    /**
     * @param KT_Modifier *
     */
    void setModifier(KT_Modifier* var);

    /**
     * @param vector<KT_Prototype*>
     */
    void setPrototypes(vector<KT_Prototype*>& var);
	
	/**
	* @param string
	*/
	
	void addSignature(string var);
	
	/**
	* @param vector<string>
	*/
	void setFullSignatures(vector<string> var);
	
	vector<string> getFullSignatures();
	
	/**
	* @param vector<KT_Interface*>
	*/
	void setParentsInterfacesSemantique(vector<KT_Interface*> &var);
	
	vector<KT_Interface*> getParentsInterfacesSemantique();
	
	string* getFQN();
	
	/**
	* @param string*
	*/
	void setFQN(string* var);

	/**
    * @param vector<vector<string*>>
    */
    void setImports(vector<vector<string*> >& var);
	
private: 
    string* name;
    vector<string*> InterfacesParent;
    KT_Modifier* modifier;
	vector<KT_Prototype*> prototypes;
	vector<string> fullSignatures;
	vector<KT_Interface*> parentsInterfacesSemantique;	
	string* FQN;
	vector<vector<string*> > imports;
};

#endif //_KT_INTERFACE_H