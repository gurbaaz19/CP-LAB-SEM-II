#include <stdio.h>

int main()
{
    char c;
    printf("Enter an aplhabet: ");
    scanf("%c", &c);

    switch (c)
    {
    case 'a':
        printf("You have entered vowel\n");
        break;

    case 'e':
        printf("You have entered vowel\n");
        break;

    case 'i':
        printf("You have entered vowel\n");
        break;

    case 'o':
        printf("You have entered vowel\n");
        break;

    case 'u':
        printf("You have entered vowel\n");
        break;

    case 'A':
        printf("You have entered vowel\n");
        break;

    case 'E':
        printf("You have entered vowel\n");
        break;

    case 'I':
        printf("You have entered vowel\n");
        break;

    case 'O':
        printf("You have entered vowel\n");
        break;

    case 'U':
        printf("You have entered vowel\n");
        break;

    default:
        printf("Not a vowel\n");
        break;
    }

    return 0;
}