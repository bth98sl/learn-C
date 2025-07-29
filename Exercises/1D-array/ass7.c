/* Write a program in C to merge two arrays of the same size sorted in descending order */

#include <stdio.h>

int main(void)
{
    int first[100], second[100], final[100];
    int n1, n2, n3, i, j, l, m;;
    int k = 0;

    printf("input the number of elements to be stored in the first array: ");
    scanf("%d", &n1);
    printf("input %d elements in the array: \n", n1);

    for (i = 0; i < n1; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &first[i]);
    }
    //printf("the first array: ");
    for (i = 0; i < n1; i++)
    {
        final[k] = first[i];
        k++;
    }

    printf("input the number of elements to be stored in the second array: ");
    scanf("%d", &n2);
    printf("input %d elements in the array: \n", n2);

    for (j = 0; j < n2; j++)
    {
        printf("element %d: ", j);
        scanf("%d", &second[j]);
    }
    //printf("the second array: ");
    for (j = 0; j < n2; j++)
    {
        final[k] = second[j];
        k++;
    }

    printf("the final array after merge: ");
    n3 = n1 + n2;
    for (k = 0; k < n3; k++)
    {
        for (l = k+1; l < n3; l++)
        {
            if(final[k] < final[l])
            {
                m = final[k];
                final[k] = final[l];
                final[l] = m;
            }
        }
        printf("%d ", final[k]);
    }
    
    return 0;
}
