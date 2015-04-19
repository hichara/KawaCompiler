#ifndef __ITABLE_OF_SYMBOL_H
#define __ITABLE_OF_SYMBOL_H


/**
* Interface ITableOfSymbol.
* Specifie les operations sur la table des symboles.
*/

using namespace std;

// todo : bouchon pour SemanticPtr à retirer une fois que ce type sera défini.
class SemanticPtr{};

class ITableOfSymbol{public:
	// Requete
	/**
	* Retourne l’instance representant le symbol en fonction de son nom.
	* @param sym Nom du symbol.
	*/
	virtual SemanticPtr* getSymbol(string* sym) = 0;
	// Commandes
	/**
	* Place le curseur interne sur un nouveau bloc.
	* Toutes les futures operations se feront sur ce bloc.
	*/
	virtual void enterBloc() = 0;
	/**
	* Deplace le curseur interne sur le bloc precedent.
	* Toutes les futures operations se feront sur ce bloc.
	*/
	virtual void exitBloc() = 0;
	/**
	* Ajoute une definition de symbol dans la table des symboles.
	* @param sym Nom du symbol
	* @param sptr pointeur sur l’instance qui represente le symbol.
	*/
	virtual void addSymbol(string* sym, SemanticPtr* sptr) = 0;
};

#endif