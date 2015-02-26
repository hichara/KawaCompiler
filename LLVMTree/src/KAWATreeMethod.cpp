/*
 * Methode.cpp
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#include "KAWATreeMethod.h"

class KAWATreeMethod : public KAWATreeCompilerNode{

	std::string name;
	KAWATreeBodyMethod body;

public:
	std::string getName(){
		return name;
	}

	void setName(std::string newName){
		name = newName;
	}

	KAWATreeBodyMethod getBody(){
			return body;
	}

	void setBody(KAWATreeBodyMethod newBody){
		body = newBody;
	}


};
