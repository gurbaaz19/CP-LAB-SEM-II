#include <stdio.h>

int main()
{
    double x, cosx=1.0, k=1.0, f=1.0;
    int n;
    printf("x: ");
    scanf("%lf", &x);
    printf("n: ");
    scanf(" %d", &n);

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < i+1; j++)
        {
            k *= (-1.00) * x * x;
            f *= 2 * j;
        }
        cosx += k / f;
    }
    printf("%0.5lf\n", cosx);
}