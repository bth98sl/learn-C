#include <stdio.h>

int main(void)
{
    int arr[10] = {0};
    int *pa;
    pa = &arr[0]; // <=> pa = arr <=> pa = &arr [assign array to pointer]

    //pa++; // pa = pa+1 -> assign new address for pointer

    //*pa = 10; // assign *pa = 10 mean arr[1] = 10;
    *(pa + 1) = 10; //tham chiếu giữ địa chỉ của pa, không gán địa chỉ mới cho pa

    printf("a[1] = %d\n", *pa);
    printf("a[1] = %d\n", *(pa + 1)); // (pa + 1 != pa)
    printf("a[0] = %d\n", arr[0]);
    printf("a[1] = %d\n", pa[1]); //arr[1]
    printf("a[1] = %d\n", arr[1]);

    return 0;
}

