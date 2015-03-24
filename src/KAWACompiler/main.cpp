#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <fstream>
#include <vector>
#include "../AST/AST.h"
#include "../KAWATree/src/KAWATreeCompiler.h"
#include "../KAWATree/src/KAWATreeMonolithicCompiler.h"
#include "../KAWATree/src/KAWATreeCompilerNode.h"
#include "../KAWATree/src/KAWATreeProgram.h"
#include "../KAWATree/src/KAWATreeClass.h"
#include "../KAWATree/src/KAWATreeMethod.h"
#include "../KAWATree/src/KAWATreeBodyMethod.h"
#include "../KAWATree/src/KAWATreeInstruction.h"
#include "../KAWATree/src/KAWATreeParam.h"
#include "../KAWATree/src/KAWATreeType.h"
#include "../KAWATree/src/KAWATreePrintInteger.h"
#include "../KAWATree/src/KAWATreePrintFloat.h"
#include "../KAWATree/src/KAWATreePrintString.h"



using namespace std;

extern int yyparse();

int main( int argc, char** argv ){

    // lft-cc [ input-file ]
    if( argc > 1 ){
        freopen( argv[1], "r", stdin );
    }

    yyparse();
    //KAWATreeCompiler* compiler = new KAWATreeMonolithicCompiler;
    /*if ( program->checkSemantic() )
    	compiler->compile(program);
    */
    //fout.close();

    return 0;
}
