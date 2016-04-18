all:win32.exe

win32.exe:win32.o Resource.o
	clang -o win32.exe win32.o Resource.o -mwindows -lgdi32 -luser32 -lkernel32
	strip -s win32.exe

win32.o:win32.c
	clang -c  -o win32.o win32.c -O3

Resource.o:Resource.rc
	windres -i Resource.rc -o Resource.o -J rc -O COFF -v

clean:
	rm *.exe *.o *.res --force 

rebuild: clean all

dump-asm:
	clang -c -emit-llvm -o - win32.c |llc -x86-asm-syntax=intel -o - -O3|less

debug:win32-debug.exe

win32-debug.exe:win32.o
	clang -o win32-debug.exe win32.o
