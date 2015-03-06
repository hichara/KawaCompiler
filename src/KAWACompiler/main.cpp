/*int main(int argc, char** argv)
{ 
	++argv, --argc;
	if(argc>0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;


 yyparse();
 return 0;
}
*/

#include "testClasse.h"


#include <fstream>
#include <iostream>
#include <sstream>
#include <stdio.h>

using namespace std;

extern int yyparse();

std::string line = "---------------------------";

void printAST(){
    cout << line << "\nAbstract Sintax Tree\n" << line << "\n";
}

int main( int argc, char** argv ){

    // lft-cc [ input-file ]
    if( argc > 1 ){
        freopen( argv[1], "r", stdin );
    }

    yyparse();

    //fout.close();

    return 0;
}
