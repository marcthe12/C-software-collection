#include <stdio.h>
#include <stdint.h>

int64_t factorial(int n)
{
  int64_t ans;
  if (n == 0)
    ans=1;
  else
    ans= n * factorial(n-1);
    return ans;
}

int main()
{
    int m;
    for (m = 0; m <= 20; m++)
     printf("%d! = %I64d\n",m,factorial(m));
    return 0;
}
