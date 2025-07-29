/*  find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function */

#include <stdio.h>

float sum_fac(float num);

int main()
{
    float num;
    float sum;
    printf("enter number: ");
    scanf("%f", &num);

    sum = sum_fac(num);
    printf("The sum of series is: %.f ", sum);
}

float sum_fac(float num)
{
    int i;
    float sum = 0;
    float fac;
    fac = 1;
    for (i = 1; i <= num; i++)
    {
        fac = fac * i;
        sum += fac / i;
    }
    return sum;
}