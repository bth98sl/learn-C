/*  write a function: perfect nunber
    for example:    6  --> 1, 2, 3 = 6 --> perfect number
                    12 --> 1, 2, 3, 4, 6 = 16 -- > not perfect number         
*/

#include <stdio.h>
#include <stdbool.h>

bool perfect_number(int num);

int main()
{
    int n;

    printf("enter n: ");
    scanf("%d", &n);

    if (perfect_number(n) == true)
    {
        printf("%d is a perfect number ", n);
    }
    else
    {
        printf("%d is not a perfect number ", n);
    }
    return 0;
}

bool perfect_number(int num)
{
    int i;
    int sum = 0;

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}