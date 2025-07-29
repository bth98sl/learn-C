#include <stdio.h>

int main(void)
{
    int arr[20] = {0, 5, 4, 9, 5, 8, 2, 3, 1, 5, 4, 9, 5, 5, 2, 7, 6, 5, 4, 1};
    int count[10] = {0};
    int i;
    int maxIndex = 0;

    for (i = 0; i < 20; i++)
    {
        count[arr[i]]++;
    }

    for (i = 0; i < 10; i++)
    {
        if (count[i] > count[maxIndex])
        {
            maxIndex = i;
        }
    }

    return 0;
}