#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main(void)
{
int rand_sk, rand_sk_seed,i;
/*	i = i + 1;
	i++;
	i += 1;
	++i; */
rand_sk_seed = time(NULL);

for(i=1;i<50;i++)
{
printf("-");
}
printf("\nGadījuma skaitļu ģeneratora grauds - %d\n\n",rand_sk_seed);
srand(rand_sk_seed);
rand_sk = rand();

for( ; rand_sk % 10 ; )
{
printf("%d nedalās\n",rand_sk);
rand_sk = rand();
}

printf("\n\t%d dalās\n\n\t\tĢenerēšanas beigas.\n\n",rand_sk);


return 0;
}
