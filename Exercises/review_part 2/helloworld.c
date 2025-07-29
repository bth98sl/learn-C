// C program to illustrate  \b escape sequence
#include <stdio.h>
#include <string.h>

int main(void)
{
    // \b - backspace character transfers
    // the cursor one character back with
    // or without deleting on different
    // compilers.
    char greeting[100] = "Hello Hi \b\b\bGeeks";

    //scanf("%s", greeting);
    //printf("Hello \b\b\b\b\b\bHi Geeks");
    printf("%s", greeting);

    return (0);
}