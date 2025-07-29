#include <stdio.h>

int main(void)
{
    FILE *fp;

    fp = fopen("filename.txt", "r");
    
    // store the content of the file
    char myString[100]; 

    // read only the first line of the file and store it inside myString
    //fgets(myString, 100, fp); //<where_store_data>, <size>, <pointer to file>

    if (fp != NULL)
    {
        // read the whole lines in the file by using while loop
        while(fgets(myString, 100, fp))
        {
            printf("%s", myString);
        }
    }
    else
    {
        printf("Not able to open the file");
    }

    fclose(fp);

    return 0;
}