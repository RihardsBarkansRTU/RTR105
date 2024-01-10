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


    long long int i=1;

    //char
    if (dt=='c')
    {
        printf("--char--\n");
        while (i<=a)
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
            i++;
            printf("then: r1=%d;  r2=%d;\n",cr1,cr2);
            
        }
        printf("\n%ld! = %d",a,cr1);
    }

    //int
    if (dt=='i')
    {
        printf("--int--\n");
        while (i<=a)
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
            i++;
            printf("then: r1=%d;  r2=%d;\n",ir1,ir2);
            
        }
        printf("\n%ld! = %d",a,ir1);
    }


    //long long int
    if (dt=='l')
    {
        printf("--long long int--\n");
        while (i<=a)
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
            i++;
            printf("then: r1=%ld;  r2=%ld;\n",lr1,lr2);
            
        }
        printf("\n%ld! = %ld",a,lr1);
    }
}