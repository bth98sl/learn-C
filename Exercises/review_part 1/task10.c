/* receives "n" from the user
   read "n" values
   printf sum all odd number 
*/

#include <stdio.h>

int main(void)
{
    int num;
    int value;
    int i = 1;
    int sum = 0;

    printf("enter num: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        printf("enter a value: ");
        scanf("%d", &value);
        if (value % 2 != 0)
        {
            //printf("%d ", value);
            sum += value;
            //printf("sum odd: %d\n", sum);
        }
    }
    printf("sum odd: %d", sum);
    
    return 0;
}