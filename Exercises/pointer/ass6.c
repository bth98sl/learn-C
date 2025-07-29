/*  Write a program in C to find the factorial of a given number using pointers. */

#include <stdio.h>

void factorial(int n, int *fac);

int main(void)
{
    int n;
    int fac;

    printf("input a number: ");
    scanf("%d", &n);

    factorial(n, &fac);
    printf("the factorial of %d is: %d ", n, fac);

    return 0;
}

void factorial(int n, int *fac)
{
    int i;
    *fac = 1;

    for (i = 1; i <= n; i++)
    {
        *fac = *fac * i; 
    }
}