/*  Write a program in C to find the maximum number between two numbers using a pointer. */

#include <stdio.h>

void maximum(int *a, int *b, int *max);

int main()
{
    int a, b, max1;

    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);

    maximum(&a, &b, &max1);
    printf("%d is the maximum number", max1);
    return 0;
}

void maximum(int *a, int *b, int *max)
{
    if (*a > *b)
    {
        *max = *a;
    }
    else
    {
        *max = *b;
    }
}