/*  Find ASCII value of a character */

#include <stdio.h>

int main(void)
{
    char c;

    printf("enter a character: ");
    scanf("%c", &c);

    printf("ASCII of %c = %d", c, c);

    return 0;
}