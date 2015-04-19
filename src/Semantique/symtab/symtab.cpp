#ifndef __SYMTAB_H
#define __SYMTAB_H

#include <iostream>
#include "symtab.hpp"

using namespace std;

class Symtab: public ITableOfSymbol{public:
	
	SemanticPtr* getSymbol(string* sym){
		
	}
	
	void enterBloc(){
		
	}
	
	void exitBloc(){
		
	}
	
	void addSymbol(string* sym, SemanticPtr* sptr){
		
	}
};

#endif