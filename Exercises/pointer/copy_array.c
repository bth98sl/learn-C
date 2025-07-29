/*  Task: Write a program to copy elements of one array to another using a pointer. */

#include <stdio.h>
#define SIZE    5

int main(void)
{
    int arr[SIZE];
    int cpy[SIZE];
    int *parr;
    parr = &arr[0];
    int i;

    printf("Input from user: \n");
    for (i = 0; i < SIZE; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", parr + i); // parr -> arr[0]
    }

    parr = &cpy[0]; // parr point to cpy[]
    for (i = 0; i < SIZE; i++)
    {
        // *(parr + i) = *(arr + i);
        cpy[i] = arr[i];
    }

    printf("Copy array: \n");
    for ( i = 0; i < SIZE; i++)
    {
        printf("%d ", *(parr + i));
    }

}