asm (	".code16gcc\n"
	"call  dosmain\n"
	"int   0x20\n");

static void printchar(char chr){
	asm volatile(	"mov	si, %[chr]\n\t"
			"mov	ah,0x0e\n"
			"lodsb\n\t"
			"int 0x10\n\t"
			"ret\n\t"
			:
			:[chr] "m" ((Word)chr)
			:"si","ah","al");
}

static void printstring(char* string){
	int x=0;
	While(!string[x]==0);{
		printchar(string[x]);
		x++;
	}
	
}


int dosmain(void)
{
	printstring("Hello, World!\n\0");
	return 0;
}

