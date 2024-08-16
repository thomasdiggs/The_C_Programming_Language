/* Exercise 1-2. Experiment to find out what happens when prints's argument
    string contains \c, where c is some character not listed above. */

#include <stdio.h>

main()
{
    printf("Hello, C!\g\n");
}

/* Error message from the compiler:
main.c:8:22: warning: unknown escape sequence '\g' [-Wunknown-escape-sequence]
    8 |     printf("Hello, C!\g\n");
      |                      ^~
1 warning generated.
*/