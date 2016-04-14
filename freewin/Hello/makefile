all:freewin.exe

freewin.exe: freewin.o
	clang -o freewin.exe freewin.o -nostdlib -lkernel32 -mconsole
	strip -s freewin.exe

freewin.o: freewin.c
	clang -c freewin.c -o freewin.o -O3 -ffreestanding -Wall -fno-stack-check -fno-stack-protector
	
clean:
	rm --force *.o *.exe
	
rebuild:
	make clean
	make

dump-asm:
	clang -S -emit-llvm -o - freewin.c -Wall -ffreestanding -fno-stack-check -fno-stack-protector|llc -x86-asm-syntax=intel -o - -O3|less

debug:freewin-debug.exe

freewin-debug.exe:freewin.o
	clang -o freewin-debug.exe freewin.o -nostdlib -lkernel32 -mconsole

#-std=c99  -Wextra -ffreestanding -Os  -fno-stack-check -fno-stack-protector -mno-stack-arg-probe
