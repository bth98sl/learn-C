#include <stdio.h>

int main (void)
{
    int size[5];
    int i;
    int max_index = 0;

    for (i = 0; i <= 5; i++)
    {
        printf("element %d: ", i+1);
        scanf("%d", &size[i]);
    }
    for (i = 0; i <= 5; i++)
    {
        if (size[i] > size[max_index])
        {
            max_index = i;
            //printf("index of max value: %d\n", max_index);
        }
    }
    //printf("max value is: %d\n", max);
    printf("index of max value: %d\n", max_index);

    return 0;
}