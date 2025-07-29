/* Write a programs that receives an integer "n"
   The program should print a right-angle triangle with the following up to a given "n"
*/

#include <stdio.h>

int main(void)
{
    int num;

    printf("enter number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("%d", j);
        }
        printf("%d\n", i);   
    }
    
    return 0;
}