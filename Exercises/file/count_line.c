/*  Number of lines in a file   */

#include <stdio.h>

int main(void)
{
    char content;
    int countLine = 1;

    FILE *fp;

    fp = fopen("test.txt", "r");

    if (fp != NULL)
    {
        while ((content = fgetc(fp)) != EOF)
        {
            if (content == '\n')
            {
                countLine++;
            }
        }

        /*do
        {
            content = fgetc(fp);
            if (content == '\n')
            {
                count++;
                printf("count = %d\n", count);
            }
        } while (content != EOF); */

        printf("Number of lines in file = %d", countLine);
    }
    
    fclose(fp);
    
    return 0;
}