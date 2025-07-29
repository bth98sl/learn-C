/*  Create a structure named Book to store book details like title, author, and price. 
    Write a C program to input details for three books, find the most expensive and the lowest priced books, and display their information. 
*/

#include <stdio.h>

struct Book
{
    char title[50];
    char author[50];
    float price;
};

int main (void)
{
    struct Book b1, b2, b3;

    printf("Book1: ");
    scanf("%s", b1.title);
    printf("Author: ");
    scanf("%s", b1.author);
    printf("Price: ");
    scanf("%f", &b1.price);

    printf("Book2: ");
    scanf("%s", b2.title);
    printf("Author: ");
    scanf("%s", b2.author);
    printf("Price: ");
    scanf("%f", &b2.price);
    
    printf("Book3: ");
    scanf("%s", b3.title);
    printf("Author: ");
    scanf("%s", b3.author);
    printf("Price: ");
    scanf("%f", &b3.price);

    struct Book mostExpensive;
    if ((b1.price > b2.price) && (b1.price > b3.price))
    {
        mostExpensive = b1;
        //printf("The most expensive book is: %s - %f", b1.title, b1.price);
    }
    else if ((b2.price > b1.price) && (b2.price > b3.price))
    {
        mostExpensive = b2;
        //printf("The most expensive book is: %s - %f", b2.title, b2.price);
    }
    else
    {
        mostExpensive = b3;
        //printf("The most expensive book is: %s - %f", b3.title, b3.price);
    }

    //Display information
    printf("The most expensive book: %s - %.f", mostExpensive.title, mostExpensive.price);

    
    return 0;
}