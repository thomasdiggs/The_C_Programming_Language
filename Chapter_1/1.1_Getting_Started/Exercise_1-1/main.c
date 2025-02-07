/* Exercise 1-1. Run the ``hello, world'' program on
 * your system. Experiment with leaving out parts of
 * the program, to see what error messages you get.
 */

#include <stdio.h>

int main()
{
    printf("Hello, C!\n";

	return 0;
}

/* Error message from the compiler:
 * main.c:10:25: error: expected ')'
 *    10 |     printf("Hello, C!\n";
 *       |                         ^
 * main.c:10:11: note: to match this '('
 *    10 |     printf("Hello, C!\n";
 *       |           ^
 * 1 error generated.
 */
