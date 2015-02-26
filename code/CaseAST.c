#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

#include "BlockInstructionAST.c";
std::vector<BlockInstructionAST> v;

class CaseAST : public instructionAST
{
 
  public://constructeur
  		CaseAST():instructionAST(){}

//methode tryblock
  	 BlockInstructionAST getInstruction()
  		{
  			return v;
  		}

      void main()
      {
          return 0;
      }
};