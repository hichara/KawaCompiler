/**
 * Project Untitled
 */


#ifndef _KT_SWITCHSTATEMENT_H
#define _KT_SWITCHSTATEMENT_H

#include "KT_BlockStatement.h"
#include "KT_SwitchBlockStatement.h"
#include "KT_Expression.h"


class KT_SwitchStatement: public KT_BlockStatement {
public: 
    
    KT_SwitchStatement();
    ~KT_SwitchStatement();

    KT_Expression* getCondition();
    
    vector<KT_SwitchBlockStatement*> getSwitchBStatements();
    
    /**
     * @param KT_Exptession *
     */
    void setCondition(KT_Expression* var);

    /**
     * @param vector<KT_SwitchBlockStatement*>
     */
    void setSwitchBStatements(vector<KT_SwitchBlockStatement*> var);
private: 
    KT_Expression* condition;
    vector<KT_SwitchBlockStatement*> switchBStatements;
};

#endif //_KT_SWITCHSTATEMENT_H