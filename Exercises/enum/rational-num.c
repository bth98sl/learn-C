/*  Write a "main function" to check out the correctness of your function
    Print the results before and after any operation that you do
*/

#include <stdio.h>

typedef struct
{
    int a; //numerator
    int b; //denominator
} Rational;

typedef enum
{
    SMALLER = 1,
    BIGGER,
    EQUAL,
    INVALID
} Compare;

Rational add(Rational n1, Rational n2);
Rational sub(Rational n1, Rational n2);
Rational mul(Rational n1, Rational n2);
Rational div(Rational n1, Rational n2);

Compare compare(Rational n1, Rational n2);

int main (void)
{
    Rational num1, num2;
    Rational sum, minus, time, ratio;
    Compare diff;

    printf("Input the first fraction: ");
    scanf("%d/%d", &num1.a, &num1.b);

    printf("Input the second fraction: ");
    scanf("%d/%d", &num2.a, &num2.b);

    sum = add(num1, num2);
    minus = sub(num1, num2);
    time = mul(num1, num2);
    ratio = div(num1, num2);

    diff = compare(num1, num2);

    if (diff == SMALLER)
    {
        printf("n1 smaller n2\n");
    }
    if (diff == BIGGER)
    {
        printf("n1 bigger n2\n");
    }
    if (diff == EQUAL)
    {
        printf("n1 equal n2\n");
    }

    printf("SUM = %d/%d\n", sum.a, sum.b);
    printf("SUB = %d/%d\n", minus.a, minus.b);
    printf("MUL = %d/%d\n", time.a, time.b);
    printf("DIV = %d/%d\n", ratio.a, ratio.b);

    return 0;
}

Rational add(Rational n1, Rational n2)
{
    Rational number;
    number.a = n1.a * n2.b + n1.b * n2.a;
    number.b = n1.b * n2.b;

    return number;
}

Rational sub(Rational n1, Rational n2)
{
    Rational number;
    number.a = n1.a * n2.b - n1.b * n2.a;
    number.b = n1.b * n2.b;

    return number;
}

Rational mul(Rational n1, Rational n2)
{
    Rational number;
    number.a = n1.a * n2.a;
    number.b = n1.b * n2.b;

    return number;
}

Rational div(Rational n1, Rational n2)
{
    Rational number;
    number.a = n1.a * n2.b;
    number.b = n1.b * n2.a;

    return number;
}


Compare compare(Rational n1, Rational n2)
{
    Compare result = INVALID;

    if ((n1.a * n2.b) < (n2.a * n1.b))
    {
        result = SMALLER;
    }
    else if ((n1.a * n2.b) > (n2.a * n1.b))
    {
        result = BIGGER;
    }
    else
    {
        result = EQUAL;
    }

    return result;
}
