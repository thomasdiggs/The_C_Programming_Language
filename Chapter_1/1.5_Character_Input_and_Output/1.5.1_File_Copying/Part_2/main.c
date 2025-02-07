/* If the assignment of a character to c is put inside the test
 * part of a while loop, the copy program can be written this way:
 */

#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);

    return 0;
}

/* The parentheses around the assignment, within the condition are necessary. The precedence
 * of != is higher than that of =, which means that in the absence of parentheses the relational
 * test != would be done before the assignment =.
 */
