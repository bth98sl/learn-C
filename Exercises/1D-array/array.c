#include "stdio.h"

int main(void)
{
    int index = 0;
    int arr[11] = {2, 13, 1, 5, 5, 1, 9, 7, 6, 4, 1};
    int n = 11;
    int min = arr[0];
    int index_min = 0;

    for (index = 0; index < n; index++)
    {
        if (arr[index] < min)
        {
            min = arr[index];
        }
    }

    for (index = 0; index < n; index++)
    {
        if (arr[index] == min)
        {
            printf("index = %d\n", index);
        }
    }

    return 0;
}

