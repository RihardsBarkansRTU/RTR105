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

    long long int int1;
    long long int int2;
    printf("Lūdzu ievadiet 2 skaitļus\n");
    scanf("%lld",&int1);
    scanf("%lld",&int2);
    printf("a * b = %lld\n",int1*int2);
    printf("(Size of __int128_t = %d)\n",__SIZEOF_INT128__);
    printf("(Size of long long int = %d)\n",sizeof(long long int));


}