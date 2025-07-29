/*  Replace each string of one or more blanks by a single blank */

#include <stdio.h>

int main (void)
{
    int c, space;
    space = 0;

    while ((c = getchar()) != EOF)
    {
        // Hello        world       hien
        if (c == ' ')
        {
            space++;
            if (space > 1)
            {
                continue;
            }
        }
        else
        {
            space = 0;
        }
        putchar(c);
    }

    return 0;
}