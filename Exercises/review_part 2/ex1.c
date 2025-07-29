#include <stdio.h>

int main(void)
{
    int ch;
    int sum;

    printf("Enter 6 character: ");
    ch = getchar();

    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
        sum += ch;
    }

    //printf("All character entered: ");
    
    printf("Sum = %d", sum);
    return 0; 
}