#include <stdio.h>

int main()
{
    printf("Enter your date of birth in dd:mm:yyyy format:- ");
    int dob, birth_month, birth_year;
    scanf("%d:%d:%4d", &dob, &birth_month, &birth_year);
    printf("Day %d, month %d and year %d\n", dob, birth_month, birth_year);
    return 0;
}