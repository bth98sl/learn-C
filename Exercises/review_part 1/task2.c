/* printf sum all number from 1 to num => 5 = 1+2+3+4+5 = 15 */

#include <stdio.h>

int main(void)
{
    int num, i;
    int sum = 0;

    printf("enter num: ");
    scanf("%d", &num);

    /* for (int i = 1; i <= num; i++)
    {
        printf("%d + %d = ", sum, i);
        sum = sum + i;
        printf("%d \n", sum);
    }*/
    
    /*do
    {
        printf("%d + %d = ", sum, i);
        sum = sum + i;
        printf("%d \n", sum);
        i++;
    } 
    while (i <= num);*/

    while (i <= num)
    {
        printf("%d + %d = ", sum, i);
        sum = sum + i;  
        printf("%d \n", sum);
        i++;
    }
    
    return 0;
}