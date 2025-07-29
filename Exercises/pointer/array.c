#include <stdio.h>

int main(void)
{
    int arr[100] = {0xAABB, 1};

    char *ptr = arr;

    printf("value = %d\n", *ptr);

    return 0;
}