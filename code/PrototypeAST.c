#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

#include "VariableAST.c";
vector<VariableAST> V_variable;

class PrototypeAST : public AST
{
  private:
  		int type;//(pour connaitre le type du prototype)
  		String porte;//(c'est pour la visibilite du prototype)

  public://constructeur
  		PrototypeAST(int Type, String Porte,int type): AST(int type)
  		{
  			this->type = Type;
  			this->porte = Porte;
  		}

    //methode getReturneType

      String getReturneType()
      {
        return this->type;
      }

      String getPorte()
      {
        return this->porte;
      }

      //setteur

    void settype(int Type)
    {
        this->type = Type;
    }

     void setporte(String Porte)
    {
        this->porte = Porte;
    }
//methode getparametre
  		VariableAST getParametres()
  		{
  			return V_variable;
  		}

      void main()
      {
          return 0;
      }
};