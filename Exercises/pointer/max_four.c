#include <stdio.h>
 
void p() 
{
    printf("hello\n");
    p();
}
 
int main()
{
    p();
    return 0; 
}