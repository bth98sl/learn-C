/* print 1
         1 2 3
         1 2 3 4 5
*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("enter num: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2*i-1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    
    return 0;
}