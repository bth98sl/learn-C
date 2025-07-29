/*  Write a program to rotate left a given array by 1 position */

#include <stdio.h>
#define SIZE 2

int main()
{
    int arr[SIZE];
    int i, k, temp;

    for (i = 0; i < SIZE; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &arr[i]);
    }

    /* Push rotate left */
    temp = arr[0];
    for (i = 1; i < SIZE; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[SIZE-1] = temp;

    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}