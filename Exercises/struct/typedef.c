/*  Typedef in C - https://unstop.com/blog/structure-in-c */

#include <stdio.h>

// define a struct without typedef
struct Point
{
    int x;
    int y;
};

// define a struct with typedef
typedef struct 
{
    int x;
    int y;
} Point2D;

int main (void)
{
    //using the struct without typedef
    struct Point p1 = {5, 10};
    //using the struct with typedef
    Point2D p2;
    p2.x = 3;
    p2.y = 8;

    printf("Point p1: x = %d, y = %d\n", p1.x, p1.y);
    printf("Point p2: x = %d, y = %d\n", p2.x, p2.y);

    return 0;
}