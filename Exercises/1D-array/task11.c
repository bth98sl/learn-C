/* write a program that initializers an array of digits
   print the max digit it to the screen
*/

#include <stdio.h>

int main (void)
{
    int numbers[] = {1, 3, 7, 4, 9, 5, 7, 7, 9, 9};
    int max = 0;
    
    for (int i = 0; i < 10; i++)
    {
        //printf("n.%d: ", i);
        //scanf("%d", &numbers[i]);

        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    printf("max = %d\n", max);
    return 0;
}