/**
 * Interface KAWATreeCompiler
 * Author: Pierre-Luc BLOT
 */

#ifndef KAWATREECOMPILER_H_
#define KAWATREECOMPILER_H_


class KAWATreeProgram;
class KAWATreeClass;
class KAWATreeMethod;
class KAWATreeBodyMethod;
class KAWATreePrintInteger;
class KAWATreePrintFloat;
class KAWATreePrintString;
class KAWATreeParam;
class KAWATreeType;


class KAWATreeCompiler {
public:
	KAWATreeCompiler(){};
	~KAWATreeCompiler(){};
    virtual void compile(KAWATreeProgram* p) = 0;
    virtual void compile(KAWATreeClass* c) = 0;
    virtual void compile(KAWATreeMethod* m) = 0;
    virtual void compile(KAWATreeBodyMethod* b) = 0;
    virtual void compile(KAWATreeParam* p) = 0;
    virtual void compile(KAWATreeType* t) = 0;
    virtual void compile(KAWATreePrintInteger* pi) = 0;
    virtual void compile(KAWATreePrintFloat* pf) = 0;
    virtual void compile(KAWATreePrintString* ps) = 0;
	
};

#endif /* KAWATREECOMPILER_H_ */
