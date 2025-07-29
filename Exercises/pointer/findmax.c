/*  Task: Write a program to find the maximum element in an array using a pointer.  */

#include <stdio.h>
#define SIZE    5

int main(void)
{
    int arr[SIZE];
    int *parr;
    parr = &arr[0];
    int i, max;

    printf("Input from user: \n");
    for (i = 0; i < SIZE; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", parr + i); // parr -> arr[0]
    }

    max = *parr;

    printf("Output: \n");
    /* WAY 1
    for (i = 0; i < SIZE; i++)
    {
        if (max < *(parr + i))
        {
            max = *(parr + i);
        }
    } */

    //WAY 2
    for (int i = 1; i < SIZE; i++)
    {
        parr++; // Move pointer to the next element
        if (*parr > max)
        {
            max = *parr;
        }
    }

    printf("%d", max);

    return 0;
}


