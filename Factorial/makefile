all:fact.exe

fact.exe:fact.o
	clang -o fact.exe fact.o
	strip -s fact.exe

fact.o:fact.c
	clang -c  -o fact.o fact.c -O3

clean:
	rm *.exe *.o --force 

rebuild:
	make clean
	make

dump-asm:
	clang -c -emit-llvm -o - fact.c |llc -x86-asm-syntax=intel -o - -O3|less

debug:fact-debug.exe

fact-debug.exe:fact.o
	clang -o fact-debug.exe fact.o
