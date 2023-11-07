#include <stdio.h>
#include <math.h>
void main()
{
double x=2.05,y,a,s;
y = sin(x);
printf("y=sin(%.2f)=%.2f\n",x,y);
s = a;
printf("%.2f\t%8.2f\t%8.2f\n",x,a,s);

a = pow(-1,0)*pow(x,2*0+1)/(1.);
s = a; //s = a0;
printf("%.2f\t%8.2f\t%8.2f\n",x,a,s);

a = a*(-1) *x*x/(2*3);
s = s + a; // s = s + a1;
printf("%.2f\t%8.2f\t%8.2f\n",x,a,s);

a = a*(-1)*x*x/(4*5);
s = s + a; //s = s + a2;
printf("%.2f\t%8.2f\t%8.2f\n",x,a,s);

a = a*(-1)*x*x/(6*7);
s = s + a; //s = s + a3;
printf("%.2f\t%8.2f\t%8.2f\n",x,a,s);
}
