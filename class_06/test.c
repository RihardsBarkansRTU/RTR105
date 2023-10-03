#include <stdio.h>
int main()
{

printf("Characters_:%c,%c\n",'a',66);
printf("Decimal:%d,%ld\n",1999,1L);
printf("Blanks-\ttab:%5d\n",555);
printf("Zeros-\ttab:%05d\n",555);
printf("Dec/Oct:%d/%d\n",555,0555);
printf("256 (dec,hex,oct):%d,%x,%o,%#x,%#o\n",256,256,256,256,256);
printf("floats: %4.2f %.e %E \n", 3.1416, 3.1416, 3.1416);
printf ("Width (5,10): %*d \n", 5, 10);
printf ("%s \n", "string");

return 0;
}
