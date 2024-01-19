int sign(float a)
{
    char s;

    if (a>0) s=1;
    if (a<0) s=-1;
    if (a==0) s=0;

    return s;
}