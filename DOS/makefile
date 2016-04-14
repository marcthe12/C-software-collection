all:hello.com

hello.com:hello.o
	objcopy -O binary hello.o hello.com

hello.o:hello.c
	i686-w64-mingw32-gcc  -c -std=gnu99 -Os -m16 -march=i386 -ffreestanding -masm=intel -Wall -fno-stack-check -fno-stack-protector  -o hello.o hello.c 

clean:
	rm --force *.exe *.o *.com

rebuild:clean all

dump-asm:
	i686-w64-mingw32-gcc -std=gnu99 -Os -S -m16 -march=i386 -ffreestanding -masm=intel -o -  hello.c|less
