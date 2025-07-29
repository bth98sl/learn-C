/* count each digit */

#include <stdio.h>
int main(void)
{
    int num, current_num;
    int count = 0;

    printf("enter num: ");
    scanf("%d", &num);

    while (num > 0)
    {
        num = num / 10;
        //printf("%d ", num);
        count ++;
    }
    
    printf("number has %d digit ", count);

    return 0;
}