/*  function getline    */

#include <stdio.h>
#define MAXLINE 1000        /*  maximum input line size  */

int get_line(char *line, int maxline);
void copy(char *to, char *from);
// void print_from(char from[]);

int main(void)
{
    int len;                                /* current line length */
    int max;                                /* maxinum length seen so far */
    char line[MAXLINE];                     /* current input line */   /* local variable */
    char longest[MAXLINE];                  /* longest line saved here */   /* local variable */

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            // print_from(line);
            copy(longest, line);
        }
    }
    if (max > 0)            /* there was a line */
    {
        printf("%s", longest);
    }

    return 0;
}

/*  getline: read a line into s, return length */

int get_line(char *s, int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}

/*  copy: copy 'from' into 'to'; assume to is big enough */

void copy(char *to, char *from)
{
    int i = 0;

    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}

// void print_from(char from[])
// {
//     int i = 0;
//     while (from[i] != '\0')
//     {
//         printf("from[%d] = %c\n", i, from[i]);
//         i++;
//     }
// }
