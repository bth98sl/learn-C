/* enter num from user -> print num divided by 3 and 5*/

#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;

    printf("enter number can divided by 3 and 5: ");
    scanf("%d", &n);

    for (int i = 15; i <= n; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
        {
            sum += i;
            printf("%d ", i);
        }
    }
    printf("\nSUM: %d", sum);
    return 0;
}