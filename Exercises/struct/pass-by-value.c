/*  Passing by value */

#include <stdio.h>

// define a structure

struct Employee
{
    char name[50];
    int age;
};

// function to modify the student's age
void modifyAge(struct Employee emp) // not change value
{
    emp.age = 25;
    printf("Inside function: Name = %s, Age = %d\n", emp.name, emp.age);
}

int main (void)
{
    struct Employee emp1 = {"Aradhya", 20};
    printf("Before function call: Name = %s, Age = %d\n", emp1.name, emp1.age);

    //call the function
    modifyAge(emp1);
    printf("Afrer function call: Name = %s, Age = %d", emp1.name, emp1.age);
    
    return 0;
}