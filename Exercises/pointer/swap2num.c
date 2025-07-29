/*  swap 2 number using pointer */

#include <stdio.h>

int swap(int *a, int *b, int*c);

int main()
{
    int a, b, c;

    printf("element value of 1st element: ");
    scanf("%d", &a);
    printf("element value of 2st element: ");
    scanf("%d", &b);
    printf("element value of 3st element: ");
    scanf("%d", &c);

    swap(&a,&b,&c);
    printf("%d %d %d", a, b, c);

    return 0;
}

int swap(int *a, int *b, int *c)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = * c;
    *c = temp;
}