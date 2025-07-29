#include <stdio.h>

// Hàm nhận mảng dưới dạng con trỏ
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main()
{
    int arr[4] = {3, 6, 9, 12};

    printArray(arr, 4); // Truyền mảng vào hàm

    return 0;
}

// *(ptr): Lấy giá trị tại vị trí hiện tại của ptr.
// *(ptr + i): Lấy giá trị tại phần tử cách i vị trí từ ptr.
// *(ptr + i) linh hoạt hơn khi duyệt mảng bằng con trỏ.

// ptr lưu địa chỉ của x, nên ptr == &x.
// &ptr là địa chỉ của chính ptr, khác với &x.
// *ptr là giá trị của x, tức là *ptr == x.