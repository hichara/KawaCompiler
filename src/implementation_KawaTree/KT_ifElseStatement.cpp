/**
 * Project kawa
 */


#include "KT_ifElseStatement.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/**
 * KT_ifElseStatement implementation
 */

 
 KT_ifElseStatement::KT_ifElseStatement() {}

/**
 * @return KT_Expression *
 */
KT_Expression * KT_ifElseStatement::getCondition() {
    return this-> condition;
}

/**
 * @return KT_BlockStatement *
 */
KT_BlockStatement * KT_ifElseStatement::getIfBStatement() {
    return this-> ifBStatement;
}

/**
 * @return KT_BlockStatement *
 */
KT_BlockStatement * KT_ifElseStatement::getElseBStatement() {
    return this-> elseBStatement;
}

/**
 * @param KT_Expression *
 */
void KT_ifElseStatement::setCondition(KT_Expression * var ) {
	this-> condition=var;
}

/**
 * @param KT_BlockStatement *
 */
void KT_ifElseStatement::setIfBStatement(KT_BlockStatement * var) {
	this-> ifBStatement=var;
}

/**
 * @param KT_BlockStatement *
 */
void KT_ifElseStatement::setElseBStatement(KT_BlockStatement * var) {
	this-> elseBStatement=var;
}