/* find the second largest element in an array */

#include <stdio.h>

int main (void)
{
    int n;
    printf("enter number in array: ");
    scanf("%d", &n);

    int arr[100];
    int i, j;
    int second_largest;
    int max = 0;

    for (i = 0; i < n; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &arr[i]);
    }

    //find the second large number
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    second_largest = arr[0];
    for (i = 0; i < n; i++)
    {
        if ((arr[i] > second_largest) && (arr[i] != max))
        {
            second_largest = arr[i];
        }
    }
    printf("%d ", second_largest);

    return 0;
}

