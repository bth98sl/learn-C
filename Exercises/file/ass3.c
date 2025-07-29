/*  Write a program in C to write multiple lines to a text file 

*/

#include <stdio.h>

int main(void)
{
    FILE *fp;
    int no_line;
    char str[100];
    char fname[100] = "test.txt";

    printf("Input the number of lines to be written: ");
    scanf("%d", &no_line);

    fp = fopen(fname, "w");
    fputs("the content of the file test.txt are: \n", fp);
    for (int i = 1; i <= no_line; i++)
    {
        fprintf(fp, "test line %d\n", i); // write data to file text
    }

    fclose(fp);

    return 0;
}