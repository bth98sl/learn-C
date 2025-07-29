/* Delete an element at a desired position from an array.
    input: 1 2 3 4 5
    output: 1 2 4 5 
*/
#include <stdio.h>

int main(void)
{
    int n;
    printf("enter number: ");
    scanf("%d", &n);

    int arr[100];
    int dup[100];
    int i, j, m, pos;
    int k = -1;
    int count = 0;
    int exist;

    for (i = 0; i < n; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &arr[i]);
        dup[i] = -1;
    }

    printf("postion to be deleted: ");
    scanf("%d", &pos);

    for (i = 0; i < n; i++)
    {
        if (i == pos)
        {
            arr[pos] = arr[i+1];
        }
        //printf("%d ", arr[i]);
        // 1 2 4 4 5 
    }
    for (i = 0; i < n; i++)
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
            exist = 0;
            for (m = 0; m <= k; m++)
            {
                if (dup[m] == arr[i])
                {
                    exist++;
                }
            }
            if (exist == 0)
            {
                k++; 
                dup[k] = arr[i];
                printf("%d ", arr[i]);
            }
        }
    }
    return 0;
}