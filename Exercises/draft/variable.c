#include <stdio.h>

int main(void)
{
    *((int *)0x7ffffcc14) = 5;

    printf("value = %d\n", *((int *)0x7ffffcc14));

    return 0;
}
