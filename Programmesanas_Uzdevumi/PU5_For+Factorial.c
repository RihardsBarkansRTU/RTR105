#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    
    unsigned char cr,crr,dt;
    cr = 1;
    crr = 1;
    unsigned int i,ir,irr,a;
    ir=1;
    irr=1;
    i=1;
    unsigned long long int lr,lrr;
    lr = 1;
    lrr = 1;

    printf("--Faktoriāla aprēķināšana--\n");
    printf("Lūdzu ievadiet skaitli, pēc tam nospiežot taustiņu [enter]\n");
    scanf("%d",&a);
    printf("Ievadītais skaitlis ir - %d\n",a);

    while((dt!='c')&&(dt!='i')&&(dt!='l')&&(dt!='x'))
    {
    printf("Lūdzu izvēlieties datu tipu\n");
    printf("[c] - char\n[i] - int\n[l] - long long int\n\n[x] - exit\n");
    scanf(" %c",&dt);
    //printf("datu tips - %c",dt);
    }
    
    if((dt!='c')&&(dt!='i')&&(dt!='l')) exit(0);

    //char
    if (dt == 'c')
    {
        for (i=1;i<=a;i++)
        {
            crr=cr*i;
            if ((crr/cr)==i)
            {

                //printf("i = %d | cr*i = %d | cr = %d | cr/cr = %d\n",i,cr*i,cr,(cr*i)/cr);
                
                cr=cr*i;
            }
            else
            {
                printf("--Ievadītam skaitlim ar izvēlētu datu tipu pareizi aprēķināt faktoriālu nav iespējams--\n");
                exit(1);
            }
        }
        printf("\n%d! = [%d]\n",a,cr);
    }
    
    //int
    if (dt == 'i')
    {
        for (i=1;i<=a;i++)
        {
            irr=ir*i;
            if (((ir*i)/ir)==i)
            {

                //printf("i = %d | cr*i = %d | cr = %d | cr/cr = %d\n",i,ir*i,ir,(ir*i)/ir);
                
                ir=ir*i;
            }
            else
            {
                printf("--Ievadītam skaitlim ar izvēlētu datu tipu pareizi aprēķināt faktoriālu nav iespējams--\n");
                exit(1);
            }
        }
        printf("\n%d! = [%d]\n",a,ir);
    }
    

    //long long int
    if (dt == 'l')
    {
        for(i=1;i<=a;i++)
        {
            lrr=lr*i;
            if ((lrr/lr)==i)
            {

                //printf("i = %lld | cr*i = %lld | cr = %lld | cr/cr = %lld\n",i,lr*i,lr,(lr*i)/lr);
                
                lr=lr*i;
            }
            else
            {
                printf("--Ievadītam skaitlim ar izvēlētu datu tipu pareizi aprēķināt faktoriālu nav iespējams--\n");
                exit(1);
            }
        }
        printf("\n%lld! = [%lld]\n",a,lr);
    }
}