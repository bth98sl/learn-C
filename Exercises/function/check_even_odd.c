/* check number is even or not */

#include <stdio.h>
#include <stdbool.h>

bool even_or_odd(int num);

int main()
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if (even_or_odd(num))
    {
        printf("%d is even", num);
    }
    else
    {
        printf("%d is odd", num);
    }
    
    return 0;
}

bool even_or_odd(int num)
{
    bool value = false;
    
    if (num % 2 == 0)
    {
        value = true;
    }
    return value;
}