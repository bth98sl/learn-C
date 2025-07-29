/*  findding the lowercase letter that appear most
*/

#include <stdio.h>
#define SIZE    26u

int main(void)
{
    char array_letter[] = {'k', 'k', 'b', 'r', 'c', 'k', 'z', 'm'};
    int count[SIZE] = {0};
    int i = 0;
    int maxIndex = 0;
    //int length = sizeof(array_letter)/sizeof(array_letter[0]);

    for ( i = 0; i < SIZE; i++)
    {
        count[array_letter[i] - 'a']++;  //count[arr[i] - 97]++
    }

    for (i = 0; i < SIZE; i++)
    {
        if (count[i] > count[maxIndex])
        {
            maxIndex = i;
        }
        //printf("Letter %c occur %d\n", array_letter[i], count[array_letter[i] - 'a']);
    }
    printf("Letter %c occur %d\n", maxIndex + 'a', count[maxIndex]);

    /*while (i < length)
    {
        count[array_letter[i] - 'a']++;
        i++;
    }
    i = 0;  reset index
    while (i < length)
    {
        printf("Letter %c occur %d\n", array_letter[i], count[array_letter[i] - 'a']);
        i++;
    }*/

    return 0;
}