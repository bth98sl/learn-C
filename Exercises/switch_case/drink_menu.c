/*  Display the drink menu. User choose a number that will be display the name of drink
 *  Menu:
 *  1 - Milk tea
 *  2 - Coffee
 *  3 - Orange fruit
 *  4 - Water
 */

#include <stdio.h>

int main(void)
{
    int choice;

    printf("Enter number to choice the drink: ");
    scanf("%d", &choice);

    while (choice < 1 || choice > 4)
    {
        printf("Enter number again. Plase enter number 1 - 4: ");
        scanf("%d", &choice);
    }

    switch (choice)
    {
    case 1:
        printf("Milk tea");
        break;
    case 2:
        printf("Coffee");
        break;
    case 3:
        printf("Orange");
        break;
    case 4:
        printf("Water");
        break;
    }

    return 0;
}