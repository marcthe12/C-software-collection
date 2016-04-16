all:Displayfile.exe

Displayfile.exe:Displayfile.o
	clang -o Displayfile.exe Displayfile.o
	strip -s Displayfile.exe

Displayfile.o:Displayfile.c
	clang -c  -o Displayfile.o Displayfile.c -O3

clean:
	rm *.exe *.o --force 

rebuild:
	make clean
	make

dump-asm:
	clang -c -emit-llvm -o - Displayfile.c |llc -x86-asm-syntax=intel -o - -O3|less

debug:Displayfile-debug.exe

Displayfile-debug.exe:Displayfile.o
	clang -o Displayfile-debug.exe Displayfile.o
