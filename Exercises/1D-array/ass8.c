/* Write a program in C to count the frequency of each element of an array. */

#include <stdio.h>

int main(void)
{
    int arr[100];
    int n, i, j;
    int count = 0;

    printf("input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("input %d elements in the array: \n", n);

    for (i = 0; i < n; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &arr[i]);
    }

    for ( i = 0; i < n; i++)
    {
        count = 0;
        for ( j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count >= 1)
        {
            printf("%d occurs %d times\n", arr[i], count);
        }
    }

    return 0;
}