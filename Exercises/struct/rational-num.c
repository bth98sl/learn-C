/*  Write a "main function" to check out the correctness of your function
    Print the results before and after any operation that you do
*/

#include <stdio.h>
#include <stdbool.h>

typedef struct
{
    int a; //numerator
    int b; //denominator
} Rational;

Rational add(Rational n1, Rational n2);
Rational sub(Rational n1, Rational n2);
Rational mul(Rational n1, Rational n2);
Rational div(Rational n1, Rational n2);

Rational smaller(Rational n1, Rational n2);
Rational bigger(Rational n1, Rational n2);
float equal_or_not(Rational n1, Rational n2);

int main (void)
{
    Rational num1, num2;
    Rational sum, minus, time, ratio;
    Rational min, max;

    printf("Input the first fraction: ");
    scanf("%d/%d", &num1.a, &num1.b);

    printf("Input the second fraction: ");
    scanf("%d/%d", &num2.a, &num2.b);

    sum = add(num1, num2);
    minus = sub(num1, num2);
    time = mul(num1, num2);
    ratio = div(num1, num2);

    min = smaller(num1, num2);
    max = bigger(num1, num2);

    printf("min = %d/%d\n", min.a, min.b); 
    printf("max = %d/%d\n", max.a, max.b);

    if (equal_or_not(num1, num2))
    {
        printf("Two fraction is equal\n");
    }
    else
    {
        printf("Two fraction is not equal\n");
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


Rational smaller(Rational n1, Rational n2)
{
    Rational min;

    if (n1.a * n2.b < n2.a * n1.b)
    {
        min = n1;
    }
    else
    {
        min = n2;
    }
    return min;
}

Rational bigger(Rational n1, Rational n2)
{
    Rational max;
    if (n1.a * n2.b > n1.b * n2.a)
    {
        max = n1;
    }
    else
    {
        max = n2;
    }
    return max;
}

float equal_or_not(Rational n1, Rational n2)
{
    float equal = false;

    if (n1.a * n2.b == n1.b * n2.a)
    {
        equal = true;
    }
    return equal;
}
