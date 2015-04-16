/**
 * Project Untitled
 */


#include "KT_SwitchBlockStatement.h"

/**
 * KT_SwitchBlockStatement implementation
 */

KT_SwitchBlockStatement::KT_SwitchBlockStatement(){}

/**
 * @return bool
 */
bool KT_SwitchBlockStatement::isCaseExist() {
    return caseExist;
}

/**
 * @return KT_Block *
 */
KT_Block* KT_SwitchBlockStatement::getBlock() {
    return block;
}

/**
 * @return KT_Expression *
 */
KT_Expression* KT_SwitchBlockStatement::getExpression() {
    return expression;
}

/**
 * @param bool
 */
void KT_SwitchBlockStatement::setCaseExist( bool var) {
	caseExist=var;
}

/**
 * @param KT_Block *
 */
void KT_SwitchBlockStatement::setBlick(KT_Block* var) {
	block = var;
}

/**
 * @param KT_Expression *
 */
void KT_SwitchBlockStatement::setExpression(KT_Expression* var) {
	expression=var;
}