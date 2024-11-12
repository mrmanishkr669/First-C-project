#include<stdio.h>
int main (){
    int num , n;
    printf("Enter the last term:");
    scanf("%d",&n);
    num =1;
    do{
        printf("%d\t",num);
        num = num+1;
    }
    while (num<n);
    return 0;
    
}