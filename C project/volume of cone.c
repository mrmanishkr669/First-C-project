#include<stdio.h>
int main(){
        float radius, height, volume;
        printf("enter the radius:  ");
        scanf("%f", &radius);

        printf("enter the height:    ");
        scanf("%f", &height);
        volume = 1/3*(3.14*radius*radius*height);

        printf("volume of cone: is %f", volume);

    return 0;
    }