#include <stdio.h>

int main (void)
{
    int num;

    printf("enter number: ");
    scanf("%d", &num);

    printf("output: 0x%X", num);

    return 0;
}