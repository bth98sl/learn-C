#include <stdio.h>

int main(void)
{
    char string[20];
    printf("enter the string: ");
    gets(string); // read data 
    printf("%s", string);

    return 0;
}