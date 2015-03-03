/*
 * CompilerNode.h
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#ifndef KAWATreeCOMPILERNODE_H_
#define KAWATreeCOMPILERNODE_H_

#include "KAWATreeCompiler.h"

class KAWATreeCompilerNode {
public:
	KAWATreeCompilerNode(){};
	~KAWATreeCompilerNode(){};
	virtual void compile(KAWATreeCompiler* compiler){};
	virtual void debug(){};
};

#endif /* COMPILERNODE_H_ */
