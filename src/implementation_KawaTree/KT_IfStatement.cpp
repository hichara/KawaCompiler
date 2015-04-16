/**
 * Project kawa
 */


#include "KT_IfStatement.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/**
 * KT_IfStatement implementation
 */

 
 KT_IfStatement::KT_IfStatement () {}

/**
 * @return KT_Expression *
 */
KT_Expression* KT_IfStatement::getCondition() {
    return this-> condition;
}

/**
 * @return KT_BlockStatement *
 */
KT_BlockStatement* KT_IfStatement::getBStatement() {
    return this-> bStatement;
}

/**
 * @param KT_Expression *
 */
void KT_IfStatement::setCondition(KT_Expression* var) {
	this-> condition= var;
}

/**
 * @param KT_BlockStatement *
 */
void KT_IfStatement::setBStatelent(KT_BlockStatement* var) {
	this-> bStatement= var;
}