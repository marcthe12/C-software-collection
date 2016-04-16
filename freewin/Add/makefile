all:add.exe

add.exe:add.o libadd.a
	clang -o add.exe add.o -L. -ladd
	strip -s add.exe

add.o:add.c
	clang -c  -o add.o add.c -O3

libadd.a: libadd.o
	ar rcs libadd.a libadd.o

libadd.o:libadd.c
	clang -c  -o libadd.o libadd.c -O3

clean:
	rm *.exe *.o *a --force
rebuild:
	make clean
	make

dump-asm:
	clang -c -emit-llvm -o - add.c |llc -x86-asm-syntax=intel -o - -O3|less
	
debug:add-debug.exe

add-debug.exe:add.o libadd.a
	clang -o add-debug.exe add.o -L. -ladd
