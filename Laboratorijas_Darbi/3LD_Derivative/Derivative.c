#include <stdio.h>
#include <math.h>

void main ()
{
    float x,b,delta_x;
    x = 0;
    b = 4;
    delta_x = 0.01;

    while (x < b)
    {
        printf("sin(x) = [%f],\tsin'(x) = [%f]\n",sin(x),sin(x+delta_x)-sin(x));
        x += delta_x;
    }

}