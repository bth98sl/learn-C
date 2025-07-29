#include <stdio.h>

int swap(int *a, int *b);  // prototype

int main(void)
{

    int x = 5;
    int y = 6;
    int z;

    //z = swap(x, y);  // funtion call

    swap(&x, &y);
    printf("x= %d y= %d\n", x, y);
    printf("p_x = %p", &x); // address x

    return 0;
}

// function definition
int swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;

    printf("a1 = %p\n", a); // address of pointer a


    printf("a2 = %d\n", *a); // value of a 
    printf("p_a = %p\n", &a); // address of a
}