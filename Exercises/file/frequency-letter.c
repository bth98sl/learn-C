/*  Read the filename from the user
    Calculate and print the number of times each lowercase letter appear in the file
*/

#include <stdio.h>
#include <string.h>

#define SIZE    26u

int main(void)
{
    FILE *fp;

    char filename[100];

    printf("Enter file name: ");
    scanf("%s", filename);

    int content;
    char count_arr[SIZE] = {0};
    //char str[] = "abcdefghijklmnopqrstuvwxyz";
    int i = 0;

    fp = fopen(filename, "r");

    if (fp != NULL)
    {
        while ((content = fgetc(fp)) != EOF)
        {
            if ((content >= 'a') && (content <= 'z'))
            {
                count_arr[content - 'a']++;
                // printf("letter %c = %d\n", content, count_arr[content - 'a']);
            }
        }
    }
    else
    {
        printf("The file was opened unsucessfull");
    }
    
    fclose(fp);

    for (i = 'a'; i <= 'z'; i++)
    {
        if (count_arr[i - 'a'] > 0)
        {
            printf("%c = %d\n", i, count_arr[i - 'a']);
        }
    }

    // for (i = 0; i <= SIZE; i++)
    // {
    //     if (count_arr[i] != 0)
    //     {
    //         printf("%c: %d times\n", str[i], count_arr[i]);
    //     }
    // }

    return 0;
}