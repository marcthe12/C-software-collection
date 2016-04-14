all:test.exe

test.exe:test.o
	clang -o test.exe test.o
	strip -s test.exe

test.o:test.c
	clang -c  -o test.o test.c -O3

clean:
	rm *.exe *.o --force 

rebuild:
	make clean
	make

dump-asm:
	clang -c -emit-llvm -o - test.c |llc -x86-asm-syntax=intel -o - -O3|less

debug:test-debug.exe

test-debug.exe:test.o
	clang -o test-debug.exe test.o
