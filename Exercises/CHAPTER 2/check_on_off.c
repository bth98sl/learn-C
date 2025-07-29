/* check bit on off
    intput: x = 5; n = 2
*/

#include <stdio.h>

int main(void)
{
    int x = 3;
    int n = 3;

    /*      1  = 00000001
       1 << 2  = 00000100
            5  = 00000101
    (1 << 2)&5 = 00000100 = 4 != 0
    */

    if (x & (1 << n))
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