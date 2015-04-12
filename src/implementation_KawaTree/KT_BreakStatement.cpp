/**
 * Project Untitled
 */


#include "KT_BreakStatement.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/**
 * KT_BreakStatement implementation
 */

KT_BreakStatement::KT_BreakStatement() {}

/**
 * @return bool
 */
bool KT_BreakStatement::isIdExist() {
    return idExist;
}

/**
 * @return string *
 */
string * KT_BreakStatement::getId() {
    return this-> id;
}

/**
 * @param bool
 */
void KT_BreakStatement::setIdExist( bool var) {
	this->idExist= var;
}

/**
 * @param string *
 */
void KT_BreakStatement::setId(string * var) {
	this->id=var;
}