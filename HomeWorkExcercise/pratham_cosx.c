#include <stdio.h>
 
float pow(float n,int power){
  float result = 1.0;
  for(int i = 1; i <= power; i++){
    result *= n;
  }
  return result;
}
 
int fact(int n){
  int factorial = 1;
  for(int i = 1; i <= n;i++){
    factorial *= i;
  }
  return factorial;
}
 
int main ()
{
  float x,cos;
  int n;
  cos = 1.0;
  scanf("%f",&x);
  scanf("%d",&n);
  while(1){
    if(x == 0){
      return;
    }
    for(int i = 1; i < n;i++){
      cos += pow(-1.0,i)*pow(x,2*i)/fact(2*i)
    }
    scanf("%f",&x);
    scanf("%d",&n);
  }
  printf("%.5f",cos);
 
  return 0;
}