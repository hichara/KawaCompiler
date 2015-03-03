
#ifndef GLOBAL_VARIABLE_GEN_KAWA
#define GLOBAL_VARIABLE_GEN_KAWA



class GlobalVariableGenerator {

public:

// Cree un attribut static
static Value* createStaticAttribute(Module *module, std::string className,
				std::string name, std::string type);

// Retourne une variable statique
static Value* getStaticAttribut(Module *module, 
				std::string className, std::string name);


// Cree un l'index d'un attribut
static Value* createOfIndexMember(Module *module,
				std::string name, int index);

// Retourne un objet value contenant un entier
static Value* getIndexOfMember(Module *module, std::string name);


// Creee une table AdHoc
static Value* createAdHocTable(Module *module, std::string classStatic, 
				std::string classDynamic, std::vector<Value *> functions);

static Value* getAdHocTable(Module *module, std::string classStatic, 
				std::string classDynamic);
};


#endif