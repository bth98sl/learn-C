/*  Write a program in C to find the maximum number between two numbers using a pointer. */

#include <stdio.h>

void maximum(int a, int b, int *max, int *min);

int main()
{
    int a, b, max, min;

    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);

    maximum(a, b, &max, &min);
    printf("%d is the maximum number\n", max);
    printf("%d is the mininum number", min);
    
    return 0;
}

void maximum(int a, int b, int *max, int *min)
{
    if (a > b)
    {
        *max = a;
        *min = b;
    }
    else
    {
        *max = b;
        *min = a;
    }
}