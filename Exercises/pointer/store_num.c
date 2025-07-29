/*  Write a program in C to store n elements in an array and print the elements using a pointer */

#include <stdio.h>
#define SIZE 5

int main(void)
{
    int arr[SIZE];
    int i;
    int *pArr = arr; 

    printf("Enter the array: \n");
    
    for (i = 0; i < SIZE; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Array element using pointer: \n");

    for (i = 0; i < SIZE; i++)
    {
        printf("element %d: %d\n", i, pArr[i]); 
    }
    return 0;
}

