#include<stdio.h>
// vienas rindas komentārs
/* <- komentara bloka sākums
...
...
komentāra bloka beigas -> */

int main()
{
printf("Hello, world!\n");	// "\n" - kursora pārcelšana jaunā rindā
printf("\a");
return 0;			// analoģija (echo -e Hello\n)
}				// "\a" darbības simbols - skaņa
