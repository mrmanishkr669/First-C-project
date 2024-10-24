#include<stdio.h>
  int main (){
    float P , R, T, SI;
    printf("entr the principal amount:");
    scanf("%f", &P);
    printf("enter the rate of interest: ");
    scanf("%f", &R);
    printf("enter the time period:");
    scanf("%f", &T);
    SI = (P*R*T)/100;
    printf("the simple interest id %f", SI);
    return 0;

  }