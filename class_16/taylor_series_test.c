#include<stdio.h>
#include<math.h>
double len,x,y,yy;
double k=1;

double mans_arctan(double vert){
    
    double a,s;
    a=(1/(4*(2*k+1)))*(pow(x,2)/(1+pow(vert,2)));
    s=a;
    
    while (k<10)
    {
    k++;
    a=a*((2*k*(2*k-1))/(pow(k,2)*4*(2*k+1)))*(pow(vert,2)/(1+pow(vert,2)));
    s=s+a;
    }
    s=s*(vert/pow((1+pow(vert,2)),0.5));
    printf("%.2f",a);
    printf("%.2f",s);
    
    return s;
}
int main(void){

    x=3;
    y=atan(x);
    yy=mans_arctan(x);
    printf("tang(%.2f)=%.2f\n",x,y);
    printf("mans_arctan=(%.2f)=%.2f\n",x,yy);
    return 0;
}