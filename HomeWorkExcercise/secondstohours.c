#include <stdio.h>

int main(void){
    int hours=0,minutes=0,time=0,seconds=0,temp=0;;
    printf("Enter time in seconds:");
    scanf("%d",&time);

    minutes=time/60;
    seconds=time%60;
    hours=minutes/60;
    minutes=minutes%60;

    printf("%d:%d:%d\n",hours,minutes,seconds);
    return 0;
}