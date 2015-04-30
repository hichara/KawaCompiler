/**
 * Project Untitled
 */


#include "KT_ForStatement.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/**
 * KT_ForStatement implementation
 */

KT_ForStatement::KT_ForStatement() {}
 
 
/**
 * @return KT_BlockStatement *
 */
KT_BlockStatement* KT_ForStatement::getBlockStatement() {
    return this-> blockStatement;
}

/**
 * @return vector<KT_Variable *>
 */
vector<KT_Variable*> KT_ForStatement::getInitFor() {
    return this-> initFor;
}

/**
 * @return vector<KT_IDExpression *>
 */
vector<KT_IDExpression*> KT_ForStatement::getUpdate() {
    return this-> update;
}

/**
 * @return KT_Expression *
 */
KT_Expression* KT_ForStatement::getCondition() {
    return this-> condition;
}

/**
 * @return PARSER_ForControl *
 */
PARSER_ForControl* KT_ForStatement::getForControl() {
    return this-> forControl;
}

/**
 * @param KT_Expression *
 */
void KT_ForStatement::setCondition( KT_Expression* var) {
	this-> condition=var;
}

/**
 * @param KT_BlockStatement *
 */
void KT_ForStatement::setBlockStatement( KT_BlockStatement* var) {
	this-> blockStatement= var;
}

/**
 * @param PARSER_ForControl *
 */
void KT_ForStatement::setForControl(PARSER_ForControl* var ) {
	this->forControl=var;
	setCondition(var->getCondition());

	vector<KT_IDExpression*> updates = var->getUpDate();
	for (vector<KT_IDExpression*>::iterator it = updates.begin(); it != updates.end(); ++it){
		update.push_back(*it);
	}
	setUpdate(updates);

	vector<KT_Variable*> initF = var->getInitFor()->getVariables();

	for (vector<KT_Variable*>::iterator it = initF.begin(); it != initF.end(); ++it){
		initFor.push_back(*it);
	}
}

/**
 * @param vector<KT_Variable*>
 */
void KT_ForStatement::setInitFor(vector<KT_Variable*> var){
	initFor = var;
}

/**
 * @param vector<KT_IDExpression*>
 */
void KT_ForStatement::setUpdate(vector<KT_IDExpression*> var){
	update = var;
}