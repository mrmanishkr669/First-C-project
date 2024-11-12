#include<stdio.h>
int main(){
    int num , n ;
    printf("Enter the last term :  ");
    scanf("%d",&n);
    while(num<=n){
        printf("%d\t", num);
        num = num +1;
    }
        return 0;

    }