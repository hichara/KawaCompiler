#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

#include "ExprAST.c";
#include "declarationAST.c";
#include "instructionAST.c";
#include "BlockInstructionAST.c";

class boucleforAST : public instructionAST
{
 
  public://constructeur
  		boucleforAST():instructionAST(){}

//methode declaration
  	declarationAST  getDeclaration()
  		{
  			return declaration;
  		}

//methode getcondition

  		ExprAST getcondition()
  		{
  			return condition;
  		}

 //methode intruction

  		instructionAST getinstructon()
  		{
  			return intruction;
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