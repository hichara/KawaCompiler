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