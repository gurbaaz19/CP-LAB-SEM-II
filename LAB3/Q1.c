#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);
    int a = x, b = y, c = z;

    if (x > y)
    {
        if (x > z && y >= z)
        {
            c = x;
            b = y;
            a = z;
        }
        else if (x > z && z >= y)
        {
            c = x;
            b = z;
            a = y;
        }
        else if (z >= x)
        {
            c = z;
            b = x;
            a = y;
        }
    }
    else
    {
        if (y > z && x >= z)
        {
            c = y;
            b = x;
            a = z;
        }
        else if (y > z && z >= x)
        {
            c = y;
            b = z;
            a = x;
        }
        else if (z >= y)
        {
            c = z;
            b = y;
            a = x;
        }
    }

    printf("Integers in increasing order: %d %d %d\n", a, b, c);
    return 0;
}