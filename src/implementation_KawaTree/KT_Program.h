/**
 * Project Untitled
 */


#ifndef _KT_PROGRAM_H
#define _KT_PROGRAM_H

#include <iostream>
#include "KT_Package.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

class KT_Program {
public: 
    
    KT_Program();
    ~KT_Program();
    
    vector<KT_Package*> getPackages();
	string getName();

	/**
	* @param vector<KT_Package*>
	*/
	void setPackages(vector<KT_Package*> var);
	
	/**
	* @param string
	*/
	void setName(string var);

	/**
	* @param KT_Package*, KT_Class*
	*/
	void addPackageWithClass(KT_Package* var, KT_Class* classe);

	/**
	* @param KT_Package*, KT_Interface*
	*/
	void addPackageWithInterface(KT_Package* var, KT_Interface* interfac);

	/**
	* @param KT_Package*
	*/
	KT_Package* getPackage(KT_Package* var);

	void toString();
private: 
    vector<KT_Package*> packages;
	string name;
};

#endif //_KT_PROGRAM_H