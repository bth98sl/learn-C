/*  get the largest element of an array using the function */

#include <stdio.h>

int largest(int arr[], int n);

int main()
{
    int num, max;
    int i;
    
    printf("Enter number: ");
    scanf("%d", &num);

    int arr[num];

    for (i = 0; i < num; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    max = largest(arr, );
    printf("largest in given array is %d", max);
    
    return 0;
}

int largest(int arr[], n)
{
    int i;
    int max = arr[0]; // initialize max 

    for (i = 0; i <= n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}