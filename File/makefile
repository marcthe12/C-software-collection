all:File.exe

File.exe:File.o
	clang -o File.exe File.o
	strip -s File.exe

File.o:File.c
	clang -c  -o File.o File.c -O3

clean:
	rm *.exe *.o --force 

rebuild:
	make clean
	make

dump-asm:
	clang -c -emit-llvm -o - File.c |llc -x86-asm-syntax=intel -o - -O3|less

debug:File-debug.exe

File-debug.exe:File.o
	clang -o File-debug.exe File.o
