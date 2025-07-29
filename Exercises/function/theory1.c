#include <stdio.h>

int a = 10, b = 5, c;

int product(int x, int y); //function prototype = Function declaration

int main(void)
{
    c = product(a, b);  //function call - a, b: global variables passed into the function
    printf("%i\n", c);
}

int product(int x, int y) // Function definition
{
    return (x*y);
}