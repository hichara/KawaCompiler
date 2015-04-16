/**
 * Project Untitled
 */


#include "KT_UnaryExpression.h"

/**
 * KT_UnaryExpression implementation
 */

KT_UnaryExpression::KT_UnaryExpression(){}

/**
 * @return KT_Expression *
 */
KT_Expression* KT_UnaryExpression::getExpression() {
    return expression;
}

/**
 * @param KT_Expression *
 */
void KT_UnaryExpression::setExpression(KT_Expression* var) {
	expression=var;
}