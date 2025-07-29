/* printf "num" even numbers from the user like: 
    5 -> 2, 4, 6, 8, 10 */

#include <stdio.h>

int main(void)
{
    int num;
    int i = 0;
    int k = 0;

    printf("enter numbers: ");
    scanf("%d", &num);

    /*for (int i = 1; i <= num; i++)
    {
        k = k + 2;
        if (k % 2 == 0)
        {
            printf("%d ", k);
        }     
    }*/
    while (i < num)
    {
        k = k + 2;
        if (k % 2 == 0)
        {
            printf("%d \n", k);
        }     
        i++;
    }
    
    return 0;
}