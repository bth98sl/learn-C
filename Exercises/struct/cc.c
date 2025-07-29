/*  Find maxinum between 2 digits
    input: 35
    output: Maxinum digit = 5
            9000: Error! not 2-digits number  */

#include <stdio.h>
#include <stdbool.h>

int max(int a, int b);
int min(int a, int b);
float equal_or_not(int a, int b);

int main()
{
    int a, b;
    int maxx, minn;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    maxx = max(a, b);
    minn = min(a, b);

    if (equal_or_not(a, b))
    {
        printf("Two number is equal\n");
    }
    else
    {
        printf("Two number is not equal\n");
    }

    printf("Max is: %d\n", maxx);
    printf("Min is: %d\n", minn);

    return 0;

}

int max(int a, int b)
{
    int max;
    
    if(a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    return max;
}

int min(int a, int b)
{
    int min;
    
    if(a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }
    return min;
}

float equal_or_not(int a, int b)
{
    float equal = false;
    
    if(a == b)
    {
        equal = true;
    }
    return equal;
}