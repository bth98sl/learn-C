/*  write a function: check Armstrong
    for example:    371 = (3 * 3 * 3) + (7 * 7 * 7) + (1 * 1 * 1) 
                        = 371 --> armstrong number
*/

#include <stdio.h>
#include <stdbool.h>

bool armstrong_number(int num);

int main()
{
    int n;

    printf("enter number: ");
    scanf("%d", &n);

    if (armstrong_number(n))
    {
        printf("%d is a armstrong number", n);
    }
    else
    {
        printf("%d is not a armstrong number", n);
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