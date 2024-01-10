#include <stdio.h>

void main()
{
    unsigned char dec;

    scanf("%d",&dec);
    
    if((dec>>7)&1==1)
    printf("1");
    else
    printf("0");
    if((dec>>6)&1==1)
    printf("1");
    else
    printf("0");
    if((dec>>5)&1==1)
    printf("1");
    else
    printf("0");
    if((dec>>4)&1==1)
    printf("1");
    else
    printf("0");
    if((dec>>3)&1==1)
    printf("1");
    else
    printf("0");
    if((dec>>2)&1==1)
    printf("1");
    else
    printf("0");
    if((dec>>1)&1==1)
    printf("1");
    else
    printf("0");
    if((dec)&1==1)
    printf("1");
    else
    printf("0");

}