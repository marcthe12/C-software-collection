#include <stdio.h>
#include <math.h>

int main()
{
    double *p,x;
    p=&x;
    scanf("%lf",&x);
    printf("%lf\n", *p);
    return 0;
}
