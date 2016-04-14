all:prime.exe

prime.exe:prime.o
	clang -o prime.exe prime.o
	strip -s prime.exe

prime.o:prime.c
	clang -c  -o prime.o prime.c -O3

clean:
	rm *.exe *.o --force 

rebuild:
	make clean
	make

dump-asm:
	clang -c -emit-llvm -o - prime.c |llc -x86-asm-syntax=intel -o - -O3|less

debug:prime-debug.exe

prime-debug.exe:prime.o
	clang -o prime-debug.exe prime.o
