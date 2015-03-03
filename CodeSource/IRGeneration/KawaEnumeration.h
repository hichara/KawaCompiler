#ifndef KAWA_ENUMERATION
#define KAWA_ENUMERATION

#include <cctype>
#include <cstdio>
#include <map>
#include <string>
#include <vector>
#include <cstring> 

class KawaEnumeration {
public:
	enum Prefix
	{
	  CONSTRUCTOR_PREFIX		
	};

	std::vector<int> v;

	static {

	}

	const char *prefixTable[] = {"dce"};

};

/*
#ifndef KAWA_ENUMERATION
#define KAWA_ENUMERATION

#define	ADHOCTABLE_LABEL "adhoctable"
#define	STATIC "static"

#define	FUNCTION_ALREADY_EXIST "function already exists"
#define	UNKNOWN_TYPE  "unknwon type"
#define	ERROR_ILLEGAL_NUMBER_OF_ARGS "illegal number of args"
#define	ERROR_INVALID_ARG "invalid argument" 
	
#define	VOID "void"
#define	INT  "int"
#define	FLOAT  "float"
#define	DOUBLE "double" 

#define	METHODE_INDEX_PREFIX "methode_index_"
#define CONSTRUCTOR_PREFIX "KawaConstructor"
#define	ADHOCTABLE_PREFIX "adhocTable_index_"

#define	KAWA_CLASS_PREFIX "KawaClass_"
#define	KAWA_CLASS_STRUCT_PREFIX "KawaClass_Struct"
#define	ATTRIBUT_INDEX_PREFIX "attribut_index_"  
#define	ATTRIBUT_INDEX_STATIC_PREFIX  "static_attribut_index_"
#define	KAWA_INT "KawaInt"
#define	KAWA_FLOAT "KawaFloat"
#define	KAWA_DOUBLE "KawaDouble"
#define	KAWA_VOID  "KawaVoid"

#define	KAWA_THIS  "this"
*/
#endif