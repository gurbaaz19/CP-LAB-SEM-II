#include <stdio.h>
int g = 10;
int main()
{
    printf("g=%d\n", g);
    {
        int g = 20;
        printf("g=%d\n", g);
    }
    {
        int g = 30;
        printf("g=%d\n", g);
    }
    {
        int g = 40;
        printf("g=%d\n", g);
    }
    return 0;
}
