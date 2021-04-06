#include <stdio.h>

int main()
{
    int num1, num2;
    char operation;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter operation: ");
    scanf(" %c", &operation);

    switch (operation)
    {
    case '+':
        printf("Output: %d\n", num1 + num2);
        break;

    case '-':
        printf("Output: %d\n", num1 - num2);
        break;

    case '*':
        printf("Output: %d\n", num1 * num2);
        break;

    case '/':
        switch (num2)
        {
        case 0:
            printf("ERROR: Divide by zero\n");
            break;

        default:
            printf("Output: %d\n", num1 / num2);
            break;
        }
        break;

    default:
        printf("No valid operation selected\n");
        break;
    }

    return 0;
}