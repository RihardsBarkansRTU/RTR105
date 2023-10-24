#include "foo.h"
#include <stdio.h>

int main(void)
{

int id_main = 42;
printf("\nid_main atrašanās vieta atmiņā: %p\n",&id_main);
printf("id_main vērtība pirms foo funkcijas izpildes: %d\n",id_main);

char *name_main = "mans teksts";
printf("name_main atrašanās vieta atmiņā: %p\n",name_main);
printf("name_main vērtība pirms foo funkcijas izpildes: %s\n\n",name_main);

foo(id_main, name_main);

printf("\nid_main vērtība pēc foo funkcijas izpildes: %d\n",id_main);
printf("id_name vērtība pēc foo funkcijas izpildes: %d\n",id_main);

return 0;
}
