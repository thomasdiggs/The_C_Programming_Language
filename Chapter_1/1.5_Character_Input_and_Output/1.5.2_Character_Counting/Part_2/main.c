/* We will also use a for statement instead of a while,
    to illustrate another way to write the loop. */

#include <stdio.h>

int main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
    {
    }

    printf("%.0f\n", nc); // %f is used for both double and float
}