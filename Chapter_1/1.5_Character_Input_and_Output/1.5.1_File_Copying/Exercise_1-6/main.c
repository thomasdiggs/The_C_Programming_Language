/* Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1. */

#include <stdio.h>

int main()
{
    printf("\n%d\n", getchar() != EOF);

    return 0;
}