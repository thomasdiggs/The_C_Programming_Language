/* The next program counts characters; it is similar to the copy program.
 */

#include <stdio.h>

int main()
{
    long nc;

    nc = 0;
    
    while (getchar() != EOF)
    {
        ++nc;
    }

    /* Return line (Enter) counts as a character */

    printf("%ld\n", nc);

    return 0;
}
