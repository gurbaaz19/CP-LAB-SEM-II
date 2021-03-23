#include <stdio.h>

int main(void){
    float time=0.0,seconds=0.0,temp=0.0;
    int hours=0,minutes=0;
    printf("Enter time in seconds:");
    scanf("%f",&time);

    minutes=time/60;
    seconds=time%(float)60;
    hours=minutes/60;
    minutes=minutes%60;

    printf("%d:%d:%f\n",hours,minutes,seconds);
    return 0;
}