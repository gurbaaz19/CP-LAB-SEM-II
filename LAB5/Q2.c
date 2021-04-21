#include <stdio.h>

int gcd(int x, int y);
int main()
{
    int i = -1, A[100] = {0}, count = 0;
    printf("Enter integers : ");
    do
    {
        i++;
        scanf(" %d", &A[i]);
    } while (A[i] > 0);

    int ans = gcd(A[0], A[1]);
    i = 2;
    do
    {
        ans = gcd(ans, A[i]);
        i++;
    } while (A[i] > 0);

    printf("GCD : %d\n", ans);

    return 0;
}

int gcd(int x, int y)
{
    int gcd = 0;
    for (int i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}