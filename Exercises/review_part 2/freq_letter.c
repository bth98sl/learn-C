/*  counts the occurrences of lowercase letters (a-z)
    displayed in the order they appear in the input
*/

#include <stdio.h>
#define SIZE    26  // Number of lowercase letters

int main(void)
{
    int c, i, j;
    int count_char[SIZE];       // Initialize all counts to 0
    int appeared[SIZE];         // Track if a letter has appeared
    char order[SIZE];           // Store the order of first occurrences
    int index = 0;              // Index for tracking unique letters

    for ( i = 0; i < SIZE; i++)
    {
        count_char[i] = 0;
        appeared[i] = 0;
    }

    // Read input and count letter occurrences
    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            if (appeared[c - 'a'] == 0)  // Check if letter has appeared before
            {
                appeared[c - 'a'] = 1; // Mark as appeared
                order[index++] = c; // Store it in order array
            }
            count_char[c - 'a']++; // Count occurrences
        }
    }

    // Print the histogram in the order of appearance
    for (i = 0; i < index; i++)
    {
        char letter = order[i];     // Get the letter in order
        printf("%c| ", letter);     // Print letter with a pipe

        for (j = 0; j < count_char[letter - 'a']; j++)
        {
            printf("*");            // Print stars based on occurrences
        }
        printf("\n");
    }

    return 0;
}