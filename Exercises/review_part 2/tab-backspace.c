/*  Replacing each tab by \t, each backspace by \b and each backslash by \\.
    This make tab and backspaces visible */

#include <stdio.h>

int main(void)
{
    int c;

    while((c = getchar()) != EOF)
    {
        //hello         world       Hi
        if (c == '\t')
        {
            while ((c = getchar()) == '\t');
            printf("\\t\\");
        }
        else if (c == '\b')
        {
            while ((c = getchar()) == '\b');

        }
        else if (c == '\\')
        {
            while ((c = getchar()) == '\\')
            printf("\\\\");
        }
        putchar(c);
    }

    return 0;
}