/*  write a program that should calculate and print the Largest Sum of two Adjacent Elements (Neighbors) in Array 
    ex: 1, 4, 3, 7, 1 -> Largest sum = 10 
        5, 7, 1, 5, 2 -> Largest sum = 12 
*/

#include <stdio.h>

#define SIZE 5

int main()
{
    int array[SIZE];
    int i;
    int maxsum = array[0] + array[1];

    for (i = 0; i < SIZE; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        if (maxsum < array[i] + array[i+1])
        {
            maxsum = array[i] + array[i+1];
        }
    }
    printf("Largest sum of two adjacent is: %d", maxsum);

    return 0;
}