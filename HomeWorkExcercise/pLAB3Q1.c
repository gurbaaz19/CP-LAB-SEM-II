#include <stdio.h>

int main()
{
    int x, y, z, flag;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    printf("z: ");
    scanf("%d", &z);
    printf("flag: ");
    scanf("%d", &flag);
    int expr1 = !(flag || x > z && y > z);
    printf("%d\n", expr1);
    int expr2 = !(flag || !(!(x > z) || !(y > z)));
    printf("%d\n", expr2);

    if (expr1 == expr2)
    {
        printf("Both are equal\n");
    }
    else
    {
        printf("Both are not equal\n");
    }
    return 0;
}