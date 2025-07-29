/*  Find maxinum between 2 digits
    input: 35
    output: Maxinum digit = 5
            9000: Error! not 2-digits number  */

#include <stdio.h>

int max_digit(int num);

int main()
{
    int num;
    int max;
    printf("Enter number: ");
    scanf("%d", &num);

    while((num < 10) || (num >= 100))
    {
        printf("Error! Not 2-digits number\n");
        printf("Enter number: ");
        scanf("%d", &num);
    }
    max = max_digit(num);
    printf("Max is: %d ", max);
    return 0;

}

int max_digit(int num)
{
    int max;
    int a = num/10;
    int b = num%10;
    
    if(a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    return max;
}