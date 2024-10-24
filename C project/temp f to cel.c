#include<stdio.h>

int main(){
    float celsius, fahrenheit;
    printf("enter the tempreature in fahrenheit:");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32)*5/9;

    printf("the tempreature in celsius is %f", celsius);

    return 0;
}