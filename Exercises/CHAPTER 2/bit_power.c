/*  check if an int is power of two*/

#include <stdio.h>

int is_power_of_two(int x);
int main(void)
{
    int x = 16;

    if (is_power_of_two(x) == 0)
    {
        printf("%d is power of two\n", x);
    }
    else
    {
        printf("%d is not power of two\n", x);
    }

    return 0;
}
int is_power_of_two(int x)
{
    return (x > 0 && (x & (x - 1)) == 0);
}