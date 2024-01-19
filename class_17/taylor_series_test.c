#include <stdio.h>
#include <math.h>
double x, y, yy, vertiba, qwe;
double k = 0;

double mans_arctan(double x)
{

    double a, s, a499;
    a = (double)1;
    s = a;

    printf("%Lf\n",a);
    printf("%Lf\n",s);

    while (k < 500)
    {
        k++;
        a = a * ((2 * k) * pow((2 * k - 1), 2) / (pow(k, 2) * 4 * (2 * k + 1)) * (pow(x, 2) / (1 + pow(x, 2))));
        s = s + a;
        printf("%.16Le\n", a);
    }
    s = s * (x / (pow(1 + pow(x, 2), 0.5)));
    a499 = a / ((2 * k) * pow((2 * k - 1), 2) / (pow(k, 2) * 4 * (2 * k + 1)) * (pow(x, 2) / (1 + pow(x, 2))));
    printf("a499: %.16Lf\n",a499);
    printf("a500: %.16Lf\n",a);
    printf("s499: %.16Lf\n",(s-a499));
    printf("s500: %.16Lf\n",s);

    printf("//Pēdējās vērtībās ir vienādas ar nulli, jo diemžēl msys2 long double == double, bet iekšā ubuntu kods strādā pareizi");

    return s;
}



int main(void)
{

    printf("Ievadi skaitli, es tevi lūdzu!\n");
    scanf("%Lf", &x);
    printf("%Lf",x);
    y = atan(x);
    yy = mans_arctan(x);
    printf("atan(%Lf)=%.14Lf\n", x, y);
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