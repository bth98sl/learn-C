/* factorial (num) = 1*2*3 *.. *n */

#include <stdio.h>

int factorial(int num);

int main()
{
    int num;
    int fac;
    printf("Enter number: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        return -1;
    }
    
    fac = factorial(num);
    printf("Factorial(%d): %d", num, fac);

    return 0;
}

int factorial(int num)
{
    int i;
    int fac = 1;
    
    for (i = 1; i <= num; i++)
    {
        fac = fac * i;
    }
    
    return fac;
}
