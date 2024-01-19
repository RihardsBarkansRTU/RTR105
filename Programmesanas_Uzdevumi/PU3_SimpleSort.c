<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

void main()
{
    char a,b,c,x,sort;
    char* arr1 = (char*)malloc(3);

    printf("Visaugstāk godājamais, lietotāj! Es tevi lūdzu, ievadīt 3 burtus pēc katra burta nospiežot taustiņu [enter]\n");
    scanf(" %c %c %c",&a,&b,&c);

    //kārtošanas veids | atļauj ievadīt tikai 'y' vai 'n'
    while((sort!='y')&&(sort!='n'))
    {
        printf("Lūdzu izvēlies kārtošanas metodi:\n[y]-alfabētiska(a-z)\n[n]-omegapsicāla(z-a)\n");
        scanf(" %c",&sort);
        printf(" %c\n",sort);
    }

    //case sensitive
    if((a>=65)&&(a<=90))
    a=a+32;
    if((b>=65)&&(b<=90))
    b=b+32;
    if((c>=65)&&(c<=90))
    c=c+32;

    arr1[0]=a;
    arr1[1]=b;
    arr1[2]=c;

    printf("%c%c%c\n",a,b,c);

    //kārto a-z
    if(sort=='y')
    {
        printf("Kārtošanas metode:(a-z)\n");
        for(char j=0;j<2;j++)
        {
            for(char i=0;i<(2-j);i++)
            {
                if(arr1[i]>arr1[i+1])
                {
                    x=arr1[i];
                    arr1[i]=arr1[i+1];
                    arr1[i+1]=x;
                }
                //printf("[%c%c%c]\n",arr1[0],arr1[1],arr1[2]);
            }
        }
    }

    if(sort=='n')
    {
        //kārto z-a
        printf("Kārtošanas metode:(z-a)\n");
        for(char j=0;j<2;j++)
        {
            for(char i=0;i<(2-j);i++)
            {
                if(arr1[i]<arr1[i+1])
                {
                    x=arr1[i];
                    arr1[i]=arr1[i+1];
                    arr1[i+1]=x;
                }
                //printf("[%c%c%c]\n",arr1[0],arr1[1],arr1[2]);
            }
        }
    }

    //printē masīvu
    printf("Lūdzu: ");
    for(char i=0;i<3;i++)
    {
        printf("%c",arr1[i]);
    }
    printf("\n");

    free(arr1);
=======
#include <stdio.h>
#include <stdlib.h>

void main()
{
    char a,b,c,x,sort;
    char* arr1 = (char*)malloc(3);

    printf("Visaugstāk godājamais, lietotāj! Es tevi lūdzu, ievadīt 3 burtus pēc katra burta nospiežot taustiņu [enter]\n");
    scanf(" %c %c %c",&a,&b,&c);

    //kārtošanas veids | atļauj ievadīt tikai 'y' vai 'n'
    while((sort!='y')&&(sort!='n'))
    {
        printf("Lūdzu izvēlies kārtošanas metodi:\n[y]-alfabētiska(a-z)\n[n]-omegapsicāla(z-a)\n");
        scanf(" %c",&sort);
        printf(" %c\n",sort);
    }

    //case sensitive
    if((a>=65)&&(a<=90))
    a=a+32;
    if((b>=65)&&(b<=90))
    b=b+32;
    if((c>=65)&&(c<=90))
    c=c+32;

    arr1[0]=a;
    arr1[1]=b;
    arr1[2]=c;

    printf("%c%c%c\n",a,b,c);

    //kārto a-z
    if(sort=='y')
    {
        printf("Kārtošanas metode:(a-z)\n");
        for(char j=0;j<2;j++)
        {
            for(char i=0;i<(2-j);i++)
            {
                if(arr1[i]>arr1[i+1])
                {
                    x=arr1[i];
                    arr1[i]=arr1[i+1];
                    arr1[i+1]=x;
                }
                printf("[%c%c%c]\n",arr1[0],arr1[1],arr1[2]);
            }
        }
    }

    if(sort=='n')
    {
        //kārto z-a
        printf("Kārtošanas metode:(z-a)\n");
        for(char j=0;j<2;j++)
        {
            for(char i=0;i<(2-j);i++)
            {
                if(arr1[i]<arr1[i+1])
                {
                    x=arr1[i];
                    arr1[i]=arr1[i+1];
                    arr1[i+1]=x;
                }
                printf("[%c%c%c]\n",arr1[0],arr1[1],arr1[2]);
            }
        }
    }

    //printē masīvu
    printf("Lūdzu: ");
    for(char i=0;i<3;i++)
    {
        printf("%c",arr1[i]);
    }
    printf("\n");

    free(arr1);
>>>>>>> 4423152ce32d1fd1ad2df9887dbd508f6a2d4b7a
}