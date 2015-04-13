/**
 * Project Untitled
 */


#include "KT_WhileStatement.h"

/**
 * KT_WhileStatement implementation
 */

KT_WhileStatement::KT_WhileStatement(){}

/**
 * @return KT_Expression *
 */
KT_Expression * KT_WhileStatement::getCondition() {
    return condition;
}

/**
 * @return KT_BlockStatement *
 */
KT_BlockStatement * KT_WhileStatement::getWBStatement() {
    return setWBStatement;
}

/**
 * @param KT_Expression *
 */
void KT_WhileStatement::setCondition(KT_Expression * var) {
	condition=var;
}

/**
 * @param KT_BlockStatement *
 */
void KT_WhileStatement::setWBStatement(KT_BlockStatement * var) {
	setWBStatement = var;
}