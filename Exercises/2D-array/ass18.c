/*  Write a program in C for a 2D array of size 3x3 and print the matrix. */

#include <stdio.h>
#define SIZE 3

int main(void)
{
    int matrix[SIZE][SIZE];

    int i, j;
    //input matri array
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("element - [%d],[%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    //print matrix array
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}