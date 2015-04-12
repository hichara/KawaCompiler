/**
 * Project kawa
 */


#include "KT_Affectation.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/**
 * KT_Affectation implementation
 */

 
 KT_Affectation::KT_Affectation() {}

/**
 * @return KT_Expression *
 */
KT_Expression * KT_Affectation::getLExpression() {
    return this->lExpression;
}

/**
 * @return KT_VarOrAttr *
 */
KT_VarOrAttr * KT_Affectation::getVarOrAttr() {
    return null;
}

/**
 * @return KT_Expression *
 */
KT_Expression * KT_Affectation::getrExpression() {
    return this->rExpression;
}

/**
 * @param KT_Expression *
 */
void KT_Affectation::setLExpression(KT_Expression * var) {
	this->lExpression=var;
}

/**
 * @param KT_Expression *
 */
void KT_Affectation::setRExpression(null KT_Expression * var) {
	this->rExpression=var;
}

