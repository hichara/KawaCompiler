#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;


class instructionAST: public AST
{

  public://constructeur
  		instructionAST(): AST(){}

//methode getblockparent

  		getblockparent()
  		{
  			return BlockParent;
  		}

      void main()
      {
          return 0;
      }
};