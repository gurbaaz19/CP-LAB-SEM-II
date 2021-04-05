#include <stdio.h>

int main(){
    int x,y,z;
    printf("x: ");
    scanf("%d",&x);
    printf("y: ");
    scanf("%d",&y);
    printf("z: ");
    scanf("%d",&z);

    x<y ? (x<z ? printf("x\n"): printf("z\n")) : (y<z ? printf("y\n"): printf("z\n"));

    return 0;
}