#include <stdio.h>

int main()
{

    double f;
    int n = 0;
    scanf("%lf", &f);
    while (f >= 0.25)
    {
        f -= 0.25;
        n += 1;
    }
    while (f >= 0.10)
    {
        f -= 0.10;
        n += 1;
    }
    while (f >= 0.05)
    {
        f -= 0.05;
        n += 1;
    }
    while (f >= 0.01)
    {
        f -= 0.01;
        n +=1;
    }
    printf("%d\n", n);

    return 0;
}