/* 1.2 Variables and Arithmetic Expressions
 *
 * The reason for multiplying by 5 and dividing
 * by 9 instead of just multiplying by 5/9 is
 * that in C, as in many other languages,
 * integer division truncates: any fractional
 * part is discarded. Since 5 and 9 are integers.
 * 5/9 would be truncated to zero and so all the
 * Celsius temperatures would be reported as zero.
 */

#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;  /* lower limit of temperature scale */
    upper = 300;  /* upper limit */
    step = 20;  /* step size */

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        /* %d specifies an integer argument */
        /* printf("%d\t%d\n", fahr, celsius); */
        /* %3d specifies a minimum field width of 3,
		 * and %6d specifies a field width of 6 */
        printf("%3d %6d\n", fahr, celsius);
        fahr = fahr + step;
    }

	return 0;
}
