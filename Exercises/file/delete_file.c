/*  Delete a specific line from a file  */

#include <stdio.h>
#define SIZE    1000
int main(void)
{
    FILE *fp;

    char content[SIZE];
    int count_line = 0;
    int remove_line;
    
    printf("enter line you want to remove: ");
    scanf("%d", &remove_line);

    fp = fopen("test.txt", "r");

    if (fp != NULL)
    {
        while (fgets(content, SIZE, fp))
        {
            //printf("%s", content);
            count_line++;
            if ((count_line != remove_line))
            {
                printf("%s", content);
            }
        }
    }

    fclose(fp);

    return 0;
}