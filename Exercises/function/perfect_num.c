/*  write a function: perfect nunber
    for example:    6  --> 1, 2, 3 = 6 --> perfect number
                    12 --> 1, 2, 3, 4, 6 = 16 -- > not perfect number         
    printf all perfect number < 1.000.000
*/

#include <stdio.h>
#include <stdbool.h>

bool perfect_number(int num);

int main()
{
    int n;

    printf("enter number: ");
    scanf("%d", &n);

    
    for (int i = 1; i < n; i++)
    {
        if (perfect_number(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}

bool perfect_number(int num)
{
    int i;
    int sum = 0;
    bool returnValue = false;
    
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        returnValue = true;
    }

    return returnValue;
}