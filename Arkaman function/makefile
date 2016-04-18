all:Arkman

Arkman.exe:Arkman.o
	clang -o Arkman Arkman.o
	strip -s Arkman

Arkman.o:Arkman.c
	clang -c -o Arkman.o Arkman.c -O3

clean:
	rm *.exe *.o --force

rebuild:
	make clean
	make

dump-asm:
	clang -c -emit-llvm -o - Arkman.c |llc -x86-asm-syntax=intel -o - -O3|less

debug:Arkman-debug.exe

Arkman-debug.exe:Arkman.o
	clang -o Arkman-debug Arkman.o
