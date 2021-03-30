#include <stdio.h>

int main(){
    int precVal=0;
    printf("Enter Precision Value: ");
    scanf("%d",&precVal);
    double c0, c20, c40, c60, c80, c100;
    c0=(5.0/9.0)*(0-32);
    c20=(5.0/9.0)*(20-32);
    c40=(5.0/9.0)*(40-32);
    c60=(5.0/9.0)*(60-32);
    c80=(5.0/9.0)*(80-32);
    c100=(5.0/9.0)*(100-32);
    printf("Farenheit\tCelcius\n");
    printf("0\t%*.*lf\n",15,precVal,c0);
    printf("20\t%*.*lf\n",15,precVal,c20);
    printf("40\t%*.*lf\n",15,precVal,c40);
    printf("60\t%*.*lf\n",15,precVal,c60);
    printf("80\t%*.*lf\n",15,precVal,c80);
    printf("100\t%*.*lf\n",15,precVal,c100);
    return 0;
}