all:win64.exe

win64.exe:win64.o
	clang -o win64.exe win64.o
	strip -s win64.exe

win64.o:win64.c
	clang -c  -o win64.o win64.c -O3

clean:
	rm *.exe *.o --force 

rebuild:
	make clean
	make

dump-asm:
	clang -c -emit-llvm -o - win64.c |llc -x86-asm-syntax=intel -o - -O3|less

debug:win64-debug.exe

win64-debug.exe:win64.o
	clang -o win64-debug.exe win64.o
