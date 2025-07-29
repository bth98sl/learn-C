/* Accessing Union members */

#include <stdio.h>

union Job
{
    float salary;
    int workersNo;
} j;

int main(void)
{
    j.salary = 12.3;

    // when j.workerNo is assign a value
    // j.salary will no longer hold 12.3 => be changed
    j.workersNo = 100;

    printf("Salary = %.1f\n", j.salary);
    printf("No.workers = %d", j.workersNo);

    return 0;
}