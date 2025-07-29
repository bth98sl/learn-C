/*  calculating number like: num^2 
    input: number and pow
*/

#include <stdio.h>

int main(void)
{
    int num, pow;
    int result = 1;
    int i = 0;

    printf("enter number: ");
    scanf("%d", &num);
    printf("enter power : ");
    scanf("%d", &pow);

    while (i < pow)
    {
        result = num*result;
        i++;
    }
    printf("%d in the power of %d = %d", num, pow, result);

    return 0;
}