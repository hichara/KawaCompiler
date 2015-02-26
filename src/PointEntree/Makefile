all: kawac

clean: 
	@rm -f kawa.cpp kawa.hpp kawac tokens.cpp

lexer: parser tokens.l
	lex -o tokens.cpp tokens.l kawa.hpp

parser: kawa.y 
	bison -d -o kawa.cpp kawa.y

kawac: lexer 
	clang -o kawac kawa.cpp tokens.cpp main.cpp -lstdc++ -lm -ldl -Wno-c++11-extensions 
 




