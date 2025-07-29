#include <stdio.h>

enum Color { RED, GREEN, BLUE };

void printColor(enum Color c) 
{
    switch (c) {
        case RED:
            printf("Red\n");
            break;
        case GREEN:
            printf("Green\n");
            break;
        case BLUE:
            printf("Blue\n");
            break;
        default:
            printf("Unknown color\n");
    }
}

int main() 
{
    enum Color color = GREEN;

    printColor(color);
    
    return 0;
}