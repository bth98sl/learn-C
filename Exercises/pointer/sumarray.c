/*  write a function that gets an array, size of the array  */

#include <stdio.h>

int sumArray (int *pArray, int size);

int main()
{
    int array[3] = {1, 3, 10};
    int result = 0;


    result = sumArray(&array, 3);
    printf("the result sum = %d\n", result);

}

int sumArray (int *pArray, int size)
{
    int i;
    int sum = 0;

    for ( i = 0; i < size; i++)
    {
        sum += pArray[i];
    }
    return sum;
}