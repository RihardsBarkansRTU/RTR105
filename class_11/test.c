#include <stdio.h>
 int main(void)
{

char name[] = "abc";

printf("1.%s\n",name);
printf("2.%d\n",name[0]);

name[0] = 103;

printf("3.%s\n",name);
printf("4.%d\n",name[0]);

return 0;
}
