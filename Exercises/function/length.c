/*  sequences of 9 */

#include <stdio.h>

float length(float len);

int main()
{
    float len;
    float seq;

    printf("enter length: ");
    scanf("%f", &len);

    seq = length(len);
    printf("%.f", seq);

}

float length(float len)
{
    int i;
    float num = 0;

    for ( i = 1; i <= len; i++)
    {
        num = num*10+9;
    }
    return num;
}