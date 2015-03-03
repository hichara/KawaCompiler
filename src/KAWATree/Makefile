CC= clang++
CFLAGS= -Wall -g
SRCDIR= src
OBJDIR= obj

all: KawaTreeHelloWorld

KawaTreeHelloWorld:	KawaTreeHelloWorld.cpp ${SRCDIR}/*.h
	${CC} ${CFLAGS} ${SRCDIR}/*.cpp KawaTreeHelloWorld.cpp -o KawaTreeHelloWorld

clean:
	rm KawaTreeHelloWorld
