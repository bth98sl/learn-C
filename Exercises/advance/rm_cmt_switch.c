#include <stdio.h>
#define NORMAL              1   /* inside a word */
#define IN_STRING           2   /* inside a string */
#define IN_CHAR             3   /* inside a character */
#define IN_LINE_COMMENT     4   /* inside comment */
#define IN_BLOCK_COMMENT    5   /* inside comment */

int main(void)
{
    int c;
    int state;
    int next;
    int count = 0;

    state = NORMAL; //reset state
    while ((c = getchar()) != EOF)
    {
        switch (state)
        {
        case NORMAL:
            if (c == '/')
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
            }
            else if (c == '"')
            {
                putchar(c);
                state = IN_STRING;
            }
            else if (c == '\'')
            {
                putchar(c);
                state = IN_CHAR;
            }
            else
            {
                putchar(c);
            }
            break;
        case IN_LINE_COMMENT:
            if (c == '\n')
            {
                putchar(c);
                state = NORMAL;
            }
            break;
        case IN_BLOCK_COMMENT:
            if (c == '*')
            {
                next = getchar();
                if (next = '/')
                {
                    state = NORMAL;
                }
            }
            break;
        case IN_STRING:
            putchar(c);
            if (c == '\\') //escape
            {
                next = getchar();
                putchar(next);
            }
            else if (c == '"')
            {
                state = NORMAL;
            }
            break;
        case IN_CHAR:
            putchar(c);
            if (c == '\\')
            {
                next = getchar();
                putchar(next);
            }
            else if (c == '\'')
            {
                state = NORMAL;
            }
            break;
        }
    }

    return 0;
}
