/**
 * Project kawa
 */


#include "KT_ContinueStatement.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/**
 * KT_ContinueStatement implementation
 */

 KT_ContinueStatement::KT_ContinueStatement() {}

/**
 * @return bool
 */
bool KT_ContinueStatement::isIdExist() {
    return idExist;
}

/**
 * @return string
 */
string KT_ContinueStatement::getId() {
    return this->id;
}

/**
 * @param bool
 */
void KT_ContinueStatement::setIdExist(bool var) {
	this->idExist =var;

}

/**
 * @param string
 */
void KT_ContinueStatement::setId(string var) {
	this-> id = var;
}