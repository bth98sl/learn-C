#include <stdio.h>

int main(void)
{
    int arr[] = {0, 5, 4, 9, 5, 8, 2, 3, 1, 5, 4, 9, 5, 5, 2, 7, 6, 5, 4, 1};
    // int arr[] = {2, 5, 3, 0, 2, 3, 0, 3};
    int countArr[10] = {0};
    int i; 
    int key;
    printf("enter random number to check: ");
    scanf("%d", &key);

    for (i = 0; i < 20; i++)
    {
        if (arr[i] == key)
        {
            countArr[arr[i]]++;
        }
    }

    printf("total = %d ", countArr[key]); //countarr[arr[i]] = countarr[5] 

    return 0;
}