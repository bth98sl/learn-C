/*  write a program to determine the ranges of char, short, int, long variable, both singed and unsigned
 *  compute:
 */

#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("minimum value of int: %d\n", INT_MIN);
    printf("maximum value of int: %d\n", INT_MAX);
    printf("maximum value of unsigned int: %u\n", UINT_MAX);

    printf("----------------------------------\n");

    printf("minimum value of signed char: %d\n", SCHAR_MIN);
    printf("maximum value of signed char: %d\n", SCHAR_MAX);
    printf("maximum value of unsigned char: %u\n", UCHAR_MAX);

    printf("----------------------------------\n");

    printf("minimum value of short: %d\n", SHRT_MIN);
    printf("maximum value of short: %d\n", SHRT_MAX);
    printf("maximum value of unsigned short: %u\n", USHRT_MAX);

    printf("----------------------------------\n");

    printf("minimum value of long: %d\n", LONG_MIN);
    printf("maximum value of long: %d\n", LONG_MAX);
    printf("maximum value of unsigned long: %u\n", ULONG_MAX);



    return 0;
}