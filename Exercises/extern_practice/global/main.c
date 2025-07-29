#include <stdio.h>

extern int max = 10;         // declaration

int main(void)
{
    printf("value of max: %d\n", max);
    max = 100;
    printf("the new value of max: %d\n", max);

    return 0;
}