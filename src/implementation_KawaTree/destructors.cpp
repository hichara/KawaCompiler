#include "headers.h"
#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;


KT_Super::~KT_Super(){
    for (vector<KT_ParamsMethodCall*>::size_type i = 0; i < params.size(); ++i)
      {
        delete params[i];
      }
}

KT_String::~KT_String(){
    delete value;
}

KT_SimpleMethod::~KT_SimpleMethod(){
    delete name;
    delete block;
    delete modifier;
    delete type;

    for (vector<KT_Param*>::size_type i = 0; i < params.size(); ++i)
    {
        delete params[i];
    }
}
KT_ReturnStatement::~KT_ReturnStatement(){
    delete returnExppression;
}

KT_Prototype::~KT_Prototype(){
    delete name;
    delete returnType;
    delete modifier;

    for (vector<KT_Param*>::size_type i = 0; i < params.size(); ++i)
    {
        delete params[i];
    }
}

KT_Program::~KT_Program(){
    for (vector<KT_Package*>::size_type i = 0; i < packages.size(); ++i)
    {
        delete packages[i];
    }
}

KT_Print::~KT_Print(){
    for (vector<KT_FactFinal*>::size_type i = 0; i < args.size(); ++i)
    {
        delete args[i];
    }
}

KT_ParamsMethodCall::~KT_ParamsMethodCall(){
    delete indexedArray;
    delete expression;
}

KT_Package::~KT_Package(){
    for (vector<KT_Class*>::size_type i = 0; i < classes.size(); ++i)
    {
        delete classes[i];
    }

    for (vector<KT_Interface*>::size_type i = 0; i < interfaces.size(); ++i)
    {
        delete interfaces[i];
    }
}

KT_Param::~KT_Param(){
    delete name;
    delete paramModifier;
    delete paramType;
}

KT_MethodCall::~KT_MethodCall(){
    delete methodCall;
    delete caller;
    for (vector<KT_ParamsMethodCall*>::size_type i = 0; i < params.size(); ++i)
    {
        delete params[i];
    }

    for (vector<string*>::size_type i = 0; i < name.size(); ++i)
    {
        delete name[i];
    }
}

KT_LinkedMethodOrVarCall::~KT_LinkedMethodOrVarCall(){
    for (vector<KT_MethodOrVarCall*>::size_type i = 0; i < mixteCall.size(); ++i)
    {
        delete mixteCall[i];
    }
}

KT_Interface::~KT_Interface(){
    delete name;
    delete modifier;
    delete FQN;
    fullSignatures.clear();
    for (vector<string*>::size_type i = 0; i < InterfacesParent.size(); ++i)
    {
        delete InterfacesParent[i];
    }

    for (vector<KT_Prototype*>::size_type i = 0; i < prototypes.size(); ++i)
    {
        delete prototypes[i];
    }

    for (vector<KT_Interface*>::size_type i = 0; i < parentsInterfacesSemantique.size(); ++i)
    {
        delete parentsInterfacesSemantique[i];
    }

    for (vector<vector<string*> >::size_type i = 0; i < imports.size(); ++i)
    {

        for (vector<string*>::size_type j = 0; j < imports[i].size(); ++j)
        {

            delete imports[i][j];
        }
    }

}

KT_IndexedArray::~KT_IndexedArray(){
    index.clear();
}

KT_IfStatement::~KT_IfStatement(){
    delete condition;
    delete bStatement;
}

KT_ifElseStatement::~KT_ifElseStatement(){
    delete condition;
    delete ifBStatement;
    delete elseBStatement;
}

KT_FactFinal::~KT_FactFinal(){}

KT_ID::~KT_ID (){
    for (vector<string*>::size_type i = 0; i < value.size(); ++i)
    {
        delete value[i];
    }
}

KT_ForStatement::~KT_ForStatement(){
    delete blockStatement;
    delete condition;
    delete forControl;
    for (vector<KT_Variable*>::size_type i = 0; i < initFor.size(); ++i)
    {
        delete initFor[i];
    }


    for (vector<KT_IDExpression*>::size_type i = 0; i < update.size(); ++i)
    {
        delete update[i];
    }

}

KT_Expression::~KT_Expression(){
    delete returnType;
}

KT_ContinueStatement::~KT_ContinueStatement(){
    delete id;
}

