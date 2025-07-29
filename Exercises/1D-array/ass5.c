/* Write a program in C to count the frequency of each element of an array. */

#include <stdio.h>

int main(void)
{
    int arr[100];
    int dup[100];
    int n, m, i , j;
    int count = 0;
    int k = -1;
    int dup_num = 0;
    int exist = 0;

    // step 1: initial array
    printf("input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("input %d elements in the array: \n", n);
    
    for (i = 0; i < n; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &arr[i]);
        dup[i] = -1;
    }

    // step 2: found duplicate number
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
            exist = 0; // reset exist 
            dup_num = arr[i];//save value
            for (m = 0; m <= k; m++)
            {
                if (dup_num == dup[m])
                {
                    exist++;
                }
            }
            //check element exist in dup or not
            if (exist == 0) 
            {
                k++; 
                dup[k] = arr[i]; // push element in dup
                printf("%d occurs %d times\n", dup[k], count);
            }
        }
    }

    return 0;
}