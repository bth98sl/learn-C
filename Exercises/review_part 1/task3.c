/* write a program that receives an integer and prints its multiplication table like:
    3 * 1 = 3
    ---------
    3 * 10 = 30 */

#include <stdio.h>

int main(void)
{
    int factor_1, factor_2;
    int product;
    int i = 1;

    printf("Enter the first number: ");
    scanf("%d", &factor_1);
    printf("Enter the second number: ");
    scanf("%d", &factor_2);

    /* for (int i = 1; i <= factor_2 ; i++)
    {
        printf("%d * %d = ", factor_1, i);
        product = factor_1 * i;
        printf("%d\n", product);
    } */

    while ( i <= factor_2)
    {
        printf("%d * %d = ", factor_1, i);
        product = factor_1 * i;
        printf("%d\n", product);
        i++;
    }
    
    return 0;
}