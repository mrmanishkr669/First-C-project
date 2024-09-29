#include<stdio.h>
int main(){
    int side, volume;
        printf("enter the length of side :   ");
        scanf("%d", &side);

        volume = side * side * side ;

        printf("volume of cuube : is %d", volume );

    return 0;
}