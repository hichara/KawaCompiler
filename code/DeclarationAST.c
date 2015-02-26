#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

#include "VariableAST.c";

class DeclarationAST : public instructionAST
{
 
  public://constructeur
  		DeclarationAST():instructionAST(){}

//methode typedeclaration
  	 String  getTypeDeclaration()
  		{
  			return typedeclaration;
  		}

//methode getvariable

  		VariableAST getVariable()
  		{
  			return variable;
  		}

      void main()
      {
          return 0;
      }
};