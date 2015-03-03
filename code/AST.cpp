/*
 * AST.cpp
 *
 *  Created on: 3 mars 2015
 *      Author: idriss
 */

#include "AST.h"
#include<iostream>
#include<string>
using namespace std;

AST::AST(int typeast) : TypeAST(typeast){}//constructeur

void AST::setTypeAST(int type)
{
	this->TypeAST = type;
}
int AST::getTypeAST()const
{
	return this->TypeAST;
}
AST::~AST() {}

