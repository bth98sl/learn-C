/* Pyramid of numbers like:
        1
       2 3
      4 5 6  */

#include <stdio.h>
int main(void)
{
    int n;
    int count = 0;

    printf("enter num: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k < i+1; k++)
        {
            count++;
            printf("%d ", count);
        } 
        printf("\n");
    }
    
    return 0;
}