all:float.exe

float.exe:float.o
	clang -o float.exe float.o
	strip -s float.exe

float.o:float.c
	clang -c  -o float.o float.c -O3

clean:
	rm *.exe *.o --force 

rebuild:
	make clean
	make

dump-asm:
	clang -c -emit-llvm -o - float.c |llc -x86-asm-syntax=intel -o - -O3|less

debug:float-debug.exe

float-debug.exe:float.o
	clang -o float-debug.exe float.o
