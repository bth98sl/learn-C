/*  write a function that gets some "num" ( of an interger type), and a "digit"
    the function should:
        1. print the total amount of ditgits in num which are less than "digit"
        2. return average of thóe digits (that are less than "digit")
    example: "num" = 13572 "digit" = 3 => print(2)  return 1.5 
*/

#include <stdio.h>

int main()
{
    int num;
    printf("enter num: ");
    scanf("%d", &num);

    int digit;
    printf("enter digit: ");
    scanf("%d", &digit);

    int sum = 0;
    int current_num;
    int i = 0;

    while (num > 0)
    {
        current_num = num % 10;
        num = num /10;
        if (current_num < digit)
        {
            sum += current_num;
        }
        i++;
    }

    printf("Total amount: %d ", sum);
    
    return 0;
}


