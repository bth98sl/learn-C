/* Write a program that receives as input two values 
    1. number 
    2. pow 
    => result of "num <pow>"
*/

#include <stdio.h>

int main(void)
{
    int num;
    int pow;
    int result = 1;

    printf("enter number: ");
    scanf("%d", &num);
    printf("enter pow: ");
    scanf("%d", &pow);

    for (int i = 1; i <= pow; i++)
    {
        result = result * num;
    }
    printf("The result of %d^%d is: %d", num, pow, result);

    return 0;
}