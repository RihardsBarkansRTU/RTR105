#include <stdio.h>

void main()
{
    //[!]Šis kods strādā online kompilatorā, bet ne manā VSC,
    //jo kaut kāda iemesla pēc long int datu tips aizņem 4 baitus, nevis 8 baitus
    /*
    unsigned long int a = 400000;
    unsigned long int b = 100000;
    unsigned long int c = a*b;
    printf("%ld\n",c); 
    */

    __int128_t int1;
    __int128_t int2;
    scanf("%ld",&int1);
    scanf("%ld",&int2);
    printf("a * b = %ld\n",int1*int2);
    printf("(Size of __int128_t = %d)\n",__SIZEOF_INT128__);


}