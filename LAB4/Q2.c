#include <stdio.h>

int main()
{
    int m, n, i, j, k;

    printf("Enter an integer: ");
    scanf("%d", &m);

    if (m % 2 == 0 || m<0)
    {
        printf("Enter a positive odd Number\n");
    }

    else
    {
        n = m - 2;

        printf("Output:\n");

        for (i = n, k = 1; i > 0; i -= 2, k += 1)
        {
            printf("%*c", k, '*');
            for (j = i; j > 0; j--)
            {
                printf("_");
            }
            printf("*\n");
        }

        printf("%*c\n", (m+1)/2, '*');

        for (i = 1, k = (m-1)/2; i < n + 1; i += 2, k -= 1)
        {
            printf("%*c", k, '*');
            for (j = 1; j < i + 1; j++)
            {
                printf("_");
            }
            printf("*\n");
        }
    }
    return 0;
}