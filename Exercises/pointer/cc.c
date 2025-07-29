#include <stdio.h>
#define SIZE 5
int main(void)
{
    int arr[SIZE];
    int i, j, max;

    printf("input:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    max = arr[0];

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i] < arr[j])
            {
                max = arr[j];
            }
        }
    }

    printf("max = %d", max);

    return 0;
}