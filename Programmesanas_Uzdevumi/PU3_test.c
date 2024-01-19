<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

void main()
{
    char i,j,x,izvele;

    int *arr1;
    arr1 = (int*)malloc(3*(__SIZEOF_INT__));

    //printf("Cienījamais lietotāj! Lūdzu ievadi 3 skaitļus, kuri atbilst datu tipam int!\n");
    //scanf("%d",arr1);
    //printf("%d",arr1[0]);

    printf("cienījamais lietotāj! Lūdzu izvēlies vai skaitļus kārtot augošā vai dilstošā secībā?\n[a/d]\n");
    scanf("%c",&izvele);
    printf("%c",izvele);

    arr1[0] = 5;
    arr1[4] = 6;
    arr1[8] = 2;
    
    // 3 skaitļu ievade masīvā
    /*for (char i=0 ; i<3 ; i++)
    {
    scanf("%d",&arr1[i*(__SIZEOF_INT__)]);
    } */


    // dilstoša
    if (izvele == 'd')
    {
        for (j=0;j<3;j++)
        {
            for (i=0 ; i<2 ; i++)
            {
                if (arr1[i*(__SIZEOF_INT__)]<arr1[(i+1)*(__SIZEOF_INT__)])
                {
                    x = arr1[i*(__SIZEOF_INT__)];
                    arr1[i*(__SIZEOF_INT__)] = arr1[(i+1)*(__SIZEOF_INT__)];
                    arr1[(i+1)*(__SIZEOF_INT__)] = x;
                    printf("%d,%d,%d\n",arr1[0],arr1[4],arr1[8]);
                }
            }
        }
    }


    // augoša
    if (izvele == 'a')
    {
        for (j=0;j<3;j++)
        {
            for (i=0 ; i<2 ; i++)
            {
                if (arr1[i*(__SIZEOF_INT__)]>arr1[(i+1)*(__SIZEOF_INT__)])
                {
                    x = arr1[i*(__SIZEOF_INT__)];
                    arr1[i*(__SIZEOF_INT__)] = arr1[(i+1)*(__SIZEOF_INT__)];
                    arr1[(i+1)*(__SIZEOF_INT__)] = x;
                    printf("%d,%d,%d\n",arr1[0],arr1[4],arr1[8]);
                }
            }
        }
    } 
    
    // masīva printēšana
    for (i=0 ; i<3 ; i++)
    {
        printf("beigas:%d\n",arr1[i*(__SIZEOF_INT__)]);
    }
    




=======
#include <stdio.h>
#include <stdlib.h>

void main()
{
    char i,j,x,izvele;

    int *arr1;
    arr1 = (int*)malloc(3*(__SIZEOF_INT__));

    //printf("Cienījamais lietotāj! Lūdzu ievadi 3 skaitļus, kuri atbilst datu tipam int!\n");
    //scanf("%d",arr1);
    //printf("%d",arr1[0]);

    printf("cienījamais lietotāj! Lūdzu izvēlies vai skaitļus kārtot augošā vai dilstošā secībā?\n[a/d]\n");
    scanf("%c",&izvele);
    printf("%c",izvele);

    arr1[0] = 5;
    arr1[4] = 6;
    arr1[8] = 2;
    
    // 3 skaitļu ievade masīvā
    /*for (char i=0 ; i<3 ; i++)
    {
    scanf("%d",&arr1[i*(__SIZEOF_INT__)]);
    } */


    // dilstoša
    if (izvele == 'd')
    {
        for (j=0;j<3;j++)
        {
            for (i=0 ; i<2 ; i++)
            {
                if (arr1[i*(__SIZEOF_INT__)]<arr1[(i+1)*(__SIZEOF_INT__)])
                {
                    x = arr1[i*(__SIZEOF_INT__)];
                    arr1[i*(__SIZEOF_INT__)] = arr1[(i+1)*(__SIZEOF_INT__)];
                    arr1[(i+1)*(__SIZEOF_INT__)] = x;
                    printf("%d,%d,%d\n",arr1[0],arr1[4],arr1[8]);
                }
            }
        }
    }


    // augoša
    if (izvele == 'a')
    {
        for (j=0;j<3;j++)
        {
            for (i=0 ; i<2 ; i++)
            {
                if (arr1[i*(__SIZEOF_INT__)]>arr1[(i+1)*(__SIZEOF_INT__)])
                {
                    x = arr1[i*(__SIZEOF_INT__)];
                    arr1[i*(__SIZEOF_INT__)] = arr1[(i+1)*(__SIZEOF_INT__)];
                    arr1[(i+1)*(__SIZEOF_INT__)] = x;
                    printf("%d,%d,%d\n",arr1[0],arr1[4],arr1[8]);
                }
            }
        }
    } 
    
    // masīva printēšana
    for (i=0 ; i<3 ; i++)
    {
        printf("beigas:%d\n",arr1[i*(__SIZEOF_INT__)]);
    }
    




>>>>>>> 4423152ce32d1fd1ad2df9887dbd508f6a2d4b7a
}