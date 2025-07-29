/*  Write a program in C to insert the values in the array (sorted list).
    The exist array list is: 2 5 7 9 11
    After Insert the list is: 2 5 7 8 9 11 */

#include <stdio.h>

int main (void)
{
    int n;
    printf("enter number: ");
    scanf("%d", &n);

    int arr[100];
    int i, j, k;
    int insert;

    for (i = 0; i < n; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("original array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\nenter inserted element ");
    printf("inserted element: ");
    scanf("%d", &insert);

    printf("after inserting element: ");
    for (i = 0; i <= n; i++)
    {
        arr[n] = insert;
        //printf("%d ", arr[i]);
    }
    // sorting element by ascending
    for (i = 0; i <= n; i++)
    {
        for (j = i+1; j <= n; j++)
        {
            if (arr[i] > arr[j])
            {
                k = arr[i];
                arr[i] = arr[j];
                arr[j] = k;
            }
        }
        printf("%d ", arr[i]);
    }
    return 0;
}