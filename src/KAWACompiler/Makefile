CC= clang++
CFLAGS= -Wall -g -Wno-deprecated-register -Wno-string-plus-int -std=c++11
LDFLAGS= -lm -ldl `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3
KAWATreeSrcDir= ../implementation_KawaTree
SemanticSrcDir= ../Semantique
IRGENDIR= ../BackEnd/IRGeneration
IRCMPDIR= ../BackEnd/IRCompiler
KTXTRA=   ../BackEnd/KT_extra

all: kawap

clean:
	@rm -f kawa.cpp kawa.hpp kawap tokens.cpp

lexer: parser tokens.l
	lex -o tokens.cpp tokens.l kawa.hpp

parser: kawa.y
	bison -d -o kawa.cpp kawa.y

kawap: lexer
	${CC} ${CFLAGS} ${KTXTRA}/*.cpp ${IRGENDIR}/*.cpp ${IRCMPDIR}/*.cpp ${SemanticSrcDir}/*.cpp ${KAWATreeSrcDir}/*.cpp -o kawap kawa.cpp tokens.cpp ${LDFLAGS}
