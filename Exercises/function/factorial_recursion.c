/*  Write a recursive function to calculate the factorial of a given number n
    Example: factorial(5) → 120
*/

#include <stdio.h>

int factorial(int n);

int main(void)
{

    printf("%d", factorial(5));

    return 0;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n-1);
}
