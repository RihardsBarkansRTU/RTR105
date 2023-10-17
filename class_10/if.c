#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main(void)
{
int rand_sk, rand_sk_seed;

rand_sk_seed = time(NULL);
printf("Gadījuma skaitļu ģeneratora grauds - %d\n",rand_sk_seed);

srand(rand_sk_seed);
rand_sk = rand();
printf("Gadījuma skaitlis - %d\n",rand_sk);

//if(rand_sk % 10) -> 100 % 10 -> 0
//if(rand_sk % 10 == 0) -> 100 % 10 -> 0 == 0 -> 1



if(rand_sk % 10 == 0)
{
printf("Šis skaitlis dalās ar 10 bez atlikuma\n");
}

if(rand_sk % 10)
{
printf("Šis skaitlis nedalās ar 10 bez atlikuma\n");
}
else
{
printf("Šis skaitlis dalās ar 10 bez atlikuma\n");
}
return 0;
}
