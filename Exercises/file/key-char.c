/*  Read the filename and certain character from the user
    Calculate and print the total appearances of the character in the file
*/

#include <stdio.h>
#include <string.h>

#define SIZE    26u

int main(void)
{
    FILE *fp;

    char filename[100];
    char any_character;

    printf("Enter any character in the file: ");
    scanf("%c", &any_character);

    printf("Enter file name: ");
    scanf("%s", filename);

    int content;
    char count_arr = 0;
    int i = 0;

    fp = fopen(filename, "r");

    if (fp != NULL)
    {
        while ((content = fgetc(fp)) != EOF)
        {
            if (content == any_character)
            {
                count_arr++;
            }
        }
        printf("letter %c = %d\n", any_character, count_arr);
    }
    else
    {
        printf("The file was opened unsucessfull");
    }
    
    fclose(fp);


    return 0;
}