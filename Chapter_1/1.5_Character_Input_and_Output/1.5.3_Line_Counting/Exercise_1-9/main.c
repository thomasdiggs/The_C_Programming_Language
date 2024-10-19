/* Exercise 1-9. Write a program to copy its input to its output,
    replacing each string of one or more blanks by a single blank. */

#include <stdio.h>

int main()
{
    int c;
    int b = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (b == 0)
            {
                putchar(c);
                b = 1;
            }
        }
        else
        {
            putchar(c);
            b = 0;
        }
    }

    return 0;
}