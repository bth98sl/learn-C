/*  Number of characters in a file  */

#include <stdio.h>

int main(void)
{
    FILE *fp;
    
    char inputString;
    int count = 0;

    fp = fopen("example.txt", "r");
    
    if (fp != NULL)
    {
        while ((inputString = fgetc(fp)) != EOF)
        {
            if ((inputString != '\n') && (inputString != '\r'))
            {
                //printf("%c = ", inputString);
                count++;
            }
        }
    }
    printf("Number of characters in file is: %d\n", count);
    fclose(fp);

    return 0;
}