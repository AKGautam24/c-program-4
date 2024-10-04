#include<stdio.h>
void main() {
    int Temp;

    printf(" Enter the Temperature :");
    scanf("%d", &Temp);

    if(Temp<0){
    printf("the freezing weather");
    }else if (Temp>=0&&Temp<10){
    printf("very cold weather");
    }else if(10<=Temp&&Temp<20){
    printf("cold weather");
    }else if (20<=Temp&&Temp<30){
    printf("normal");}
    else if(30<=Temp&&Temp<40){
    printf("its hot");
    }else{
    printf("its very hot");
    }
}