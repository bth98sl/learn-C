/*  write a function that gets some "num" ( of an interger type), and a "digit"
    the function should:
        1. print the total amount of ditgits in num which are less than "digit"
        2. return average of thoes digits (that are less than "digit")
    example: "num" = 13572 "digit" = 3 => print(2)  return 1.5 
*/

#include <stdio.h>

float total_amount(int num, int digit);

int main()
{
    int num, digit;

    printf("enter number: ");
    scanf("%d", &num);

    printf("enter digit: ");
    scanf("%d", &digit);

    float total = total_amount(num, digit);
    printf("Total amount: %f ", total);

    return 0;
}

float total_amount(int num, int digit)
{
    int sum = 0;
    int current_num;
    int count = 0;
    int i = 1;

    while (num > 0)
    {
        current_num = num % 10;
        num = num / 10;
        if (current_num < digit)
        {
            sum += current_num;
            count ++;
        }
        i++;
    }
    float average = (float) sum / count;

    return average;
}


