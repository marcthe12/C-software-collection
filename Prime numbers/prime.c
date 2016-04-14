#include <stdio.h>
#include <stdbool.h>

bool Primechk(int x)
{
int c;
bool f=true;
if ((x==2)|(x==3))f=true;
else{
        for(c=2;x>=c*c;c++)
        {
           if (x%c == 0)
            {
            f=false;
            break;
            }
        }

    }
return f;

}

int main()
{
    int y;
    for(y=2;y<10000;y++)
    {
        if(Primechk(y)== true)printf("%d\n",y);
    }
        return 0;
}
