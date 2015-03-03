/*
 * AttributAST.h
 *
 *  Created on: 3 mars 2015
 *      Author: idriss
 */

#ifndef ATTRIBUTAST_H_
#define ATTRIBUTAST_H_
#include <iostream>
#include<string>
using namespace std;
#include "AST.h"

class AttributAST : public AST
{
private:
		int visibility;
public:
	AttributAST(int typeast, int visi);
	 bool isFinal()const;
	 bool isStatic()const;
	 int getVisi()const;
	 void setVisi(int visibi);
	virtual ~AttributAST();//destructeur
};

#endif /* ATTRIBUTAST_H_ */
