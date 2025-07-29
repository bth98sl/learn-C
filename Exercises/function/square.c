/*  find the square of any number using the function */
#include <stdio.h>

float square(float side);

int main()
{
    int side;
    printf("Enter side of square: ");
    scanf("%d", &side);

    float res = square(side);
    printf("Area of square %d is: %f ", side, res);
}

float square(float side)
{
    float square;
    square = side*side;
    return square;
}