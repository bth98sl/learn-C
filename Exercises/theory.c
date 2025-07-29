#include <stdio.h>
#include <stdbool.h>

typedef __uint8_t Rational;



int main(void)
{
    float f = 1.25;
    int i = (int)f;

    printf("i = %d\n", i);
    printf("f = %f\n", f);

    printf("false = %d\n", (bool)0);
    printf("true = %d\n", (bool)1998);

    return 0;
}