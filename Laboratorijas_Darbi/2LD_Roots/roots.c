#include "sign.h"
/*       ^^^^^^^
es izvēlējos reizinājājus pārveidot par [-1 ; 0 ; 1], jo lielos diapozonos
overflow dēļ 2 negatīvu skaitļu reizinājumā var iznākt negatīvs skaitlis
piemēram: (-2'000'000'000) * (-2) = (-294'967'296)
ciklometriskajām funkcijām nepalīdz, bet tas palīdz kodu vieglāk pārveidot
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void main() 
{
    float a,b,o,c,delta_x,sk1,sk2;
    
    //Ievads un x koorinātu ievade
    printf("--Sakņu meklētājs--\n");
    printf("Lūdzu ievadīt intervāla robežas \"x\" koordinātas, pēc katras ievadītās nopsiežot taustiņu [enter]\n(secība nav svarīga)\n");
    scanf("%f%f",&sk1,&sk2);

    //Nomaina pēdējo ievadīto, ja koordinātas sakrīt
    while (sk1==sk2)
    {
        printf("intervāla robežas nedrīkst būt vienādas. Lūdzu ievadiet citu skaitli\n");
        scanf("%f",&sk2);
    }

    //"a" saglabā kreiso robežu, un "b" labo
    if (sk1<sk2)
    {
        a = sk1;
        b = sk2;
    }
    else
    {
        a = sk2;
        b = sk1;
    }

    printf("Lūdzu ievadiet nobīdi C:\n");
    scanf("%f",&c);

    printf("Lūdzu ievadiet vēlamo precizitāti:\n");
    scanf("%f",&delta_x);

    //pārbauda precizitātes platumu
    while (delta_x>(b-a))
    {
        printf("Precizitāte ir plašāka par meklēšanas intervālu. Lūdzu ivēlieties šaurāku precizitāti\n");
        scanf("%f",&delta_x);
    }

    //Pārbauda vai ievadītajā koorinātā ir sakne
    if((sign(sin(a)+c)*sign(sin(b)+c))==0)
    {
        printf("sakne atrodas uz intervāla robežas\n");
        if (sin(a)+c == 0) printf("sakne atrodas koordinātā x = [%f]\n",a);
        if (sin(b)+c == 0) printf("sakne atrodas koordinātā x = [%f]\n",b);
        exit(0); 
    }

    if((sign(sin(a)+c)*sign(sin(b)+c))>0)
    {
        printf("Dotajā intervālā sakņu nav, vai arī ir pāru sakņu skaits. Lūdzu mēģiniet vēlreiz citā inetvālā\n");
        exit(0);
    }

    if((sign(sin(a)+c)*sign(sin(b)+c))<=0)
    {
        printf("Intervālā ir sakne\n");
        while ((b-a)>delta_x)
        {
            o = ((a+b)/2.);
            //Pārbauda vai ievadītajā koorinātā ir sakne
            if((sin(a)+c==0)||(sin(o)+c==0)||(sin(b)+c==0))
            {
                if (sin(a)+c == 0) printf("sakne atrodas koordinātā x = [%f]\n",a);
                if (sin(o)+c == 0) printf("sakne atrodas koordinātā x = [%f]\n",o);
                if (sin(b)+c == 0) printf("sakne atrodas koordinātā x = [%f]\n",b);
                exit(0); 
            }
            if ((sign(sin(a)+c)*sign(sin(o)+c)) < 0)
            {
                b = o;
                o = ((a+b)/2.);
                //printf("[ %f | %f | %f ]\n",a,o,b);
            }
            if ((sign(sin(o)+c)*sign(sin(b)+c)) < 0)
            {
                a = o;
                o = ((a+b)/2.);
                //printf("[ %f | %f | %f ]\n",a,o,b);
            }
        }
        //printf("(%f < %f)\n",(b-a),delta_x);
        printf("Sakne atrodas starp %f un %f\n",o-delta_x/2.,o+delta_x/2.);
    }
}