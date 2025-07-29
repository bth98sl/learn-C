/* Write a program in C to print all unique elements in an array. 
    eg: 3 2 2 5 -> unique: 3 5 */

#include <stdio.h>

int main(void)
{
    int size[100];
    int n, i, j, unique;
    int count = 0;

    printf("Input the numbers of elements: ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &size[i]);
    }

    printf("unique number is: ");
    for ( i = 0; i < n; i++)
    {
        count = 0; //set count = o
        for ( j = 0; j < n; j++)
        {
            if (size[i] == size[j])
            {
                count ++;
            }
        }
        if (count == 1)  // Check if the element appears only once
        {
            //unique = size[i];
            printf("%d ", size[i]);
        }
    }
    //printf("unique number is: %d ", unique);
    return 0;
}
