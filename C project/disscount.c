#include<stdio.h>
    int main(){
        float bp, dic , fp ; // bp=book price, dic = discount, fp= final price
        printf("Enter the price : ");
        scanf("%f", &bp);
            if(bp>=3000){
                dic=(bp*30)/100;
                 fp= bp-dic;
                 printf("%f final amount is ", fp);
                    }
            else if(bp>= 2000){
            
                dic=(bp*20)/100;
                fp= bp-dic;
                 printf("%f final amount is ", fp);
                 }
            else if (bp>= 1000)
                 {
                    dic=(bp*10)/100;
                    fp=bp-dic;
                    printf("%f final amount is ", fp);
                 }
                 else{
                    printf("not discount ");
                 }
            
            return 0;
    }