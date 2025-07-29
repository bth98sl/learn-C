/*  Count the number of non - unique element in array */

#include <stdio.h>
#define SIZE 10

int main()
{
    int arr[SIZE];
    int dup[SIZE];
    int i, j, m;
    int k = -1;
    int count, exist;
    int sum = 0;

    for (i = 0; i < SIZE; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &arr[i]);
        dup[i] = -1;
    }

    printf("Total Non - Unique elements: ");
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
        if (count > 1)
        {
            exist = 0; //reset count
            for (m = 0; m <= k; m++)
            {
                dup[m] = arr[i];
                exist++;
            }
        }
        //check element exist in dup or not
        if (exist == 0)
        {
            k++;
            dup[k] = arr[i];
            sum++;
            //printf("%d ", sum);
        }
    }
    printf("%d ", sum);
    return 0;
}