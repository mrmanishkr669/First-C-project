#include<stdio.h>
int main(){
    int marks;
    printf("enter marks: ");
    scanf("%d", &marks);
    if(marks<=30){
        printf("Fail\n");
      }
     else if(marks <=50){
       printf("C\n"); 
     }
     else if(marks<= 60){
      printf("B\n");
     }
     else if(marks <= 70){
      printf("B+\n");
     }
     else if(marks <= 80){
      printf("A\n");
     }
     else if (marks <=100){
      printf("A+\n");
     }

     printf("Thank you");
     return 0;



    }
    
    
    
    
    