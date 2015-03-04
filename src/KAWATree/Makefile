CC= clang++
CFLAGS= -Wall -g
SRCDIR= src
IRDIR= src/IRGen
OBJDIR= obj

all: KawaTreeHelloWorld

KawaTreeHelloWorld:	KawaTreeHelloWorld.cpp ${SRCDIR}/*.h
	${CC} ${CFLAGS} ${IRDIR}/*.cpp ${SRCDIR}/*.cpp KawaTreeHelloWorld.cpp -o KawaTreeHelloWorld `llvm-config-3.5 --cxxflags --ldflags --system-libs --libs core jit native` -O3	

buildExec:
	./KawaTreeHelloWorld 2> KawaTreeHelloWorld.ll
	llc KawaTreeHelloWorld.ll
	gcc KawaTreeHelloWorld.s -o HelloWorld

clean:
	rm KawaTreeHelloWorld
	rm KawaTreeHelloWorld.s
	rm KawaTreeHelloWorld.ll
