#include <stdio.h>

//bez argumentiem, bez return
//printē "Hello, world!"
void HelloWorld()
{
    printf("Hello, world!\n");
}

//bez argumentiem, ar return
//printē lielāko skaitli, ko var saglabāt unsigned char datu tips
int unsigned_char_max()
{
    return 255;
}

//ar argumentiem, bez return
//printf() funkcija printē stringu, ar jau iebūvētu "\n"
void prints(unsigned char str[unsigned_char_max()])
{
    printf("%s\n",str);
}

//ar argumentiem, ar return
//sign() atgriež skaitļa zīmi
int sign(int a)
{
    char s;

    if (a>0) s=1;
    if (a<0) s=-1;
    if (a==0) s=0;

    return s;
}


void main()
{

    //bez argumentiem, bez return
    //printē "Hello, world!"
    printf("\n--funkcija 1--\n");
    HelloWorld();


    //ar argumentiem, bez return
    //printf() funkcija printē stringu, ar jau iebūvētu "\n"
    printf("\n--funkcija 2--\n");
    prints("hello");


    //bez argumentiem, ar return
    //printē lielāko skaitli, ko var saglabāt unsigned char datu tips
    printf("\n--funkcija 3--\n");
    printf("%d\n",unsigned_char_max());
    

    //ar argumentiem, ar return
    //sign() atgriež skaitļa zīmi
    printf("\n--funkcija 4--\n");
    printf("sign(13) = %d\n",sign(13));
    printf("sign(0) = %d\n",sign(0));
    printf("sign(-7) = %d\n",sign(-7));

}