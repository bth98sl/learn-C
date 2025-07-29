#include<stdio.h>

int main()

{
    char num;
    
    printf("enter num: ");
    scanf("%c", &num);
    
    switch (num)
    {
        case '0':
        printf("binary: 0000");
        break;
        case '1':
        printf("binary: 0001");
        break;
        case '2':
        printf("binary: 0010");
        break;
        case '3':
        printf("binary: 0011");
        break;
        case '4':
        printf("binary: 0100");
        break;
        case '5':
        printf("binary: 0101");
        break;
        case '6':
        printf("binary: 0110");
        break;
        case '7':
        printf("binary: 0111");
        break;
        case '8':
        printf("binary: 1000");
        break;
        case '9':
        printf("binary: 1001");
        break;
        case 'A':
        case 'a':
        printf("binary: 1010");
        break;
        case 'B':
        case 'b':
        printf("binary: 1011");
        break;
        case 'C':
        case 'c':
        printf("binary: 1100");
        break;
        case 'D':
        case 'd':
        printf("binary: 1101");
        break;
        case 'E':
        case 'e':
        printf("binary: 1110");
        break;
        case 'F':
        case 'f':
        printf("binary: 1111");
        break;
    }
    return 0;
}