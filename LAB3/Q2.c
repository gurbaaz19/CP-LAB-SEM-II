#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a >= b && c >= d)
    {
        if (a > c)
        {
            printf("Maximum: %d\n", a);
        }
        else
        {
            printf("Maximum: %d\n", c);
        }
    }
    else if (a >= b && d >= c)
    {
        if (a > d)
        {
            printf("Maximum: %d\n", a);
        }
        else
        {
            printf("Maximum: %d\n", d);
        }
    }
    else if (b >= a && c >= d)
    {
        if (b > c)
        {
            printf("Maximum: %d\n", b);
        }
        else
        {
            printf("Maximum: %d\n", c);
        }
    }
    else if (b >= a && d >= c)
    {
        if (b > d)
        {
            printf("Maximum: %d\n", b);
        }
        else
        {
            printf("Maximum: %d\n", d);
        }
    }

    return 0;
}