all:colour.exe

colour.exe:colour.o
	gcc -o colour.exe colour.o -lncurses -s

colour.o:colour.c
	clang -c  -o colour.o colour.c -O3

clean:
	rm *.exe *.o --force 

rebuild:
	make clean
	make

dump-asm:
	clang -c -emit-llvm -o - test.c |llc -x86-asm-syntax=intel -o - -O3|less

debug:test-debug.exe

colour-debug.exe:colour.o
	clang -o colour-debug.exe colour.o
