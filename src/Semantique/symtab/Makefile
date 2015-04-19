CC= clang++
CFLAGS= -Wall -g
SRCDIR= .

all: testSymtab

testSymtab:	testSymtab.cpp symtab.cpp symtab.hpp
	${CC} ${CFLAGS} testSymtab.cpp symtab.cpp -o testSymtab

clean:
	rm testSymtab
