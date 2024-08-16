/* Exercise 1-1. Run the ``hello, world'' program on
    your system. Experiment with leaving out parts of
    the program, to see what error messages you get. */

#include <stdio.h>

main()
{
    printf("Hello, C!\n"; /* Leaving out a closing parenthesis */
}

/* Error message from the compiler:
main.c:9:25: error: expected ')'
    9 |     printf("Hello, C!\n";
      |                         ^
main.c:9:11: note: to match this '('
    9 |     printf("Hello, C!\n";
      |           ^
1 error generated.
*/