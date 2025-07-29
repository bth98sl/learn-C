/* find the second smallest element in an array */

#include <stdio.h>

int main (void)
{
    int n;
    printf("enter number in array: ");
    scanf("%d", &n);

    int arr[100];
    int i, j, k;
    int second_smallest;
    int min;

    for (i = 0; i < n; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &arr[i]);
    }

    //find the second large number
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j]) //sorting element by ascending
            {
                k = arr[i];
                arr[i] = arr[j];
                arr[j] = k;
            }
        }
        second_smallest = arr[1];
    }
    printf("second smallest number in array: %d ", second_smallest);

    return 0;
}