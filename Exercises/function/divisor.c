/*  write a function that receives an integer num
    the function should calculate and return its SUM OF DIVISORS 
    example:
    - 4  --> 1,2,4 = 7
    - 6  --> 1,2,3,6 = 12
    - 15 --> 1,3,5,15 = 24
*/

#include <stdio.h>
#include <stdbool.h>

bool divisor(int num, int i);
int sum_of_divisor(int num);

int main()
{
    int n;
    int i = 1;

    printf("enter number: ");
    scanf("%d", &n);

    printf("Divisor of %d: ", n);

    while (i <= n)
    {
        if (divisor(n, i))
        {
            printf("%d ", i);
        }
        i++;
    }

    int sum = sum_of_divisor(n);
    printf("\nSum of divisor: %d ", sum);

    return 0;
}

bool divisor(int num, int i)
{
    bool value = false;

    if (num % i == 0)
    {
        value = true;
    }
    return value;
}

int sum_of_divisor(int num)
{
    int i;
    int sum = 0;

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}