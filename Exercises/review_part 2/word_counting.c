#include <stdio.h>

#define     IN      1   /*  inside a word   */
#define     OUT     2   /*  outside a word  */

int main(void)
{
    int ch, nl, nw, nc, state;

    state = OUT;
    nl = (nw = (nc = 0));

    while ((ch = getchar()) != EOF)
    {
        //hello
        ++nc;
        if (ch == '\n')
        {
            ++nl;
        }
        else if ((ch == ' ') || (ch == '\n') || (ch == '\t'))
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }

    printf("%d %d %d\n", nl, nw, nc);

    return 0;
}