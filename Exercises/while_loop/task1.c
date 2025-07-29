/* printing any number of asterisks */

#include <stdio.h>

int main(void)
{
    int num_of_asterisks;

    printf("enter number of asterisks: ");
    scanf("%d", &num_of_asterisks);

    while (num_of_asterisks > 0)
    {
        printf("*");
        num_of_asterisks = num_of_asterisks - 1;
    }
    return 0;
}