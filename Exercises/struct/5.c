/*  Create a structure named "Employee" to store employee details such as employee ID, name, and salary. 
    Write a program to input data for three employees, find the highest salary employee, and display their information.    
*/

#include <stdio.h>

struct Employee
{
    int ID;
    char name[50];
    float salary;
};

int main (void)
{
    //input data for three employee
    struct Employee p1, p2, p3;

    printf("Enter ID: ");
    scanf("%d", &p1.ID);
    printf("Name: ");
    scanf("%s", p1.name);
    printf("Salary: ");
    scanf("%f", &p1.salary);

    printf("Enter ID: ");
    scanf("%d", &p2.ID);
    printf("Name: ");
    scanf("%s", p2.name);
    printf("Salary: ");
    scanf("%f", &p2.salary);

    printf("Enter ID: ");
    scanf("%d", &p3.ID);
    printf("Name: ");
    scanf("%s", p3.name);
    printf("Salary: ");
    scanf("%f", &p3.salary);

    //find the highest salary employee
    struct Employee highestSalary;
    if ((p1.salary >= p2.salary) && (p1.salary >= p3.salary))
    {
        highestSalary = p1;
    }
    else if ((p2.salary >= p1.salary) && p2.salary >= p3.salary)
    {
        highestSalary = p2;
    }
    else
    {
        highestSalary = p3;
    }

    //Display information
    {
        printf("The highest salary employee:\n");
        printf("ID: %d\n", highestSalary.ID);
        printf("Name: %s\n", highestSalary.name);
        printf("Salary: %.f", highestSalary.salary);
    }

    return 0;
}