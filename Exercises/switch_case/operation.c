/*  Enter 2 integer and one of math symbolic (+,-,*,/) to calculate
    input: a = 10, b = 2
    output: enter / --> result = 5
 */

#include <stdio.h>

int main(void)
{
    char op;
    int a;
    int b;
    int result;

    printf("Number a: ");
    scanf("%d", &a);

    printf("Number b: ");
    scanf("%d", &b);

    printf("Add operation to calculate: ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        result = a + b;
        printf("result = %d", result);
        break;
    case '-':
        result = a - b;
        printf("result = %d", result);
        break;
    case '*':
        result = a * b;
        printf("result = %d", result);
        break;
    case '/':
        if (b != 0)
        {
            result = (float)a / b;
            printf("result = %d", result);
        }
        break;
    default:
        break;
    }

    return 0;
}