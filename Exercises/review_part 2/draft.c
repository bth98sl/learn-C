/* Histogram of different characters in input */
#include <stdio.h>

#define MAX_CHAR_LEN 128

int main()
{
    int count[MAX_CHAR_LEN] = {0};  // Initialize all elements to 0
    int c, i;

    /* Count each character in input */
    while ((c = getchar()) != EOF)
    {
        if (c >= 0 && c < MAX_CHAR_LEN)  // Ensure valid index
        {
            count[c]++;
        }
    }

    /* Print the histogram */
    for (i = 'A'; i < MAX_CHAR_LEN; i++)
    {
        if (count[i] > 0)
        {
            printf("%c | ", i);
            for (int j = 0; j < count[i]; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}
