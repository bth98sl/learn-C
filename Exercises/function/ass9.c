#include <stdio.h>
#include <stdbool.h>

bool armstrong_number(int num);
bool perfect_number(int num);

int main()
{
    int n;

    printf("enter n: ");
    scanf("%d", &n);

    if(armstrong_number(n))
    {
        printf("%d is a armstrong number\n", n);
    }
    else
    {
        printf("%d is a not armstrong number\n", n);
    }
    
    if (perfect_number(n))
    {
        printf("%d is a perfect number\n", n);
    }
    else
    {

        printf("%d is not a perfect number", n);
    }
    
    return 0;
}

bool armstrong_number(int num)
{
    int i = 1;
    int current_num;
    int sum = 0;
    int number = num;
    bool value = false;

    for (i = 1; i <= num; i++)
    {
        current_num = num % 10;
        num = num / 10;
        sum += current_num*current_num*current_num;
    }
    if (sum == number)
    {
        value = true;
    }
    return value;
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