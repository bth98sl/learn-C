#include <stdio.h>
#define SIZE 1000


int main(void)
{
    char line[SIZE] = "hello, world";
    char *from;
    from = &line[0];

    for (int i = 0; i < SIZE; i++)
    {
        printf("from[%d] = %c\n", i, *(from + i));
    }

    return 0;
}