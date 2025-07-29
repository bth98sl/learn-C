/*  1. Create a structure called "Student" with members name, age, and total marks. 
    Write a C program to input data for two students
    Display their information, and find the average of total marks.   
*/

#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float total_mark;
};

int main (void)
{
    struct Student st1, st2; //Declare variables of stduents

    //Input data for the first student
    printf("Name: ");
    scanf("%s", st1.name); 
    printf("Age: ");
    scanf("%d", &st1.age);
    printf("Total mark: ");
    scanf("%f", &st1.total_mark);

    //Input data for the second student
    printf("\nName: ");
    scanf("%s", st2.name); 
    printf("Age: ");
    scanf("%d", &st2.age);
    printf("Total mark: ");
    scanf("%f", &st2.total_mark);

    //Display infor for both students
    printf("\nName: %s\n", st1.name);
    printf("Age: %d\n", st1.age);
    printf("Total marks: %.1f\n", st1.total_mark);

    printf("\nName: %s\n", st2.name);
    printf("Age: %d\n", st2.age);
    printf("Total marks: %.1f\n", st2.total_mark);

    return 0;
}