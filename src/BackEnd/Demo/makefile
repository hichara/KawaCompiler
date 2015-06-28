
CFLAGS= -Wall -g -Wno-deprecated-register -Wno-string-plus-int -std=c++11
IRGENDIR = ../IRGeneration
IRCMP = ../IRCompiler
LLMVFLAGS = `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core native` -O3
KTDIR = ../../implementation_KawaTree
KTXTRA = ../KT_extra

all: build compile_ll

build:
	clang++ demo.cpp ${KTXTRA}/*.cpp ${IRGENDIR}/*.cpp ${KTDIR}/*.cpp ${IRCMP}/IRCompiler*.cpp  ${CFLAGS} ${LLMVFLAGS} -o demo 2> Makeout

build_o:
	clang++ demo.cpp ${KTXTRA}/*.cpp ${IRGENDIR}/*.cpp *.o ${IRCMP}/IRCompiler*.cpp  ${CFLAGS} ${LLMVFLAGS} -o demo 2> Makeout

kt_o:	
	clang++ -c ${KTDIR}/*.cpp  ${CFLAGS} ${LLMVFLAGS} 2> Makeout

compile_ll:
	./demo
	llc-3.5	programme_test.ll
	gcc programme_test.s
	./a.out
	



