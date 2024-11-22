#include<stdio.h>
int main(){
int n, rem,sum = 0;
printf("Enter three digit number :- ");
scanf("%d", &n);
while (n>=1){
    rem=n%10;
    sum=sum+rem;
    n=n/10;  }
    printf("\n Sum of three digit is :- %d",sum);
    return 0;

}