#ifndef KAWA_ENUMERATION
#define KAWA_ENUMERATION

#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <sstream>

class KawaEnumeration {
public:
	KawaEnumeration();
	~KawaEnumeration();

	static const std::string ADHOCTABLE_LABEL;
	static const std::string STATIC;
	static const std::string KAWA_THIS;
	
	static const std::string ERROR_FUNCTION_ALREADY_EXIST;
	static const std::string ERROR_UNKNOWN_TYPE;
	static const std::string ERROR_ILLEGAL_NUMBER_OF_ARGS;
	static const std::string ERROR_INVALID_ARG;
	static const std::string ERROR_EMPTY_CLASS_STRING;
	static const std::string ERROR_EMPTY_STRING;
	static const std::string ERROR_CLASS_AREADY_EXIST;
	static const std::string ERROR_UNKNOW_INDEX;

	static const std::string ERROR_MAIN_FUNCTION_ALREADY_EXIST;
	static const std::string ERROR_MAIN_ONLY_TWO_NOT_EMPTY_NAME_REQUIRED;
		
	static const std::string INT;
	static const std::string CHAR;
	static const std::string VOID;
	static const std::string FLOAT;
	static const std::string DOUBLE;
	static const std::string STRING;

	static const std::string KAWA_INT;
	static const std::string KAWA_CHAR;
	static const std::string KAWA_FLOAT;
	static const std::string KAWA_DOUBLE;
	static const std::string KAWA_VOID;
	static const std::string KAWA_STRING;

	static const std::string METHODE_INDEX_PREFIX;
	static const std::string CONSTRUCTOR_PREFIX;
	static const std::string SUB_CONSTRUCTOR_PREFIX;
	static const std::string ADHOCTABLE_PREFIX;

	static const std::string KAWA_CLASS_PREFIX;
	static const std::string KAWA_CLASS_STRUCT_PREFIX;
	static const std::string ATTRIBUT_INDEX_PREFIX;
	static const std::string ATTRIBUT_INDEX_STATIC_PREFIX;

	static const std::string KAWA_FORMAT_INT_TO_STRING;
	static const std::string KAWA_FORMAT_FLOAT_TO_STRING;
	static const std::string KAWA_FORMAT_DOUBLE_TO_STRING;
	static const std::string KAWA_FORMAT_CHAR_TO_STRING;
};


#endif


/*

#define	ERROR_FUNCTION_ALREADY_EXIST "function already exists"
#define	ERROR_UNKNOWN_TYPE  "unknwon type"
#define	ERROR_ILLEGAL_NUMBER_OF_ARGS "illegal number between args"
#define	ERROR_INVALID_ARG "invalid argument" 
#define ERROR_EMPTY_CLASS_STRING "empty string"
#define ERROR_EMPTY_STRING "empty string"
#define ERROR_FUNCTION_ALREADY_EXIST "function already exists"
#define ERROR_CLASS_AREADY_EXIST "function already exists"
#define ERROR_UNKNOW_INDEX "index inconnue"

#define ERROR_MAIN_FUNCTION_ALREADY_EXIST "function main already exists"
#define ERROR_MAIN_ONLY_TWO_NOT_EMPTY_NAME_REQUIRED "function only requires two not empty names"
	
#define	INT    "int"
#define CHAR   "char"
#define	VOID   "void"
#define	FLOAT  "float"
#define	DOUBLE "double"
#define STRING "string"

#define	KAWA_INT    "KawaInt"
#define KAWA_CHAR   "KawaChar"
#define	KAWA_FLOAT  "KawaFloat"
#define	KAWA_DOUBLE "KawaDouble"
#define	KAWA_VOID   "KawaVoid"
#define KAWA_STRING "KawaString"


#define	METHODE_INDEX_PREFIX "methode_index_"
#define CONSTRUCTOR_PREFIX "KawaConstructor_"
#define SUB_CONSTRUCTOR_PREFIX "SubConstructor_"
#define	ADHOCTABLE_PREFIX "adhocTable_"

#define	KAWA_CLASS_PREFIX "KawaClass_"
#define	KAWA_CLASS_STRUCT_PREFIX "KawaClass_Struct_"
#define	ATTRIBUT_INDEX_PREFIX "attribut_index_"  
#define	ATTRIBUT_INDEX_STATIC_PREFIX  "static_attribut_index_"

#define KAWA_FORMAT_INT_TO_STRING "kawa_format_int"
#define KAWA_FORMAT_FLOAT_TO_STRING "kawa_format_float"
#define KAWA_FORMAT_DOUBLE_TO_STRING "kawa_format_double"
#define KAWA_FORMAT_CHAR_TO_STRING   "kawa_format_char"
*/

