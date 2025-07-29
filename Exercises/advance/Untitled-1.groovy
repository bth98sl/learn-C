#include <stdio.h>

#define MAX_LINE 1000
#define FOLD_WIDTH 10  // Cắt sau số cột này

int get_line(char *line, int limit_line);

int main(void)
{
    int len, i;
    char arr[MAX_LINE];

    while ((len = get_line(arr, MAX_LINE)) > 0)
    {
        int start = 0;

        while (start < len)
        {
            // Tính vị trí cắt
            int fold_pos = start + FOLD_WIDTH;

            // Nếu đoạn còn lại ngắn hơn FOLD_WIDTH thì chỉ cần in hết
            if (fold_pos >= len)
            {
                printf("%s", arr + start);
                break;
            }

            // Nếu có khoảng trắng trong đoạn cắt, tìm vị trí chia
            int i = fold_pos;
            while (i > start && arr[i] != ' ' && arr[i] != '\t')
            {
                i--;
            }

            if (i == start)
            {
                // Nếu không có khoảng trắng, cắt đúng tại vị trí FOLD_WIDTH
                i = fold_pos;
            }

            // In phần đã cắt và chuyển sang phần tiếp theo
            for (int j = start; j < i; j++)
            {
                printf("%c", arr[j]);
            }
            printf("\n");

            // Bỏ qua khoảng trắng sau khi cắt
            while ((arr[i] == ' ' || arr[i] == '\t') && i < len)
            {
                i++;
            }

            // Cập nhật vị trí bắt đầu cho vòng lặp tiếp theo
            start = i;
        }
    }

    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}
