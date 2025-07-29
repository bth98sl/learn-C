
/*  create the structure variable */

struct demo_structure //user-defined datatype
{
    char A;     //take up 1 bytes
    int B;      //take up 4 bytes
    char C[5];  //take up 5 bytes
} demo_variable;

example

#include "stdio.h"

struct demo_struct
{
    int a, b;
    char c;
};

int main (void)
{
    struct demo_struct var; //declare struct data type
    var.a = 7; //access each element/member of the struct
    var.b = 8;
    var.c = 'A' 

    printf("%d %d %c ", var.a, var.b, var.c);

    return 0;
}
