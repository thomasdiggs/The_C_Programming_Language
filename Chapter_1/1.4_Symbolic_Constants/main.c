/* It's bad practice to bury
    ``magic numbers'' like 300 and 20 in a program; they convey little information to someone
    who might have to read the program later, and they are hard to change in a systematic way. */

#include <stdio.h>

/* A #define line defines a symbolic name or symbolic constant to be a particular string of characters */

#define LOWER   0   /* lower limit of table */
#define UPPER   300 /* upper limit */
#define STEP    20  /* step size */

/* print Fahrenheit-Celsius table */

int main(void)
{
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}