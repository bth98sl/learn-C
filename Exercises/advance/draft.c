#include <stdio.h>

int func(int *ptr1, int *ptr2)
{
    *ptr1 = 20;
    *ptr2 = 10;
}
int main(void)
{
    int x = 10;
    int y = 20;

    func(&x, &y);

    printf("x = %d, y = %d", x, y);

    return 0;
}