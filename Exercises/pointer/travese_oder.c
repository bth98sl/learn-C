/* Task: Write a program to print an array using a pointer instead of array indexing
    Array elements: 10 20 30 40 50
*/

#include <stdio.h>
#define SIZE 5

int main(void)
{
    int arr[SIZE];
    int *parr = &arr[0]; // pointer to first element

    // input
    for (int i = 0; i < SIZE; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", (parr + i));
    }

    //output
    printf("------------------\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("arr[%d] = %d\n", i, *(parr));
        parr++;
    }
    return 0;
}