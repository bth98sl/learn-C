 /* Calculate the area of a rectangle */

#include <stdio.h>

/*function prototype */

float area_rectangle(float height, float breadth);

int main()
{
    float height_rec, breadth_rec;
    float area;
    printf("enter height: ");
    scanf("%f", &height_rec);
    printf("enter breadth: ");
    scanf("%f", &breadth_rec);
    area = area_rectangle(height_rec, breadth_rec);
    printf("Area of rectangle is: %f", area);
    return 0;
}

/* function definition */

float area_rectangle(float height, float breadth)
{
    float area;
    area = height * breadth;
    return area;
}


