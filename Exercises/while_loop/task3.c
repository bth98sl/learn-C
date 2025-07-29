/* write a program that receives as input a "valid" grade:
    1. greater than 0
    2. less than 100 */

#include <stdio.h>

int main(void)
{
    int grade;

    printf("enter a grade between 0 to 100: ");
    scanf("%d", &grade);

    while (grade < 0 || grade > 100)  /// grade > 0 || grade < 100
    {
        printf("enter a grade between 0 to 100: ");
        scanf("%d", &grade);
    }
    
    printf("Thanks! You've inserted a legit grade of %d\n", grade);

    return 0;
}
