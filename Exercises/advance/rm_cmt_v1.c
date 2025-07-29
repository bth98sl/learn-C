#include <stdio.h>

#define NORMAL              0
#define IN_STRING           1
#define IN_CHAR             2
#define IN_LINE_COMMENT     3
#define IN_BLOCK_COMMENT    4

int main(void)
{
    int c, next;
    int prev = 0;
    int cnt = 0;
    int state = NORMAL;

    while ((c = getchar()) != EOF)
    {
        if (state == NORMAL)
        {
            if (c == '"')
            {
                putchar(c);
                state = IN_STRING;
            }
            else if (c == '\'') //a single quote
            {
                    putchar(c);
                state = IN_CHAR;
            }
            else if (c == '/')
            {
                next = getchar();
                if (next == '/')
                {
                    state = IN_LINE_COMMENT;
                }
                else if (next == '*')
                {
                    state = IN_BLOCK_COMMENT;
                }
                else
                {
                    putchar(c);
                    putchar(next);
                }
            }
            else
            {
                putchar(c);
            }
        }
        else if (state == IN_STRING)
        {
            putchar(c);
            if (c == '"')
            {
                state = NORMAL;
            }
        }
        else if (state == IN_CHAR)
        {
            putchar(c);
        }
        else if (state == IN_BLOCK_COMMENT)
        {
            if (prev == '*' && c == '/')
            {
                state = NORMAL;
            }
            prev = c;
        }
        else if (state == IN_LINE_COMMENT)
        {
            if (c == '/')
            {
                state = NORMAL;
            }
        }
    }

    return 0;
}