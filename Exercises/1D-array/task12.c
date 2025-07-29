#include <stdio.h>

#define SIZE 7

int main(void)
{
    float temperature[SIZE];
    int i;
    float sum = 0;
    float average;
    int hottest_day = 0;
    int coldest_day = 0;


    for (i = 0; i < SIZE; i++)
    {
        printf("enter the temp at day %d: ", i+1);
        scanf("%f", &temperature[i]);
    }

    for (i = 0; i < SIZE ; i++)
    {
        sum += temperature[i];
    }
    average = sum / SIZE;
    for ( i = 0; i < SIZE; i++)
    {
        if (temperature[i] > temperature[hottest_day] )
        {
            hottest_day = i;
            //printf("the hottest day of the week was at day %d", hottest_day);
        }
        if (temperature[i] < temperature[coldest_day])
        {
            coldest_day = i;
            //printf("the coldest day of the week was at day %d", coldest_day);
        }
    }
    printf("the average temp = %f\n", average);
    printf("the hottest day of the week was at day %d\n", hottest_day+1);
    printf("the coldest day of the week was at day %d\n", coldest_day+1);


    

    
    return 0;
}