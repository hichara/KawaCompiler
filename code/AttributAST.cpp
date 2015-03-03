/*
 * AttributAST.cpp
 *
 *  Created on: 3 mars 2015
 *      Author: idriss
 */
#include <iostream>
#include<string>
using namespace std;
#include "AttributAST.h"

AttributAST::AttributAST(int typeast,int visi):AST(typeast),visibility(visi)
{}//contructeur

int AttributAST::getVisi()const
{
	return visibility;
}

void AttributAST::setVisi(int visibi)
{
	this->visibility = visibi;
}
bool AttributAST::isFinal()const {return this->getVisi()== Final;}
bool AttributAST::isStatic() const {return this->getVisi() == Static;}
 AttributAST::~AttributAST() {}//destructeur

