/* Write a program in C to separate odd and even integers into separate arrays */

#include <stdio.h>

int main(void)
{
    int arr[100];
    int num, i, odd, even;

    printf("enter number: ");
    scanf("%d", &num);

    for ( i = 0; i < num; i++)
    {
        printf("enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Even numbers: ");
    for ( i = 0; i < num; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even = arr[i];
            printf("%d ", even);
        }
    }
    printf("\nOdd numbers: ");
    for ( i = 0; i < num; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd = arr[i];
            printf("%d ", odd);
        }
    }
    
    return 0;
}