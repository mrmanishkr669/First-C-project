#include<stdio.h>

    int main(){
        int year;
        printf("Enter the year :");
        scanf("%d", &year);
        if(year%4==0)
        {printf("This is leap year ");}
        else{
            printf("This is not leap year");

        }



        return 0;
    }