/* we have used integer arithmetic, the Celsius
    temperatures are not very accurate; for instance,
    0F is actually about -17.8C, not -17. To get more
    accurate answers, we should use floating-point
    arithmetic instead of integer. */
#include <stdio.h>

main()
{
    float fahr, celsius;
    float lower, upper, step;

    /* int data types are converted to floats here as floats are more precise */
    lower = 0;  /* lower limit of temperature scale */
    upper = 300;  /* upper limit */
    step = 20;  /* step size */

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32.0);
        /* The printf conversion specification %3.0f says
            that a floating-point number (here fahr) is to
            be printed at least three characters wide, with
            no decimal point and no fraction digits. %6.1f
            describes another number (celsius) that is to
            be printed at least six characters wide, with 1
            digit after the decimal point. */
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}