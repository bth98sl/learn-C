/*  Design a structure named "Car" to store details like car ID, model, and rental rate per day. 
    Write a C program to input data for three cars, calculate the total rental cost for a specified number of days,
    Display the results.
*/

#include <stdio.h>
struct Car
{
    int ID;
    char Model[50];
    float rental_rate_per_day;
};

int main(void)
{
    struct Car car[3];

    printf("Input data: \n");
    for (int i = 0; i < 3; i++)
    {   
        printf("Car %d:\nID: ", i+1);
        scanf("%d", &car[i].ID);
        printf("Model: ");
        scanf("%s", &car[i].Model);
        printf("Rental cost: ");
        scanf("%f", &car[i].rental_rate_per_day);
    }
    printf("Output data: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Car %d:\nID: %d\n", i+1, car[i].ID);
        printf("Model: %s\n", car[i].Model);
        printf("Rental cost: %f\n", car[i].rental_rate_per_day);
    }
    
    return 0;
}