/*  Write a program that initializes a string wwith your:
    1. First Name: Pitt
    2. Last Name: Brad
    The program should print your -Full Name- like: Your full name is Brad Pitt
*/

#include <stdio.h>

int main(void)
{
    char first_name[100];
    char second_name[100];

    printf("Enter first name: ");
    scanf("%s", first_name);

    printf("Enter second name: ");
    scanf("%s", second_name);

    printf("Your full name is: %s %s", first_name, second_name);

}