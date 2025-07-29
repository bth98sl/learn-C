/* turn off bit nth */

#include <stdio.h>

int clear_bit(int x, int n);
int main(void)
{
    int x = 9;
    int n = 3;
    int turn_off;

    turn_off = clear_bit(x, n);

    printf("before turn of bit: %d\n", x);
    printf("after: %d (bit %d is off bit)\n", turn_off, n);

    return 0;
}
int clear_bit(int x, int n)
{
    return x & ~(1 << n);
}