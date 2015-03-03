/*
 * AST.h
 *
 *  Created on: 3 mars 2015
 *      Author: idriss
 */

#ifndef AST_H_
#define AST_H_

class AST {
public:
	AST(int typeast);//constructeur

protected:
	      int TypeAST;

	      //setteur
	      void setTypeAST(int type);
	      //getteur
	      int getTypeAST()const;

	      virtual ~AST();//destructeur
};

#endif /* AST_H_ */
