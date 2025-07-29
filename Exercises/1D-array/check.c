#include <stdio.h>

int main(void)
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);


    int arr[100];
    int exist[100];
    int i, j, k;
    int found = 0;

    for (i = 0; i < n; i++)
    {
        printf("element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("enter k: ");
    scanf("%d", &k);

    //check if k already in array or not
    for ( i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            found = 1;
        }
    }
    if (found == 1)
    {
        printf("%d exist in array", k);
    }
    else
    {
        printf("%d doesn't exist in array", k);
    }
    
    return 0;
}