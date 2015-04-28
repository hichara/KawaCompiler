/**
 * Project Untitled
 */


#include "PARSER_ForControl.h"

/**
 * PARSER_ForControl implementation
 */

PARSER_ForControl::PARSER_ForControl(){}

/**
 * @return KT_Expression *
 */
KT_Expression* PARSER_ForControl::getCondition() {
    return condition;
}

/**
 * @return vector<KT_IDExpression *>
 */
vector<KT_IDExpression*> PARSER_ForControl::getUpDate() {
    return upDate;
}

/**
 * @return vector<KT_Variable *>
 */
PARSER_Field* PARSER_ForControl::getInitFor() {
    return initFor;
}

/**
 * @param KT_Expression *
 */
void PARSER_ForControl::setCondition(KT_Expression* var) {
	condition=var;
}

/**
 * @param vector<KT_IDExpression*>
 */
void PARSER_ForControl::setUpDate(vector<KT_IDExpression*> var) {
	upDate=var;
}

/**
 * @param vector<KT_Variable*>
 */
void PARSER_ForControl::setInitFor(PARSER_Field* var) {
	initFor=var;
}