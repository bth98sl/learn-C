/*  Write a program in C to find the maximum and minimum elements in an array.*/

#include <stdio.h>

int main(void)
{
    int size[100];
    int num;
    int i;
    int max = 0;
    int min;

    printf("Enter number: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &size[i]);
    }
    
    min = size[0];

    for (i = 0; i < num; i++)
    {
        if (size[i] > max)
        {
            max = size[i];
        }

        if (size[i] < min)
        {
            min = size[i];
        }
    }
    printf("Max value is: %d \n", max);
    printf("Min value is: %d ", min);
    
    return 0;
}