all:Arkman.exe

Arkman.exe:Arkman.o
	clang -o Arkman.exe Arkman.o
	strip -s Arkman.exe

Arkman.o:Arkman.c
	clang -c  -o Arkman.o Arkman.c -O3

clean:
	rm *.exe *.o --force 

rebuild:
	make clean
	make

dump-asm:
	clang -c -emit-llvm -o - Arkman.c |llc -x86-asm-syntax=intel -o - -O3|less

debug:Arkman-debug.exe

Arkman-debug.exe:Arkman.o
	clang -o Arkman-debug.exe Arkman.o
