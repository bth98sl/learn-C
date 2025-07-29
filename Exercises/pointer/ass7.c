/*  Write a program in C to sort an array using a pointer */

#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE];
    int i, j, k;
    int *pArr = arr;
    for (i = 0; i < SIZE; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            if (pArr[i] < pArr[j])
            {
                k = pArr[i];
                pArr[i] = pArr[j];
                pArr[j] = k;
            }
        }
    }
    printf("the elements in the array after sorting: \n");
    for (i = 0; i < SIZE; i++)
    {
        printf("element %d: %d\n", i, pArr[i]);
    }
    return 0;
}