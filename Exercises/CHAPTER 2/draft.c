
#include <stdio.h>

char* beep()
{
    return "beep!";
}

int main(void)
{
    char* x;
    x = beep();
    printf("%s", beep());
}
