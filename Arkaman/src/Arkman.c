#include <stdio.h>

int ack(m,n)
int m,n;
   {
       int ans;
       if(m==0)ans =n+1;
            else if (n == 0) ans = ack(m-1,1);
                else ans = ack(m-1,ack(m,n-1));
        return(ans);
   }

int main()
{
   int m, n;
        for (m = 0; m <= 4; m++)
                for (n = 0; n < 6 - m; n++)
                        printf("A(%d, %d) = %d\n", m, n, ack(m, n));

        return 0;
}
