#include "HelloWorld.h"
#include "unsigned_char_max.h"
#include "prints.h"
#include "sign.h"

#include <stdio.h>

void main()
{

    //bez argumentiem, bez return
        //printē "Hello, world!"
    printf("\n--funkcija 1--\n");

    HelloWorld();


    //ar argumentiem, bez return
        //printē stringu, ar jau iebūvētu "\n"
    printf("\n--funkcija 2--\n");

    prints("hello");


    //bez argumentiem, ar return
        //printē lielāko skaitli, ko var saglabāt ar unsigned char datu tipu
    printf("\n--funkcija 3--\n");

    printf("%d\n",unsigned_char_max());
    

    //ar argumentiem, ar return
        //atgriež skaitļa zīmi
    printf("\n--funkcija 4--\n");

    printf("sign(13) = %d\n",sign(13));
    printf("sign(0) = %d\n",sign(0));
    printf("sign(-7) = %d\n",sign(-0.7));

}