/**
 * Project Untitled
 */


#include "KT_Block.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/**
 * KT_Block implementation
 */

 KT_Block::KT_Block() {}

/**
 * @return vector<KT_Statement *>
 */
vector<KT_Statement*> KT_Block::getStatements() {
    return this-> statements;
}

void KT_Block::setStatements(vector<KT_Statement*> &var) {
	this-> statements =var;
}