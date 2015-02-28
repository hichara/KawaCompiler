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

class KAWATreeMethod {
private:
	std::string name;
	KAWATreeBodyMethod body;
public:
	KAWATreeMethod();
	virtual ~KAWATreeMethod();

	std::string getName();
	void setName(std::string newName);
	KAWATreeBodyMethod getBody();
	void setBody(KAWATreeBodyMethod newBody);

};

#endif /* METHODE_H_ */
