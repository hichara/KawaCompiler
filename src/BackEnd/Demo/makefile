
CFLAGS= -Wall -g -Wno-deprecated-register -Wno-string-plus-int -std=c++11
IRGENDIR = ../IRGeneration
IRCMP = ../IRCompiler
LLMVFLAGS = `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core native` -O3
KTDIR = ../../implementation_KawaTree
KTXTRA = ../KT_extra

all:
	clang++ demo.cpp ${KTXTRA}/*.cpp ${IRGENDIR}/*.cpp ${KTDIR}/*.cpp ${IRCMP}/IRCompiler*.cpp  ${CFLAGS} ${LLMVFLAGS} -o demo 2> Makeout
	./demo
	llc-3.5 programme_test.ll
	gcc programme_test.s -o prog

test:
	clang++ demo.cpp ${KTXTRA}/*.cpp ${IRGENDIR}/*.cpp *.o ${IRCMP}/IRCompiler*.cpp  ${CFLAGS} ${LLMVFLAGS} -o demo 2> Makeout

kt_o:
	clang++ -c ${KTDIR}/*.cpp ${CFLAGS} ${LLMVFLAGS} 2> Makeout

syntaxe1:
	clang++ demo.cpp ${CFLAGS} ${LLMVFLAGS} 2> Makeout

syntaxe2:
	clang++ semanticTool.cpp ${CFLAGS} ${LLMVFLAGS} 2> Makeout	

syntaxe3:
	clang++ ${KTXTRA}/*.cpp ${LLMVFLAGS} ${CFLAGS} 2> Makeout

demo: test
	./demo
	llc-3.5 programme_test.ll
	gcc programme_test.s

test_ll:
	llc-3.5	programme_test.ll
	gcc programme_test.s
	./a.out
	



