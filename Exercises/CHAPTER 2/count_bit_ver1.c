/*  count bit 1 */

#include <stdio.h>

int count_bit(int x);
int main(void)
{
    int x = 13;
    int count;

    count = count_bit(x);

    printf("count of bit 1 is : %d\n", count);

    return 0;
}
int count_bit(int x)
{
    int count = 0;

    while (x != 0)
    {
        if (x % 2 == 1)
        {
            count++;
        }
        x = x / 2;
    }
    
    return count;
}