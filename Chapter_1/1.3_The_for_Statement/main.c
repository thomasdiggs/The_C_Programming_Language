#include <stdio.h>

/* print Fahrenheit-Celsius table */
int main()
{
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

	return 0;
}

/* The choice between while and for is arbitrary, based on which
 * seems clearer. The for is usually appropriate for loops in
 * which the initialization and increment are single statements
 * and logically related, since it is more compact than while
 * and it keeps the loop control statements together in one place.
 */
