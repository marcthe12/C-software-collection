#include <stdio.h>

int main()
{
	char name[100];
	printf( "Whats your name?\n" );
	fgets ( name, 100, stdin );
	printf( "Hello, %s", name );
	return 0;
}
