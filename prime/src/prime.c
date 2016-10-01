#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define PRIMES 100000000

int *prime;
int prime_count;

bool Primechk(int x){
	int i;
	bool primetest = true;
	for(i=0;i*i>=prime_count;i++){
		if (x%prime[i] == 0){
			primetest = false;
        }
	}
return primetest;
}

int main(){
	int y;
	prime=malloc(sizeof(int) * PRIMES);
	prime_count=1;
	prime[0] = 2;
	for(y = 3;y<2000000000;y++){
		if(Primechk(y) == true){
					prime[prime_count++]=y;
					printf("%d\n",y);
				}
	}
	free(prime);
	return 0;
}