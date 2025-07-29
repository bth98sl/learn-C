/*  write a function to enter input by using pointer */

#include <stdio.h>

void input(int *pa)
{
    printf("enter value a: ");
    scanf("%d", pa);
}
int main(void)
{
    int a;
    input(&a); //pass by reference
    printf("Value of a: %d", a);
    return 0;
}