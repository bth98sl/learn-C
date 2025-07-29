#include <stdio.h>

int main(void)
{
    int ch;

    printf("Enter an character: ");
    scanf("%c", &ch);

    printf("The ASCII of %c: %d\n", ch, ch);

    return 0;
}
