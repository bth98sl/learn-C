/*  findding the uppercase letter that appear most
*/

#include <stdio.h>

int main(void)
{
    char array_letter[] = {'K', 'I', 'B', 'R', 'C', 'K', 'Z', 'M'};
    int count[26] = {0};
    int i;
    int maxIndex = 0;

    for ( i = 0; i < 8; i++)
    {
        count[array_letter[i] - 'A']++; // count[arr[i] - 97]++
    }
    
    for (i = 0; i < 26; i++)
    {
        if (count[i] > count[maxIndex])
        {
            maxIndex = i;
        }
    }
    printf("Letter %c occur %d\n", maxIndex + 'A', count[maxIndex]);

    return 0;
}