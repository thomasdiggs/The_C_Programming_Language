/* Given getchar and putchar, you can write a surprising amount of useful code without
knowing anything more about input and output. The simplest example is a program that
copies its input to its output one character at a time:

read a character
    while (charater is not end-of-file indicator)
        output the character just read
        read a character

Converting this into C gives: */

#include <stdio.h>

int main()
{
    int c;

    c = getchar();
    /* EOF is an integer defined in <stdio.h> */
    // On Mac or Linux, press control + D to send EOF
    // On Windows, press control + Z to send EOF
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }

    return 0;
}