/*  Write a program in C for adding two matrices of the same size. */

#include <stdio.h>
#define SIZE 2

int main(void)
{
    int mat1[SIZE][SIZE];
    int mat2[SIZE][SIZE];
    int add[SIZE][SIZE];
    int row, column;

    printf("input elements in the first matrix: \n");
    for (row = 0; row < SIZE; row++)
    {
        for (column = 0; column < SIZE; column++)
        {
            printf("element - [%d],[%d]: ", row, column);
            scanf("%d", &mat1[row][column]);
        }
    }

    printf("input elements in the second matrix: \n");
    for (row = 0; row < SIZE; row++)
    {
        for (column = 0; column < SIZE; column++)
        {
            printf("element - [%d],[%d]: ", row, column);
            scanf("%d", &mat2[row][column]);
        }
    }

    printf("the first matrix: \n");
    for (row = 0; row < SIZE; row++)
    {
        for (column = 0; column < SIZE; column++)
        {
            printf("%d ", mat1[row][column]);
        }
        printf("\n");
    }

    printf("the second matrix: \n");
    for (row = 0; row < SIZE; row++)
    {
        for (column = 0; column < SIZE; column++)
        {
            printf("%d ", mat2[row][column]);
        }
        printf("\n");
    }

    printf("addition of two matrix is: \n");
    for (row = 0; row < SIZE; row++)
    {
        for (column = 0; column < SIZE; column++)
        {
            add[row][column] = mat1[row][column] + mat2[row][column];
        }
    }

    for (row = 0; row < SIZE; row++)
    {
        for (column = 0; column < SIZE; column++)
        {
            printf("%d ", add[row][column]);
        }
        printf("\n");
    }

    return 0;
}