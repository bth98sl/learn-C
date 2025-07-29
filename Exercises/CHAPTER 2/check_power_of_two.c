/*  check if an int is power of two*/

#include <stdio.h>

int main(void)
{
    int x = 16;
    int power;

    while (x != 0)
    {
        if (x % 2 == 1)
        {
            printf("%2d is power of two\n", x);
        }
        else
        {
            printf("%2d is not power of two\n", x);
        }
        x = x / 2;
    }

    return 0;
}