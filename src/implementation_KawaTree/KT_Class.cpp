/**
 * Project Untitled
 */


#include "KT_Class.h"
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

/**
 * KT_Class implementation
 */
 
KT_Class:: KT_Class() {}


/**
 * @return vector<KT_SimpleMethode *>
 */
vector<KT_SimpleMethode *> KT_Class::getSimpleMethods() {
    return this-> SimpleMethods;
}

/**
 * @return vector<KT_Attribute *>
 */
vector<KT_Attribute *> KT_Class::getAttributes() {
    return this-> attributes;
}

/**
 * @param KT_Attribute *  attr
 */
void KT_Class::addAttribut(KT_Attribute *  attr) {
	(this-> attributes).push_back (attr);

}

/**
 * @param KT_SimpleMethod *  meth
 */
void KT_Class::addMethod(KT_SimpleMethod *  meth) {
	(this-> SimpleMethods).push_back (meth);
}

/**
 * @return vector<KT_Constructor *>
 */
vector<KT_Constructor *> KT_Class::getConstructors() {
    return this-> constructors;
}

/**
 * @param KT_Constructor *  constr
 */
void KT_Class::addConstructor(KT_Constructor *  constr) {
	(this-> constructors).push_back(constr);
}

/**
 * @return string *
 */
string * KT_Class::getParentClass() {
    return this-> ParentClass;
}

/**
 * @return vector<string *>
 */
vector<string *> KT_Class::getParentInterfaces() {
    return this-> ParentInterfaces;
}

/**
 * @return string *
 */
string * KT_Class::getName() {
    return this-> name;
}

/**
 * @return vector<PARSER_MemberDec *> 
 */
vector<PARSER_MemberDec *> KT_Class::getMemberDecs() {
    return this-> memberDecs;
}

/**
 * @param string *
 */
void KT_Class::setName(string * var) {
	this-> name=var;
}

/**
 * @param string *
 */
void KT_Class::setParentClass(string * var) {
	this-> ParentClass=var;
}

/**
 * @param vector<PARSER_MemberDec *>
 */
void KT_Class::setMemberDec(vector<PARSER_MemberDec *>& var) {
	this-> memberDecs= var;
}

/**
 * @param vector<string *>
 */
void KT_Class::setParentInterfaces(vector<string *>& var) {
	this-> ParentInterfaces= var;
}
