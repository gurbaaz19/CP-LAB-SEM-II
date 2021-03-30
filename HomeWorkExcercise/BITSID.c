#include <stdio.h>

int main()
{
    int year, branch, id;
    char p = 'P', s = 'S', a = 'A', campus;
    printf("Enter BITS ID:");
    scanf("%4d%c%d%c%c%4d%c", &year, &a, &branch, &p, &s, &id, &campus);
    if (campus == 'G')
    {
        printf("Your BITS email is: ");
        printf("f%d%04d@goa.bits-pilani.ac.in\n", year, id);
    }
    else if (campus == 'P')
    {
        printf("Your BITS email is: ");
        printf("f%d%04d@pilani.bits-pilani.ac.in\n", year, id);
    }
    else if (campus == 'H')
    {
        printf("Your BITS email is: ");
        printf("f%d%04d@hyd.bits-pilani.ac.in\n", year, id);
    }
    else
    {
        printf("Enter valid id\n");
    }
}