#ifndef KT_LOADATT
#define KT_LOADATT

#include <cstdio>
#include <cstdlib>
#include <string>

#include "../../implementation_KawaTree/KT_FactFinal.h"
#include "../IRCompiler/IRCompiler.h"
#include "llvm/IR/Module.h"

using namespace std;

class IRCompiler;

class KT_LoadAttribute : public KT_FactFinal {

private:
	KT_Expression *caller;
	string attName;
	bool isstatic;
	int index;

	/**
	* visiteur
	*/
    llvm::Value* acceptIRCompiler(IRCompiler *compiler);

public:
	KT_LoadAttribute(){};
	~KT_LoadAttribute(){};

	KT_Expression* getCaller();
	void setCaller(KT_Expression *c);

	string getAttName();
	void setAttName(string name);

	int getIndex();
	void setIndex(int i);

	bool isStatic();
	void setIsStatic(bool b);
}; 


#endif