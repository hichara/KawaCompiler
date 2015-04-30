#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>
#include "../../implementation_KawaTree/KT_Statement.h"
#include "../../implementation_KawaTree/KT_Variable.h"
#include "../../implementation_KawaTree/KT_Affectation.h"
#include "../../Semantique/CheckAffectationStatementType.cpp"
#include "../../Semantique/CheckVariableStatementType.cpp"

using namespace std;

int main(){
  vector<KT_Statement*>* statements = new vector<KT_Statement*>;
  statements->push_back(new KT_Affectation);
  statements->push_back(new KT_Variable);

  SemanticVisitor* affectationVisitor = new CheckAffectationStatementType();
  SemanticVisitor* variableVisitor = new CheckVariableStatementType();
  for(KT_Statement* stmt : *statements){
    stmt->toString();
    stmt->accept(affectationVisitor);
    stmt->accept(variableVisitor);
  }

  return 0;
}
