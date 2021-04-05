#include <stdio.h>

int main(){
    float a,b,c;
    printf("Enter the 3 sides: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a==b && b==c){
        printf("Equilateral\n");
    }

    else if(a==b || b==c || a==c){
        printf("Isoseceles\n");
    }

    else{
        printf("Scalene\n");
    }
    return 0;
}