/*copy the elements of one array into another array*/

#include <stdio.h>

#define size 3

int main (void)
{
    int num[size];
    int i, j;
    
    printf("Input the number of elements to be stored in the array: %d\n", size);

    for (i = 0; i < size; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &num[i]);
    }
    printf("The elements stored in the first array are: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
        //num[j] = num[i];
    }
    printf("\nThe elements stored in the second array are: ");
    for (j = 0; j < size; j++)
    {
        num[j] == num[i];
        printf("%d ", num[j]);
    }
    
    return 0;
}