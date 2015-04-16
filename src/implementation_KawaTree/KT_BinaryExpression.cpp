/**
 * Project Untitled
 */


#include "KT_BinaryExpression.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/**
 * KT_BinaryExpression implementation
 */

KT_BinaryExpression::KT_BinaryExpression() {}
/**
 * @return KT_Expression *
 */
KT_Expression* KT_BinaryExpression::getLExpression() {
    return this-> lExpression;
}

/**
 * @return KT_Expression *
 */
KT_Expression* KT_BinaryExpression::getRExpression() {
    return this-> rExpression;
}

/**
 * @param KT_Expression *
 */
void KT_BinaryExpression::setLExpression(KT_Expression* var) {
	this-> lExpression=var;
}

/**
 * @param KT_Expression *
 */
void KT_BinaryExpression::setRExpression(KT_Expression* var) {
	this-> rExpression=var;
}