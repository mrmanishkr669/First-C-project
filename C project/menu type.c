#include<stdio.h>
int main(){
    int n,a,b,sum,sub,mul,div;
    printf("Enter the value of a :- ");
    scanf("%d",&a);
    printf("Enter the value of b :- ");
    scanf("%d",&b);
    printf("Enter the number 1 to 4:- ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:sum=a+b;
    printf("\n sum is %d",sum);
        break;
    case 2:sub=a-b;
    printf("\n sub is %d", sub);
        break;
    case 3:mul=a*b;
    printf("\n mul is %d",mul);
        break;
    case 4:div=a/b;
    printf("\n div is %d",div);
        break;
    default:
    printf("\n Invaild");    }
    return 0;
}