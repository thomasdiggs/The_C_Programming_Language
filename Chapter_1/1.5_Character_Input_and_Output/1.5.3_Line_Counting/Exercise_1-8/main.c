/* Exercise 1-8. Write a program to count blanks, tabs, and newlines. */

#include <stdio.h>

int main()
{
    int c;
    int b = 0;
    int t = 0;
    int nl = 0;

    while((c = getchar()) != EOF)
    {
        if(c == ' ')
        {
            ++b;
        }
        else if(c == '\t')
        {
            ++t;
        }
        else if(c == '\n')
        {
            ++nl;
        }
    }

    printf("blanks: %d\ntabs: %d\nnewlines:%d\n", b, t, nl);

    return 0;
}