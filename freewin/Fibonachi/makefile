all:Fibo.exe

Fibo.exe:Fibo.o
	clang -o Fibo.exe Fibo.o
	strip -s Fibo.exe

Fibo.o:Fibo.c
	clang -c  -o Fibo.o Fibo.c -O3

clean:
	rm *.exe *.o --force 

rebuild:
	make clean
	make

dump-asm:
	clang -c -emit-llvm -o - Fibo.c |llc -x86-asm-syntax=intel -o - -O3|less

debug:Fibo-debug.exe

Fibo-debug.exe:Fibo.o
	clang -o Fibo-debug.exe Fibo.o
