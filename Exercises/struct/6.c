/*  Define a structure named "Date" with members day, month, and year
    Write a C program to input two dates and find the difference in days between them.
*/

#include <stdio.h>

/*struct Date
{
    int day;
    int month;
    int year;
};*/

typedef struct 
{
    int day;
    int month;
    int year;
} Date;

//function to calculate the number of days in month
int days_in_month(int month, int year);
int days_in_month(int month, int year)
{
    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2: 
    // check for leap year
    if (( year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        return 29;
    }
    else
    {
        return 28;
    }
    default:
        break;
    }
}
//function to calculate the diffence in days between two dates
int distant_day (Date d1, Date d2);
int distant_day (Date d1, Date d2)
{
    int day_month = days_in_month(d1.month, d1.year);
    printf("%d", day_month);
    //int days2 = days_in_month(d2.month, d2.year) - d2.day; 
}
int main (void)
{
    
    Date d1, d2;

    printf("Enter date: ");
    scanf("%d/%d/%d", &d2.day, &d2.month, &d2.year);

    printf("Enter date: ");
    scanf("%d/%d/%d", &d1.day, &d1.month, &d1.year);

    //calculate date
    int distant = distant_day(d1, d2);
    //printf("The diference in days: %d", distant);
    


    return 0;
}