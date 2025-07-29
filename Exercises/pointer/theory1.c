#include <stdio.h>

// void changeValue(int *p)
// {
//     *p = 20;  // Thay đổi giá trị của biến từ con trỏ
//     printf("%d\n", *p);
// }

int main()
{
    int num = 10;
    int *p = &num;

    printf("%d\n", num);
    printf("%p\n", p);    // pointer's value is address of variable
    printf("%p\n", &num); // adress of num
    printf("%d\n", *p);   // value of num
    printf("%p\n", &p);

    // int n = 10;
    // int *p = &n;

    // printf("%p\n", &n);

    // printf("%d\n", *p);

    // changeValue(&n);  // pass address of n
    // //*p = &n = 20

    // printf("%d\n", n);  // result: 20

    return 0;
}

