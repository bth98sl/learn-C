/*  write a program that:
    1. reads a string from the user
    2. finds out the number of words
    3. prints the result to the screen
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[30];
    int countWord = 0;

    int i; 
    printf("Please enter a string/text: ");
    gets(sentence);

    for ( i = 0; i < strlen(sentence); i++)
    {
        if (sentence[i] == ' ')
        {
            countWord++;
        }
    }
    countWord++;
    printf("Total amount of words in '%s' = %d\n", sentence, countWord);

    return 0;
}
