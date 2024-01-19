<<<<<<< HEAD
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
=======
#include <stdio.h>
#include <stdlib.h>

void main()
{
    char cr1=1;
    char cr2=1;

    int ir1=1;
    int ir2=1;

    long long int lr1=1;
    long long int lr2=1;
    
    printf("--Faktoriāla aprēķināšana--\n");
    printf("Cienījamais lietotāj, lūdzu ievadiet skaitli!\n");
    long long int a;
    scanf("%ld",&a);
    printf("Ievdītais skaitlis: %ld\n",a);

    
    
    //datu tipa izvēle
    char dt;
    printf("Lūdzu ievadiet datu tipam atbilstošo burtu, pēc tam nospiežot taustiņu [enter]\n[c]-char\n[i]-int\n[l]-long long int\n");
    scanf(" %c",&dt);
    printf("datu tipa ievade = %c\n",dt);

    //char
    if (dt=='c')
    {
        printf("--char--\n");
        for (long long int i=1;i<=a;i++)
        {
            cr1=cr1*i;
            printf("if_true ( r1=%d >= r2=%d )\n",cr1,cr2);
            if(cr1>=cr2)
            {
                cr2=cr2*i;
            }
            else
            {
                printf("--stack overflow--\n");
                printf("Ievadītam skaitlim ar izvēlētu datu tipu pareizi aprēķināt faktoriālu nav iespējams\n");
                printf("(r1=%d,r2=%d)\n",cr1,cr2);
                exit(1);
            }
            printf("then: r1=%d;  r2=%d;\n",cr1,cr2);
            
        }
        printf("\n%ld! = %d",a,cr1);
    }

    //int
    if (dt=='i')
    {
        printf("--int--\n");
        for (long long int i=1;i<=a;i++)
        {
            ir1=ir1*i;
            printf("if_true ( r1=%d >= r2=%d )\n",ir1,ir2);
            if(ir1>=ir2)
            {
                ir2=ir2*i;
            }
            else
            {
                printf("--stack overflow--\n");
                printf("Ievadītam skaitlim ar izvēlētu datu tipu pareizi aprēķināt faktoriālu nav iespējams\n");
                printf("%d%d\n",ir1,ir2);
                exit(2);
            }

            printf("then: r1=%d;  r2=%d;\n",ir1,ir2);
            
        }
        printf("\n%ld! = %d",a,ir1);
    }


    //long long int
    if (dt=='l')
    {
        printf("--long long int--\n");
        for (long long int i=1;i<=a;i++)
        {
            lr1=lr1*i;
            printf("if_true ( r1=%ld >= r2=%ld )\n",lr1,lr2);
            if(lr1>=lr2)
            {
                lr2=lr2*i;
            }
            else
            {
                printf("--stack overflow--\n");
                printf("Ievadītam skaitlim ar izvēlētu datu tipu pareizi aprēķināt faktoriālu nav iespējams\n");
                printf("%ld%ld\n",lr1,lr2);
                exit(3);
            }
            printf("then: r1=%ld;  r2=%ld;\n",lr1,lr2);
            
        }
        printf("\n%ld! = %ld",a,lr1);
    }
>>>>>>> 4423152ce32d1fd1ad2df9887dbd508f6a2d4b7a
}