#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("\n");
    for (i = 1; i < n + 1; i++)
    {
        for (j = 1; j < i + 1; j++)
        {
            for (k = 1; k < j + 1; k++)
            {
                printf("%d\t", i);
            }
            printf("\n");
        }
        for (j = i-1; j >0; j--)
        {
            for (k = j; k >0; k--)
            {
                printf("%d\t", i);
            }
            printf("\n");
        }
    }

    return 0;
}