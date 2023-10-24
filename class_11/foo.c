#include "foo.h"    /* Always include the header file that declares something
                     * in the C file that defines it. This makes sure that the
                     * declaration and definition are always in-sync.  Put this
                     * header first in foo.c to ensure the header is self-contained.
                     */
#include <stdio.h>                       

/**
 * This is the function definition.
 * It is the actual body of the function which was declared elsewhere.
 */
void foo(int id, char *name)
{

printf("id atrašanās vieta atmiņā: %p\n",&id);
printf("id vērtība: %d\n",id);
printf("name atrašanās vieta atmiņā: %p\n",name);
printf("name vērtība: %s\n",name);

printf("foo(%d, \"%s\");\n", id, name);
    /* This will print how foo was called to stderr - standard error.
     * e.g., foo(42, "Hi!") will print `foo(42, "Hi!")`
     */
name = "pēc funkcijas";

}
