all:hello

hello:hello.o
	clang -o hello hello.o
	strip -s hello

hello.o:hello.c
	clang -c -o hello.o hello.c -O3

clean:
	rm hello *.o --force

rebuild:
	make clean
	make

dump-asm:
	clang -c -emit-llvm -o - hello.c |llc -x86-asm-syntax=intel -o - -O3|less

debug:hello-debug

hello-debug:hello.o
	clang -o hello-debug hello.o
