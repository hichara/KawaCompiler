/**
 * Project Untitled
 */


#include "KT_SwitchStatement.h"

/**
 * KT_SwitchStatement implementation
 */

KT_SwitchStatement::KT_SwitchStatement(){}

/**
 * @return KT_Expression *
 */
KT_Expression* KT_SwitchStatement::getCondition() {
    return condition;
}

/**
 * @return vector<KT_SwitchBlockStatement *>
 */
vector<KT_SwitchBlockStatement*> KT_SwitchStatement::getSwitchBStatements() {
	return switchBStatements;
}

/**
 * @param KT_Exptession *
 */
void KT_SwitchStatement::setCondition(KT_Expression* var) {
	condition=var;
}