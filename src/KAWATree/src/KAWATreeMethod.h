/*
 * Methode.h
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#ifndef KAWATreeMETHOD_H_
#define KAWATreeMETHOD_H_

#include <iostream>
#include "KAWATreeBodyMethod.h" 

using namespace std;

class KAWATreeMethod {
private:
	std::string name;
	KAWATreeBodyMethod body;
public:
	KAWATreeMethod(std::string n);
	~KAWATreeMethod(){};

	std::string getName();
	void setName(std::string newName);
	KAWATreeBodyMethod getBody();
	void setBody(KAWATreeBodyMethod newBody);
	void debug(){
		cout << "\t\t[ Method: " << name << " ]" << endl;
		body.debug();
	}
};

#endif /* METHODE_H_ */
