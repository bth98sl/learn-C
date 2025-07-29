#include <stdio.h>

#define IN      1   /*inside word*/
#define OUT     2   /*outside word*/
int main(void)
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF)
    {
        nc++;
        if (c == '\n')
        {
            nl++;
        }
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            nw++;
        }
    }

    printf("count line = %d\n", nl);
    printf("count word = %d\n", nw);
    printf("count char = %d\n", nc);

    return 0;
}