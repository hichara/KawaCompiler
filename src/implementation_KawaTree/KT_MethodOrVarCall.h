/**
 * Project Untitled
 */


#ifndef _KT_METHODORVARCALL_H
#define _KT_METHODORVARCALL_H
#include "KT_FactFinal.h"
#include <stdio.h>
#include <string>
#include <vector>
#include "SemanticVisitor.h"
using namespace std;

class KT_MethodOrVarCall : public KT_FactFinal{
public:
	KT_MethodOrVarCall();
	void accept(SemanticVisitor* visitor);
};

#endif //_KT_METHODORVARCALL_H