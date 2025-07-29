 /* Calculate the area of a rectangle */

#include <stdio.h>

/* function declaration */
int add(int x, int y);

int main()
{
    int a, b;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);

    int result = add(a, b);
    printf("The result is %d\n", result);
    return 0;
}

/* function definition */
int add(int x, int y)
{
    x = 5;
    y = 4;
    int sum;
    sum = x+y;
    printf("sum1 = %d\n", sum);
    return sum;
}
