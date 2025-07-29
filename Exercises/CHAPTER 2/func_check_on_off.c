/* write a function check bit on off
    intput: x = 5; n = 2
*/

#include <stdio.h>

int is_bit_on(int x, int n);
int main(void)
{
    int x = 3;
    int n = 4;
    int result;

    result = is_bit_on(x, n);
    if (result != 0)
    {
        //bit move to bit n = 2 != 0
        printf("Bit %d is ON\n", n);
    }
    else
    {
        printf("Bit %d is OFF\n", n);
    }

    return 0;
}
int is_bit_on(int x, int n)
{
    return ((x & (1 << n)) != 0);
}