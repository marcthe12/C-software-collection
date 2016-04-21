#include <stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("..\\..\\text.txt", "wb");
    char x[10]="ABCDEFGHJ";
    fwrite(x, sizeof(x[0]), sizeof(x)/sizeof(x[0]), fp);
    fclose(fp);
    return 0;
}
