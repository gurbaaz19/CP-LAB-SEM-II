#include <stdio.h>

int main()
{
    int N = 1;
    printf("Enter number of elements: ");
    scanf("%d", &N);

    int data[N];
    {
        int i = 0;
        while (i < N)
        {
            printf("Enter element number %d: ", i + 1);
            scanf(" %d", &data[i]);
            i++;
        }
    }

    int max = data[0];

    for (int i = 0; i < N; i++)
    {
        if (max <= data[i])
        {
            max = data[i];
        }
    }

    int count[max + 1];
    for (int j = 0; j <= max; j++)
    {
        count[j] = 0;
    }

    {
        int i = 0;
        while (i <= max)
        {
            for (int j = 0; j < N; j++)
            {
                if (data[j] == i)
                {
                    count[i]++;
                }
            }
            i++;
        }
    }

    for (int i = 0; i < max; i++)
    {
        count[i + 1] += count[i];
    }

    int output[N];

    for (int i = N - 1; i >= 0; i--)
    {
        output[count[data[i]] - 1] = data[i];
        count[data[i]]--;
    }

    {
        int i = 0;
        while (i < N)
        {
            printf("%d ", output[i]);
            i++;
        }
    }
    printf("\n");
    return 0;
}