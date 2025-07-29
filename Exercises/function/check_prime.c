/*  check whether a number is a prime number or not using the function. */

#include <stdio.h>
#include <stdbool.h>


bool prime(int n);

int main()
{
    int num;
    
    printf("enter number: ");
    scanf("%d", &num);

    if (prime(num))
    {
        printf("%d is a prime number", num);
    }
    else
    {
        printf("%d is not a prime number", num);
    }
    
    return 0;
}

bool prime(int n)
{
    int count = 0;
    int i = 2;
    bool value = true;

    printf("n = %d ", n);
    if (n <= 1)
    {
        value = false;
    }
    for (i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            value = false;
        }
    }
    return value;
}