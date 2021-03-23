#include <stdio.h>

int main(void)
{
    printf("%ld\n", 4294967293); //%d changed to %ld

    printf("\n\n");//Giving space between both parts

    printf("%5d\n", 1);
    printf("%6d\n", 111);
    printf("%7d\n", 11111);
    printf("%8d\n", 1111111);
    printf("%9d\n", 111111111);
    return 0;
}