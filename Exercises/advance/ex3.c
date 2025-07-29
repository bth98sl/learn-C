#include <stdio.h>

int main(void)
{
    int number;
    int c;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Ở đây: dùng if hoặc while để lọc '\n'
    // (Mới đầu thử if trước nhé!)

    c = getchar();
    if (c == '\n') // CHỈ kiểm tra 1 lần
    {
        // bỏ qua
    }

    printf("Enter a character: ");
    c = getchar();
    printf("You entered: %c\n", c);

    return 0;
}
