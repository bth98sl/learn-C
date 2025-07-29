/*  Write a program in C to insert the values in the array (unsorted list).
    The exist array list is: 1 8 7 10
    After Insert the list is: 1 5 8 7 10 */

#include <stdio.h>

int main (void)
{
    int n;
    printf("enter number: ");
    scanf("%d", &n);

    int arr[100];
    int temp[100];
    int i, j, k;
    int insert, pos;

    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\nEnter position of inserted element ");
    printf("\nInserted element: ");
    scanf("%d", &insert);
    printf("Position: ");
    scanf("%d", &pos);

    printf("After inserting element: ");
    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = insert;
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}


