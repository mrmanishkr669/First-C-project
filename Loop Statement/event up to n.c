#include<stdio.h>
int main(){
    int num , n ;
    printf("Enter the last term :   ");
    scanf("%d", &n);
    num = 2;
    while(num<=n){
        printf("%d\t", num);
        num = num+2;

    }
    return 0;
    
}