#include <stdio.h>

int main(){
    int input=0,x=0;
    printf("Enter a 4 digit number\n");
    scanf("%4d",&input);
    printf("\n"); // For neat view

        x=input;
        x=input%10000;
        printf("%4d\n",x);

        x=input;
        x=input%(int)1000;
        printf("%4d\n",x);

        x=input;
        x=input%(int)100;
        printf("%4d\n",x);

        x=input;
        x=input%10;
        printf("%4d\n",x);

    return 0;
}