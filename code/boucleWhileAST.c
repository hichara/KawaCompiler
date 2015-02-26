#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

#include "ExprAST.c";
#include "BlockInstructionAST.c";

class boucleWhileAST : public instructionAST
{
 
  public://constructeur
  		boucleWhileAST():instructionAST(){}

//methode getcondition

  		ExprAST getcondition()
  		{
  			return condition;
  		}

  //methode Blockinstruction

      BlockInstructionAST getblock()
      {
        return Blockinstruction;
      }

      void main()
      {
          return 0;
      }
};