#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

#include "CaseAST.c";
std::vector<CaseAST> v;

class SwitchAST : public instructionAST
{
 
  public://constructeur
  		SwitchAST():instructionAST(){}

//methode tryblock
  	 CaseAST getcases()
  		{
  			return v;
  		}


      void main()
      {
          return 0;
      }
};