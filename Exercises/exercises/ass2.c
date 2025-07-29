/*  write a program that creates an array of integers
    check if the array is "really sorted, "sorted", "not sorted"
    for example: [1, 2, 5, 7, 10] ---> really sorted
                 [1, 2, 2, 5, 10] ---> sorted 
                 [1, 2, 5, 3, 10] ---> not stored
*/

#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE];
    int i, j;
    int flag = 2;
    for (i = 0; i < SIZE; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        if (arr[i-1] > arr[i])
        {
            flag = 0;
            break;
        }
        if (arr[i-1] == arr[i])
        {
            flag = 1;
        }
    }
    if (flag == 2)
    {
        printf("Array is really sorted\n");
    }
    else if (flag == 1)
    {
        printf("Array is sorted\n");
    }
    else
    {
        printf("Array is not sorted");
    }
    return 0;
}