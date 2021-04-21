#include <stdio.h>
const int flag = -152135432;

int main()
{
    int N1, N2, count = 0;

    printf("Enter size of A : ");
    scanf(" %d", &N1);
    int A[N1];
    printf("Enter A: ");

    for (int i = 0; i < N1; i++)
    {
        scanf(" %d", &A[i]);
    }

    printf("Enter size of B : ");
    scanf(" %d", &N2);
    int B[N2];
    printf("Enter B: ");

    for (int i = 0; i < N2; i++)
    {
        scanf(" %d", &B[i]);
    }
    if (N1 <= N2)
    {
        for (int i = 0; i < N1; i++)
        {
            for (int j = 0; j < N2; j++)
            {
                if (A[i] == B[j])
                {
                    B[j] = flag;
                    count++;
                    break;
                }
            }
        }

        if (count >= N1)
        {
            printf("\nYES\n");
        }
        else
        {
            printf("\nNO\n");
        }

        return 0;
    }

    else
    {
        printf("\nNO\n");
        return 0;
    }
}