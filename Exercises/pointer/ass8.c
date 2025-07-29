/*  Write a program in C to compute the sum of all elements in an array using pointers. 
    example: 2, 3, 4, 5, 6 = 20 */

#include <stdio.h>
#define SIZE 5

int main(void)
{
    int arr[SIZE];
    int i;
    int sum = 0;
    int *pArr = arr;

    printf("Input %d number of elements in the array: \n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        printf("Element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        sum += *pArr + i;
    }

    printf("The sum of array is: %d", sum);
    
    return 0;
}

