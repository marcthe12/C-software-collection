#include <stdio.h>
#include <stdint.h>
#include <math.h>

int64_t fibonachi(int n)
{
    int64_t ans,X,Y;
    int g;
    if (n==0)ans=0;
    else if (n==1) ans=1;
    else if (n > 1)
        {
            X=0;
            Y=1;
            for(g=2;g<=n; g++)
            {
                ans= X+Y;
                X=Y;
                Y=ans;
            }
        }
    else if (n < 1) ans = pow(-1,n-1)*fibonachi(-n);
    return (ans);
}

int main()
{
    int n;
    for (n = -90; n <= 90; n++)
     printf("%d  %I64d\n",n,fibonachi(n));
    return 0;
}
