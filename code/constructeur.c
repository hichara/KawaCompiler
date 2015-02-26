#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

#include "VariableAST.c";
#include "BlockInstructionAST.c";

vector<VariableAST> V_variable;

class constructeurAST : public AST
{

  public://constructeur
  		constructeurAST(): AST(int type){}
//methode getparametre
  		VariableAST getParametres()
  		{
  			return V_variable;
  		}
//methode getBlockInstructionAST

  		BlockInstructionAST getBlockInstructionAST()
  		{
  			return BlockInstructionAST;
  		}

      void main()
      {
          return 0;
      }
};