#include <stdio.h>

int main()
{
    int age;
    char sts;
    printf("Age:");
    scanf("%d", &age);

    if (age > 59)
    {
        printf("status(W is working)(N is not working): ");
        scanf(" %c", &sts);
        if (sts == 'W')
        {
            printf("Working Senior\n");
        }
        else
        {
            printf("Retired Senior\n");
        }
    }
    else if (age > 20)
    {
        printf("Adult\n");
    }
    else if (age > 12)
    {
        printf("Teen\n");
    }
    else
    {
        printf("Child\n");
    }

    return 0;
}