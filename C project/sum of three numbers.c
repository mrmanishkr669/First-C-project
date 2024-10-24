#include<stdio.h>
int main() {
    // Declear variables to store the numbers
    int num1, num2, num3 , num4;
    int sum;
    // Prompt the user to enter the numbers
    printf("enter the first number: ");
    scanf("%d", &num1);

    printf("enter the second number: ");
    scanf("%d", &num2);

    printf("print the third number:  ");
    scanf("%d", &num3);

    printf("enter the fourth number:   ");
    scanf("%d", &num4);
      
      // calculate the sum of the numbers
      sum = num1+num2+num3+num4;
      
      //print the result
      printf("The sum of %d, %d, %d and %d is %d.\n",num1,num2,num3,num4, sum);

      return 0;
      }