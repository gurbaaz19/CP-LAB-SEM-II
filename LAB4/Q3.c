#include <stdio.h>

int main()
{
    int balance = 0, temp = 0;
    char option;
    printf("Enter Balance: ");
    scanf("%d", &balance);

    do
    {
        printf("Enter Option: ");
        scanf(" %c", &option);
        if (option == 'A' || option == 'S')
        {
            scanf(" %d", &temp);
        }
        switch (option)
        {
        case 'A':
        {
            balance += temp;
            printf("Balance: %d\n\n", balance);
            break;
        }
        case 'S':
        {
            balance -= temp;
            printf("Balance: %d\n\n", balance);
            break;
        }
        case 'E':
        {
            printf("Exiting...\n\n");
            break;
        }
        default:
        {
            printf("Please enter a valid option\n\n");
            break;
        }
        }
    } while (option != 'E');

    return 0;
}