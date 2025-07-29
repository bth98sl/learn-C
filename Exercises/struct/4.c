/*  Define a structure named Circle to represent a circle with a radius. 
    Write a C program to calculate the area and perimeter of two circles and display the results    
*/

#include <stdio.h>

#define PI 3.14

typedef struct 
{
    double radius;
    double area;
    double perimeter;
} Circle;

void area_perimeter(Circle circle);
void area_perimeter(Circle circle)
{
    circle.area = PI * (circle.radius) * (circle.radius);
    circle.perimeter = PI * 2 * (circle.radius);
}


int main (void)
{
    Circle c1, c2;

    printf("Circle1: ");
    scanf("%lf", &(c1.radius));

    printf("Circle2: ");
    scanf("%lf", &c2.radius);

    area_perimeter(c1);

    printf("Area of first circle: %.2lf\n", c1.area);

}