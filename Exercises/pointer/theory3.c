/*  pointer can be array - array is not a pointer */

#include <stdio.h>

int main(void)
{
    int a[10] = {0};
    int *pa = &a[0];
    int index = 2;

    // a[0] = 7;       //pa[0] = 7
    // a[index] = 6;    //pa[index] = 6
    // a[1] = a[1] + 9; //pa[1] = pa[1] + 9

    pa[0] = 7;
    pa[index] = 6;
    pa[1] = pa[1] + 9;

    printf("pa[1] = %d\n", pa[1]);

    *pa = 10;

    // pa = pa + 1;
    // int b = 10;
    // pa = &b;

    // printf("a[0] = %d\n", a[0]);
    // printf("a[2] = %d\n", a[index]);
    // printf("a[1] = %d\n", a[1]);

    printf("pa[0] = %d\n", *pa);
    *(pa + 1) = 20;
    printf("pa[1] = %d\n", *(pa + 1)); // arr[1] = 20;
    printf("pa[2] = %d\n", pa[index]);
    printf("pa[1] = %d\n", pa[1]); // pa[1] == arr[1]

    return 0;
}