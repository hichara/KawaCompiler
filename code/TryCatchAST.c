#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

#include "VariableAST.c";
#include "BlockInstructionAST.c";

class TryCatchAST : public instructionAST
{
 
  public://constructeur
  		TryCatchAST():instructionAST(){}

//methode tryblock
  	 BlockInstructionAST getTryBlock()
  		{
  			return Tryblock;
  		}

//methode getcatchbloc

  		BlockInstructionAST getcatchbloc()
  		{
  			return CatchBlock;
  		}

 //methode expressionvaraible

  		VariableAST getexceptionVariable()
  		{
  			return exception;
  		}

      void main()
      {
          return 0;
      }
};