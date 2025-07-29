#include <stdio.h>
#define MAXLINE 1000        /*  maximum input line size  */

/* definition variable before main */
int max;                    /* maximum length seen so far */
char line[MAXLINE];         /* current input line */
char longest[MAXLINE];       /* longest line saved here */

/* definition of fuction */
int get_line(void);
void copy(void);

/* print longest input line; specialized version */
int main(void)
{
    int len;                                /* current line length */
    extern int max;                         /* maxinum length seen so far */
    extern char longest[];                  /* longest line saved here */   /* local variable */

    max = 0;
    while ((len = get_line()) > 0)
    {
        if (len > max)
        {
            max = len;
            copy();
        }
    }
    if (max > 0)            /* there was a line */
    {
        printf("%s", longest);
    }

    return 0;
}

/*  getline: read a line into s, return length */
int get_line(void)
{
    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        line[i] = c;
    }
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';

    return i;
}

/*  copy: copy 'from' into 'to'; assume to is big enough; specialized version */
void copy(void)
{
    int i = 0;
    extern char line[], longest[];

    while ((longest[i] = line[i]) != '\0')
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
