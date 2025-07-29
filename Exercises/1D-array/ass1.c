/* write a program to store elements in an array and print them */

#include <stdio.h>

#define size 5

int main(void)
{
    int num[size];
    int i;

    printf("Input %d elements in the array: \n", size);
    for ( i = 0; i < size; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", &num[i]);
    }
    printf("Elements in array are: \n");
    for ( i = 0; i < size; i++)
    {
        printf("element %d: %d \n", i, num[i]);
    }
    
    return 0;
}