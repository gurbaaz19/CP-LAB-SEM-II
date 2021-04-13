#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter an integer: ");
    scanf("%d", &n);
    if(n>0){
    printf("Output:\n");

    for (i = n; i > 0; i--)
    {
        for (j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 2; i < n + 1; i++)
    {
        for (j = 1; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    }
    else{
        printf("Enter a positive number\n");
    }
    return 0;
}