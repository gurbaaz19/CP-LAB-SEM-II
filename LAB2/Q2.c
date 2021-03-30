#include <stdio.h>

int main()
{
    char input;
    printf("Enter:");
    scanf("%[bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ]", &input); // [^...] was not used because it could not rule out other characters and numerical inputs. So domain was restricted to these 42 consonant characters
    printf("Stored value: %c\n", input);
    return 0;
}