/*  Count the number of unique element in array */

#include <stdio.h>
#define SIZE 10

int main()
{
    int arr[SIZE];
    int i, j;
    int count;
    int sum = 0;

    for (i = 0; i < SIZE; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Total Unique elements: ");
    for (i = 0; i < SIZE; i++)
    {
        count = 0;
        for (j = 0; j < SIZE; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            sum ++;
        }
    }
    printf("%d ", sum);
    return 0;
}