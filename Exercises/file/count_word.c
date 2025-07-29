/*  Write a program in C to count the number of words and characters in a file.
    Test Data :
    Input the file name to be opened : test.txt
*/

#include <stdio.h>

int main(void)
{
    FILE *fp;

    char filename[100] = "test.txt";
    char content;
    int count_word = 0;
    int space = 0;
    int count_character = 0;

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("The file was opened unsucessfull");
    }
    else
    {
        //fputs("The content of the file test.txt: ", fp);
        do
        {
            content = fgetc(fp);
            if ((content != '\n') && (content != '\r')) //count characters
            {
                //printf("%c = ", content);
                count_character++;
                //printf("%d\n", count_character);
            } 
            if (content == ' ')
            {
                space++;
                //printf("space = %d\n", space);
                if (space == 1)
                {
                    count_word++;
                    //printf("word = %d\n", count_word);
                }
            }
            else// ((content >= 'a') && (content <= 'z') && (content <= 0))
            {
                space = 0;
                //printf("%c = %d\n", content, space);
            }
            
        } while (content != EOF);
        
    }
    printf("The number of character is: %d\n", count_character);
    printf("The number of word is: %d", count_word);

    fclose(fp);

    
    return 0;
}