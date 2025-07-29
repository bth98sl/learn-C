/*  Task: Write a program to print an array in reverse order using a pointer.
    Example:
        - input: 1, 2, 3, 4, 5
        - output: 5, 4, 3, 2, 1
*/

#include <stdio.h>
#define SIZE    5

int main(void)
{
    int arr[SIZE];
    int *parr;
    parr = &arr[0]; // value of parr
    int i = 0;

    printf("Enter input of an array: \n");
    for (i = 0; i < SIZE; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", (parr + i)); // parr -> arr[0]
    }

    //parr = &arr[SIZE - 1]; // move parr -> arr[SIZE - 1]
    parr = arr + SIZE - 1; // best move parr to the last element

    printf("Enter output: \n");
    for (int i = 0; i < SIZE; i++)
    {
        // printf("arr[%d] = %d\n", i, *(parr - i));
        printf("arr[%d] = %d\n", i, *(parr)); // current value
        parr--;
    }

    return 0;
}