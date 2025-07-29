/*  Write a program in C to sort elements of an array in ascending order. */

#include <stdio.h>

int main(void)
{
    int size[1000];
    int n, i, j, k;

    printf("input the size of array: ");
    scanf("%d", &n);
    printf("input %d elements in the array: \n", n);

    for (i = 0; i < n; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &size[i]);
    }
    printf("elements of array in sorted ascending order: ");
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (size[i] > size[j])
            {
                k = size[i];
                size[i] = size[j];
                size[j] = k;
            }
        } 
        printf("%d ", size[i]);
    }
    
    return 0;
}