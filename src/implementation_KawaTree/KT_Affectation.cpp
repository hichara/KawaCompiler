/**
 * Project kawa
 */


#include "KT_Affectation.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/**
 * KT_Affectation implementation
 */


 KT_Affectation::KT_Affectation() {}

/**
 * @return KT_Expression *
 */
KT_Expression* KT_Affectation::getLExpression() {
    return this->lExpression;
}

/**
 * @return KT_VarOrAttr *
 */
KT_VarOrAttr* KT_Affectation::getReference() {
    return reference;
}

/**
 * @return KT_Expression *
 */
KT_Expression* KT_Affectation::getrExpression() {
    return this->rExpression;
}

/**
 * @return KT_IndexedArray*
 */
KT_IndexedArray* KT_Affectation::getIndexedArray() {
    return indexedArray;
}

/**
 * @param KT_Expression *
 */
void KT_Affectation::setLExpression(KT_Expression* var) {
	this->lExpression=var;
}

/**
 * @param KT_Expression *
 */
void KT_Affectation::setRExpression(KT_Expression* var) {
	this->rExpression=var;
}

/**
 * @param KT_VarOrAttr*
 */
void KT_Affectation::setReference(KT_VarOrAttr* var) {
	reference=var;
}

/**
 * @param KT_IndexedArray*
 */
void KT_Affectation::setIndexedArray(KT_IndexedArray* var){
	indexedArray=var;
}

void KT_Affectation::accept(SemanticVisitor* visitor){
	visitor->visitAffectation(this);
}

void KT_Affectation::toString(){
	cout << "\taffectation" << endl;
}
