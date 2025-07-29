/*  - finding the letter {a-z |A-Z| ' '} appears most 
    - printf its valie and the number of its appearances
*/

#include <stdio.h>

int main(void)
{
    char array_letter[] = {'K', 'O', ' ', 'R', 'c', ' ', 'k', 'r'};
    int count[53] = {0};
    int i, maxIndex;

    for ( i = 0; i < 8; i++)
    {
        if ((array_letter[i] >= 'A') && (array_letter[i] <= 'Z'))
        {
            count[array_letter[i] - 'A']++;
        }
        else if ((array_letter[i] >= 'a') && (array_letter[i] <= 'z'))
        {
            count[array_letter[i] - 'a' + 26]++;
        }
        else if (array_letter[i] == ' ')
        {
            count[52]++;
        }
    }
    
    for (i = 0; i < 53; i++)
    {
        if (count[i] > count[maxIndex])
        {
            maxIndex = i;
        }
    }
    
    if (maxIndex < 26)
    {
        printf("Letter %c occur %d\n", maxIndex + 'A', count[maxIndex]);
    }
    else if (maxIndex < 52)
    {
        printf("Letter %c occur %d\n", maxIndex - 26 + 'a', count[maxIndex]);
    }
    else
    {
        printf("Letter ' ' occur %d\n", count[maxIndex]);
    }


    return 0;
}