/*  has parameters, has return value    */

#include <stdio.h>

float temperature(float fah);

int main(void)
{
    float fah = 0;
    for (fah = 0; fah <= 300; fah += 20)
    {
        printf("%3.f %6.1f\n", fah, temperature(fah));
    }

    return 0;
}

float temperature(float fah)
{
    // float cel;

    // cel = (5.0/9.0) * (fah - 32.0);

    // return cel;

    return ((5.0/9.0) * (fah - 32.0));
}