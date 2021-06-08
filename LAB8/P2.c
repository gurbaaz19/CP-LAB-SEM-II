#include <stdio.h>

typedef int Arr1D[2];
typedef Arr1D Arr2D[3];

void set(int *x)
{
    *x = 1;
}

void reset(int *x)
{
    *x = -1;
}

int main()
{
    Arr2D A;
    int i = 0, j = 0;

    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 2; b++)
        {
            reset(&A[a][b]);
        }
    }

    printf("Enter i: ");
    scanf(" %d", &i);

    printf("Enter j: ");
    scanf(" %d", &j);

    set(&A[i-1][j-1]);

    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 2; b++)
        {
            printf("%d ", A[a][b]);
        }
        printf("\n");
    }

    return 0;
}