KT_ConstructorCall::~KT_ConstructorCall(){
    for (vector<string*>::size_type i = 0; i < name.size(); ++i)
    {
        delete name[i];
    }

    for (vector<KT_ParamsMethodCall*>::size_type i = 0; i < params.size(); ++i)
    {
        delete params[i];
    }
}

KT_Constructor::~KT_Constructor(){
    delete name;
    delete modifier;
    delete block;
    for (vector<KT_Param*>::size_type i = 0; i < params.size(); ++i)
    {
        delete params[i];
    }
}

KT_Class::~KT_Class(){
    delete name;
    delete ParentClass;
    delete modifiers;
    delete parentClasseSemantique;
    delete FQN;
    fullSignatures.clear();

    for (vector<string*>::size_type i = 0; i < ParentInterfaces.size(); ++i)
    {
        delete ParentInterfaces[i];
    }

    for (vector<KT_Interface*>::size_type i = 0; i < parentsInterfacesSemantique.size(); ++i)
    {
        delete parentsInterfacesSemantique[i];
    }

    for (vector<KT_Attribute*>::size_type i = 0; i < attributes.size(); ++i)
    {
        delete attributes[i];
    }

    for (vector<KT_SimpleMethod*>::size_type i = 0; i < SimpleMethods.size(); ++i)
    {
        delete SimpleMethods[i];
    }

    for (vector<KT_Constructor*>::size_type i = 0; i < constructors.size(); ++i)
    {
        delete constructors[i];
    }

    for (vector<PARSER_MemberDec*>::size_type i = 0; i < memberDecs.size(); ++i)
    {
        delete memberDecs[i];
    }

    for (vector<KT_Prototype*>::size_type i = 0; i < AllPrototypes.size(); ++i)
    {
        delete AllPrototypes[i];
    }

    for (vector<vector<string*> >::size_type i = 0; i < imports.size(); ++i)
    {
        for (vector<string*>::size_type j = 0; j < imports[i].size(); ++j)
        {
            delete imports[i][j];
        }
    }

}

KT_Bool::~KT_Bool(){}
KT_Entier::~KT_Entier(){}
KT_Reel::~KT_Reel(){}

KT_Statement::~KT_Statement(){}

KT_BreakStatement::~KT_BreakStatement(){
    delete id;
}

KT_Block::~KT_Block(){
    for (vector<KT_Statement*>::size_type i = 0; i < statements.size(); ++i)
    {
        delete statements[i];
    }
}

KT_BinaryExpression::~KT_BinaryExpression(){
    delete lExpression;
    delete rExpression;
}

KT_Attribute::~KT_Attribute(){
    delete name;
    delete modifier;
    delete type;
    delete value;
}

KT_ArrayInitilizer::~KT_ArrayInitilizer(){
    delete indexedArray;
    delete type;
}

KT_Affectation::~KT_Affectation(){
    delete reference;
    delete lExpression;
    delete rExpression;
    delete indexedArray;
}

PARSER_ForControl::~PARSER_ForControl(){
    delete condition;
    delete initFor;
    for (vector<KT_IDExpression*>::size_type i = 0; i < upDate.size(); ++i)
    {
        delete upDate[i];
    }

}

PARSER_Field::~PARSER_Field(){
    for(vector<KT_Variable*>::size_type i = 0; i < variables.size(); ++i)
    {
        delete variables[i];
    }
}

KT_WhileStatement::~KT_WhileStatement(){
    delete condition;
    delete wBStatement;
}

KT_VarOrAttr::~KT_VarOrAttr(){}

KT_Variable::~KT_Variable(){
    delete type;
    delete value;
    for (vector<KT_Variable*>::size_type i = 0; i < name.size(); ++i)
    {
        delete name[i];
    }
}

KT_UnaryExpression::~KT_UnaryExpression(){
    delete expression;
}

KT_Type::~KT_Type(){
    delete Array;
    for (vector<string*>::size_type i = 0; i < typeName.size(); ++i)
    {
        delete typeName[i];
    }

}

KT_SwitchStatement::~KT_SwitchStatement(){
    delete condition;
    for (vector<KT_SwitchBlockStatement*>::size_type i = 0; i < switchBStatements.size(); ++i)
    {
        delete switchBStatements[i];
    }
}

KT_SwitchBlockStatement::~KT_SwitchBlockStatement(){
    delete block;
    delete expression;
}
