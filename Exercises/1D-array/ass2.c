/* Read n number of values in an array and display them in reverse order */

#include <stdio.h>

int main (void)
{
    int size[100];
    int num;
    int i;

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &num);
    printf("Input the %d number of elements in array: \n", num);

    for ( i = 0; i < num; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &size[i]);
    }
    printf("The values store into the array are: ");
    for ( i = 0; i < num; i++)
    {
        printf("%d ", size[i]);
    }
    
    printf("\nThe value store into the array in reverse are: ");
    for ( i = num - 1; i >= 0; i --)
    {
        printf("%d ", size[i]);
    }
    return 0;
}