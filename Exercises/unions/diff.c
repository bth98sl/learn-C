/*  difference between unions and structures */

#include <stdio.h>

union unionJob
{
    //define a union
    char name[32];
    float salary;
    int workerNo;
} uJob;

struct structJob
{
    char name[32];
    float salary;
    int workerNo;
} sJob;

int main(void)
{
    printf("Size of union = %d bytes\n", sizeof(uJob));
    printf("Size of struct = %d bytes", sizeof(sJob));

    return 0;
}

// With a union, all members share the same memory.


