#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

#include "AST.c";
#include "instructionAST.c";
std::vector<instructionAST> v;

class BlockInstructionAST : public instructionAST
{
 
  public://constructeur
  		BlockInstructionAST():instructionAST(){}

//methode caller
  	AST  getcaller()
  		{
  			return caller;
  		}

//methode getinstruction

  	instructionAST getinstruction()
  		{
  			return v;
  		}

      void main()
      {
          return 0;
      }
};