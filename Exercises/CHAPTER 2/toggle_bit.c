/* Toggle bit */

#include <stdio.h>

int main(void)
{
    int x = 8;
    int n = 2;
    int result;

    result = x ^ (1 << n);

    printf("Toggle: %d\n", result);

    return 0;
}