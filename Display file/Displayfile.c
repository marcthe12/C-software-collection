#include <stdio.h>

int main( int argc, char *argv[])
{
	FILE *file = fopen( argv[1], "r" );
	if ( file == 0 ) printf( "Could not open file\n" );
	else{
		int x;
		while ((x = fgetc(file))!= -1 ) fprintf(stdout,"%c", x );
        }
	fclose( file );
}
