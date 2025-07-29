/*  Write a program in C to calculate the length of a string using a pointer. */

#include <stdio.h>
#include <string.h>

int main()
{
    char str [100];
    int count = 0;

    scanf("%s", str);

    printf("The length of the given string w3resource is: ");

    for (int i = 0; i < strlen(str); i++)
    {
        count++;
    }
    printf("%d", count);

    return 0;
}