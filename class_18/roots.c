#include<stdio.h>
#include<math.h>

int sign(float x)
{
    int signx = 1;
    if (x > 0)
    signx = 1;
    else if (x == 0)
    signx = 0;
    else
    signx = -1;
    return signx;
}

void main()
{
    float a,b,delta_x,o;
    
    a = -9;
    b = 13;
    delta_x = 1;

    //salīdzināšana
    /*
    if ((sign(atan(a)) * sign(atan(b))) > 0)
    printf("sakņu signxdiapozonā nav, vai ir pāra sakņu skaits\n");
    else if ((sign(atan(a)) * sign(atan(b))) == 0)
    printf("a vai b ir sakne\n");
    //
    else
    {
        printf("starp a un b ir saknes. Sākam meklēt\n");
        //salīdzina a ar b?
        //kods
    } */

    o = ((b+a)/2);
    if (((a*o)<0)||((o*b)<0))
    {
        for(int i = 0 ; i < 4 ; i++)
        {
        printf("a = %.2e, o = %.2e, b = %.2e\n",a,o,b);
        printf("%d, %d, %d\n",sign(a),sign(o),sign(b));
        o = ((b+a)/2);
            if ((a*b)<0)
            {
                b = o;
            }
            if ((o*b)<0)
            {
                a = o;
            }
        
        }
        printf("a = %.2e, o = %.2e, b = %.2e\n",a,o,b);
        printf("%d, %d, %d\n",sign(a),sign(o),sign(b));
    }
    else
    printf("diapozonā sakņu nav, vai ir pāra sakņu skaits\n");
}