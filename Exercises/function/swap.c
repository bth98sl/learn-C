/*  swap two numbers using a function */

#include <stdio.h>

int swap(int a, int b); // Function declaration

int main(void)
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Before swapping: a = %d; b = %d\n", a, b);
    printf("After swapping: ");
    swap(a, b);


    return 0;
}

int swap(int a, int b) // Function definition
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d ", a);
    printf("b = %d ", b);
}