/*  Define a structure named Time with members hours, minutes, and seconds. 
    Write a C program to input two times, add them, and display the result in proper time format.  
*/

#include <stdio.h>

struct Time
{
    int hour;
    int minute;
    int second;
};

int main (void)
{
    struct Time st1, nd2, res;

    printf("Time: ");
    scanf("%d %d %d", &st1.hour, &st1.minute, &st1.second);

    printf("Time: ");
    scanf("%d %d %d", &nd2.hour, &nd2.minute, &nd2.second);
    
    printf("Display time: %d:%d:%d\n", st1.hour, st1.minute, st1.second);
    printf("Display time: %d:%d:%d ", nd2.hour, nd2.minute, nd2.second);
    
    //Calculate two times
    res.second = st1.second + nd2.second;
    res.minute = st1.minute + nd2.minute + (res.second / 60);
    res.hour = st1.hour + nd2.hour + (res.minute /60);

    //Adjust time
    res.second %= 60;
    res.minute %= 60;
    
    printf("result time : %d:%d:%d", res.hour, res.minute, res.second);

    return 0;
}