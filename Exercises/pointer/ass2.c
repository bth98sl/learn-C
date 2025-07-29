/*  Write a program in C to add two numbers using pointers */

#include <stdio.h>

int add(int *a, int *b);
void add2(int *a, int *b, int *sum);

int main()
{
    int a, b;
    int sum;
    int sum2;
    void cc;

    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);

    sum = add(&a, &b);
    printf("SUM = %d\n", sum);

    add2(&a, &b, &sum2);
    printf("SUM2 = %d ", sum2);
    return 0;
}

int add(int a, int b)
{
    return (a+b);
}

void add2(int *a, int *b, int *sum)
{
    *sum = *a + *b;
}
