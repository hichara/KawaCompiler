
#include "KawaTool.h"

KT_Type* KawaTool::getType(string name) {
	
	KT_Type *t = new KT_Type;
	std::vector<std::string*> vec_name;
	vec_name.push_back(new string(name));
	t->setTypeName(vec_name);

	return t;
}


KT_String* KawaTool::getString(string s) {

	KT_String  *str = new KT_String;
	std::string *s1 = new string(s);
	
	str->setValue(s1);

	return str;
}

KT_Entier* KawaTool::getInt(int i) {
	KT_Entier *int1 = new KT_Entier;
	int1->setValue(i);

	return int1;
}


KT_Param* KawaTool::getParam(string name, string type) {

	KT_Param* p = new KT_Param;

	p->setName(new string(name));
	p->setParamType(getType(type));

	return p;
}

KT_Prototype* KawaTool::CopyPrototype(KT_Prototype *p) {
	KT_Prototype *newP = new KT_Prototype;

	*newP = *p;
	
	return newP;
}


KT_Class* KawaTool::getClass(string name) {
	KT_Class *c = new KT_Class;

	std::string *cName = new string(name);
	c->setName(cName);
	c->setFQN(new string(name));

	return c;
}

KT_Attribute* KawaTool::getAttribute(string name, string type, bool isStatic, int v) {
	KT_Attribute *att1 = new KT_Attribute;

	att1->setName(new string(name));
	att1->setType(getType(type));
	att1->setModifier(new KT_Modifier);
	att1->getModifier()->setStatic(isStatic);
	att1->getModifier()->setVisibility(v);

	return att1;
}


KT_Prototype* KawaTool::getPrototype(string name, string parentName, string retType, bool isStatic) {
	KT_Prototype *p1 = new KT_Prototype;

	p1->setName(new string(name));
	p1->setParentName(parentName);
	p1->setReturnType(getType("int"));
	p1->setModifier(new KT_Modifier);
	p1->getModifier()->setStatic(isStatic);

	return p1;
}


KT_Variable* KawaTool::getDeclaration(string name, string type, KT_Expression *init) {
	KT_Variable *var = new KT_Variable;

	std::vector<std::string*> vec_var_name;

	vec_var_name.push_back(new string(name));

	var->setName(vec_var_name);
	var->setType(getType(type));	
	var->setValue(init);

	return var;
}

KT_ID* KawaTool::getID(string name) {
	KT_ID *id2 = new KT_ID;

	vector<string*> vec;

	vec.push_back(new string(name));

	id2->setValue(vec);

	return id2;
}

KT_Print* KawaTool::getPrint(KT_FactFinal *f) {
	KT_Print *print = new KT_Print;

	vector<KT_FactFinal*> vec_factfinal;

	vec_factfinal.push_back(f);

	print->setArgs(vec_factfinal);

	return print;
}

KT_LoadAttribute* KawaTool::getLoadAtt(KT_Expression* caller, string name, int index, bool isstatic) {
	KT_LoadAttribute *load = new KT_LoadAttribute;

	load->setCaller(caller);
	load->setAttName(name);
	load->setIndex(index);
	load->setIsStatic(isstatic);

	return load;
}

KT_Affectation*	KawaTool::getAffectation(KT_Expression* le, KT_Expression* re) {
	KT_Affectation *af = new KT_Affectation;

	af->setLExpression(le);
	af->setRExpression(re);

	return af;
}

KT_MethodCall* KawaTool::getMethodeCall(KT_VarOrAttr *caller, KT_SimpleMethod *sm) {

	KT_MethodCall *call = new KT_MethodCall;

	call->setMethodCall(sm);
	call->setCaller(caller);

	return call;
}

KT_Constructor* KawaTool::getConstructor(KT_Class*classe, string name) {

	KT_Constructor *cons1 = new KT_Constructor;
	cons1->setName(new string(name));
	cons1->setModifier(new KT_Modifier);
    classe->addConstructor(cons1);

    return cons1;
}

KT_ConstructorCall* KawaTool::getConstructorCall(KT_Constructor* cons1) {
	
	KT_ConstructorCall *consCall1 = new KT_ConstructorCall;
	std::vector<KT_ParamsMethodCall*> var_cons_call;

	consCall1->setMethod(cons1);
	consCall1->setParams(var_cons_call);

	return consCall1;
}


bool KawaTool::prototype_equal(KT_Prototype *p1, KT_Prototype *p2) {
	bool b1 = *(p1->getName()) == *(p2->getName());
    
	b1 = b1 && fqnType(
		p1->getReturnType()->getTypeName()) == fqnType(
		p2->getReturnType()->getTypeName());

    std::vector<KT_Param*> params1 = p1->getParams();
    std::vector<KT_Param*> params2 = p2->getParams();

    b1 = b1 && (params1.size() == params2.size());

	for(int i = 0; i < params1.size() && b1; i++) {
		std::string s1 = fqnType(params1[i]->getParamType()->getTypeName());
		std::string s2 = fqnType(params2[i]->getParamType()->getTypeName());

		b1 = (s1 == s2);
	}
    
	return b1;
}

string KawaTool::fqnType(vector<std::string*> vec) {
	std::stringstream res;

	res << *(vec[0]);
	for(int i = 1; i < vec.size(); i++) {
		res << "." << *(vec[i]);
	}

	return res.str();
}

KT_Interface* KawaTool::getInterface(string name) {

	KT_Interface *i = new KT_Interface;

	i->setFQN(new string(name));

	return i;
}
