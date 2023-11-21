#include <stdio.h>
#include <math.h>
long double x, y, yy, vertiba, qwe;
long double k = 0;

long double mans_arctan(double x)
{

    long double a, s, ieprieksejais;
    a = 1;
    s = a;

    while (k < 500)
    {
        k++;
        a = a * ((2 * k) * pow((2 * k - 1), 2) / (pow(k, 2) * 4 * (2 * k + 1)) * (pow(x, 2) / (1 + pow(x, 2))));
        s = s + a;
        printf("%.16Le\n", a);
    }
    s = s * (x / (pow(1 + pow(x, 2), 0.5)));
    ieprieksejais = a / ((2 * k) * pow((2 * k - 1), 2) / (pow(k, 2) * 4 * (2 * k + 1)) * (pow(x, 2) / (1 + pow(x, 2))));
    printf("Ieprieksejais: %.2Le\n",ieprieksejais);
    printf("Pedejais: %.2Le\n",a);
    return s;
}



int main(void)
{

    printf("Ievadi skaitli, es tevi lūdzu!\n");
    scanf("%Lf", &x);
    y = atan(x);
    yy = mans_arctan(x);
    printf("tang(%Lf)=%.14Lf\n", x, y);
    printf("mans_arctan=(%Lf)=%Lf\n", x, yy);

    printf("\t\t");
    printf("\t  500\n");
    printf("\t\t");
    printf("\t--------\n");
    printf("\t\t");
    printf("\t \\\n");
    printf("\t      x");
    printf("\t\t  \\");
    printf("\t   (2*k)!        ");
    printf("    /  x^2  \\^k\n");
    printf("arctan(x)~=  ---------- *");
    printf("  )");
    printf("\t-----------------");
    printf(" * ( -------)");
    printf(", kur x pieder R\n");
    printf("\t     sqr(1+x^2)");
    printf("\t  /");
    printf("\t(k!)^2*4^k*(2k+1)");
    printf("    \\ 1+x^2 /\n");
    printf("\t\t");
    printf("\t /\n");
    printf("\t\t");
    printf("\t--------\n");
    printf("\t\t");
    printf("\t  k=0\n");
    printf("\nrekurences reizinātājs:\t");
    printf("(2k)*(2k-1)^2\n");
    printf("\t\t\t");
    printf("--------------\n");
    printf("\t\t\t");
    printf(" k^2*4*(2k+1)\n");




    return 0;
}