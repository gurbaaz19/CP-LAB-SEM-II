#include <stdio.h>

int main()
{
    int rows, columns;
    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &rows, &columns);

    int matrixA[100][100];
    for (int i = 0; i < rows; i++)
    {
        printf("\nEnter row %d\n", i + 1);
        for (int j = 0; j < columns; j++)
        {
            scanf(" %d", &matrixA[i][j]);
        }
    }

    // printf("\n");

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < columns; j++)
    //     {
    //         printf("%d ", matrixA[i][j]);
    //     }
    //     printf("\n");
    // }

    int matrixB[100][100];

    for (int j = 0; j < columns; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            matrixB[j][i] = matrixA[rows - i - 1][columns - j - 1];
        }
    }

    printf("\nDiagonal flip of the matrix is\n");
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", matrixB[i][j]);
        }
        printf("\n");
    }

    return 0;
}