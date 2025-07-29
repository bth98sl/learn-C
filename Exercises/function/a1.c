#include <stdio.h>

int power(int base, int exp );

int main(void)
{
    int base, exp ;
    printf("base: ");
    scanf("%d", &base);
    printf("exponent: ");
    scanf("%d", &exp );

    int result = power(base, exp);

    printf("Exponent of %d^%d: %d", base, exp , result);

    return 0;
}

int power(int base, int exp)
{
    /* int c = 1;

    for (c = 1; exp > 0; exp--)
    {
        c = c * base;
    }

    return c; */

    if (exp == 0)
    {
        return 1; // Base case
    }
    return base * power(base, exp - 1);

}
