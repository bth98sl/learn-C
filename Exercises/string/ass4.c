/*  Write a program in C to calculate the length of a string using a pointer. */

#include <stdio.h>
#include <string.h>

int main()
{
    char str [100];

    scanf("%s", str);

    printf("The length of the given string w3resource is: ");
    printf("%d", strlen(str));

    return 0;
}