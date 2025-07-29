/*Print 5 -> 1, 2, 3, 4, 5
             5, 4, 3, 2, 1 
*/

#include <stdio.h>

int main(void)
{
    int num;

    printf("enter number: ");
    scanf("%d", &num);

    for (int j = 1; j <= num; j++)
    { 
        printf("%d ", j);         
    }    
    printf("\n");
    for (int i = num; i > 0; i--)
    {  
        printf("%d ", i);
    }
    return 0;
}