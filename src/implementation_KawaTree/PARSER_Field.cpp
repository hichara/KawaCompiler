/**
 * Project Untitled
 */


#include "PARSER_Field.h"

/**
 * PARSER_Field implementation
 */

PARSER_Field::PARSER_Field(){}

/**
 * @param KT_Variable *
 */
void PARSER_Field::addVariable(KT_Variable* var) {
	variables.push_back(var);
}

/**
 * @param KT_Type *
 */
void PARSER_Field::upDateType(KT_Type* var) {
	for(vector<KT_Variable*>::iterator it = variables.begin(); it != variables.end();++it){
		(*it)->setType(var);
	}
}

/**
 * @return vector<KT_Variables *>
 */
vector<KT_Variable*> PARSER_Field::getVariables() {
    return variables;
}

/**
 * @param vector<KT_Variable*>
 */
void PARSER_Field::setVariables(vector<KT_Variable*>& var) {
	variables = var;
}

/**
 * @param KT_Variable*
 */
void PARSER_Field::AddVariableAtFirstPosition(KT_Variable* var) {
	  std::vector<KT_Variable*>::iterator it;
 	  it = variables.begin();
  	  it = variables.insert ( it , var );
}

/**
 * @param vector<KT_Variable*>
 */
void PARSER_Field::addVectorVariable(vector<KT_Variable*>& var){
	for (vector<KT_Variable*>::iterator it = var.begin(); it != var.end(); ++it){
		variables.push_back(*it);
	}
}

/**
 * @param KT_Type *
 */
void PARSER_Field::setFinal(bool var){
	for(vector<KT_Variable*>::iterator it = variables.begin(); it != variables.end();++it){
		(*it)->setFinal(var);
	}
}