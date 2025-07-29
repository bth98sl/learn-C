/* write a program to turn on nth bit */

#include <stdio.h>

int set_bit(int x, int n);
int main(void)
{
    int x;
    int n;
    int turn_on;

    printf("enter random number: ");
    scanf("%d", &x);
    printf("enter bit to turn on: ");
    scanf("%d", &n);

    turn_on = set_bit (x, n);

    printf("befre turn on bit: %d\n", x);
    printf("after: %d (bit %d is on bit)\n", turn_on, n);

    return 0;
}
int set_bit(int x, int n)
{
    return (x | (1 << n));
}