/* Toggle bit */

#include <stdio.h>

int toggle_bit(int x, int n);
int main(void)
{
    int x = 8;
    int n = 2;
    int result;

    result = toggle_bit(x, n);

    printf("Toggle: %d\n", result);

    return 0;
}
int toggle_bit(int x, int n)
{
    return x ^ (1 << n);
}