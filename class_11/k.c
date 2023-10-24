#include<stdio.h>

int main()
 {

 int i_array_2[3] = {1,2,3}; // int lielumu masīva definēšana

 printf("masīva i_array_2 adrese: %p\n",i_array_2);

int N_bytes = sizeof(i_array_2);
printf("i_array_2 masīva izmērs baitos: %d\n",N_bytes);
int N = N_bytes/sizeof(int); //izveido porciju, ar kuru masīvam pārlekt tālāk


for(int i=0 ; i<N ; i++)
{
 printf("masīva i_array_2 %d. elementa adrese: %p\n",i,&i_array_2[i]);
 printf("masīva i_array_2 %d. elementa vērtība: %d\n",i,i_array_2[i]);
}

return 0;
}

