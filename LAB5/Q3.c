#include <stdio.h>
//couldnt do in time F
int main()
{
    int N = 0;
    printf("Enter integer : ");
    scanf(" %d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        A[i] = i + 1;
    }
    for (int i = 1; i <= N; i++)
    {
        for(int j=1;j<i;j++)
        {
            for(int k=0;k<N;k++);
        }
    }
    return 0;
}