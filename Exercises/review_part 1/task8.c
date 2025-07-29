/*  receive num: 7452 
    print sum_even num: 4+2 = 6
    print sum_odd num: 7+5 = 12
    print sum_even - sum_odd 
*/

#include <stdio.h>

int main(void)
{
    int num, current_num;
    int sum_even = 0, sum_odd = 0;
    int sum = 0;

    printf("enter num: ");
    scanf("%d", &num);

    while (num > 0)
    {
        current_num = num % 10;
        //printf("current_num: %d\n", current_num);
        num = num / 10;
        //printf("num: %d\n", num);
        
        if (current_num % 2 == 0)
        {
            //printf("even: %d ", current_num);
            sum_even += current_num;
            //printf("SUM EVEN: %d\n", sum_even);
        }
        else
        {
            //printf("odd: %d ", current_num);
            sum_odd += current_num;
            //printf("SUM ODD: %d\n", sum_odd);
        }
    }
    printf("SUM: %d - %d = %d", sum_even, sum_odd, sum_even - sum_odd);
    
    return 0;
}