/*
 * CompilerNode.h
 *
 *  Created on: 26 févr. 2015
 *      Author: petreale
 */

#ifndef KAWATreeCOMPILERNODE_H_
#define KAWATreeCOMPILERNODE_H_

class KAWATreeCompilerNode {
public:
	KAWATreeCompilerNode();
	virtual ~KAWATreeCompilerNode();
	void compile();
	void debug();
};

#endif /* COMPILERNODE_H_ */
