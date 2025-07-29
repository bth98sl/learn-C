/* Find sum of all elements of the array */

#include <stdio.h>

#define size 3

int main (void)
{
    int num[size];
    int sum = 0;

    printf("input %d elements in the array\n", size);

    for (int i = 0; i < size; i++)
    {
        printf("element -%d: ", i);
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        //printf("%d ", num[i]);
        sum += num[i];
        //printf("sum = %d", sum);
    }
    printf("Sum of all elements stored in the array is: %d", sum);
    
    return 0;
}