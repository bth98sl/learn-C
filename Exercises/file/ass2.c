/*  Write a program in C to read an existing file.
    Test Data :
    -   Input the file name to be opened : test.txt
    Expected Output :
    -   The content of the file test.txt is: This is the content of the file test.txt.   
*/

#include <stdio.h>

int main(void)
{
    FILE *fp;

    fp = fopen("test.txt", "r");

    char myChar;

    printf("The content of the file test.txt is: \n");
    // if the file exist
    if (fp != NULL)
    {
        // while(fgets(myStr, 100, fp)) // read multiple line in file
        // {
        //     printf("%s", myStr);
        // }
        while ((myChar = fgetc(fp)) != EOF) 
        {
            printf("%c", myChar);
        }

    }
    else
    {
        printf("Not able to open the file");
    }

    fclose(fp);

    return 0;
}