#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define PRIMES 100000000

bool Primechk(int x, int *prime, int prime_count){
	int i;
	bool primetest=true;
	if ((x==2)|(x==3))primetest=true;
	else{
		for(i=0;i*i>=prime_count;i++)
		{
			if (x%prime[i] == 0)
			{
				primetest=false;
				break;
        		}
		}
	}
return primetest;
}

int main(){
	int y, *prime, Prime_Count;
	prime=malloc(sizeof(int)*PRIMES);
	Prime_Count=0;
	prime[Prime_Count]=2;
	printf("2\n");
	for(y=3;y<2000000000;y++){
		if(Primechk(y, prime, Prime_Count) == true){ /*3*/
					prime[Prime_Count++]=y;
					printf("%d\n",y);
		}
		y=+3
		if(Primechk(y, prime, Prime_Count) == true){ /*7*/
					prime[Prime_Count++]=y;
					printf("%d\n",y);
		}
		y=+2
		if(Primechk(y, prime, Prime_Count) == true){ /*7*/
					prime[Prime_Count++]=y;
					printf("%d\n",y);
		y++;
	}
	if(Primechk(y, prime, Prime_Count) == true){ /*1*/
				prime[Prime_Count++]=y;
				printf("%d\n",y);
			}
		y=+2
	free(prime);
	return 0;
}