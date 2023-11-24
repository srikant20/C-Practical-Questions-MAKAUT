#include<stdio.h>

int main(){
    int side1,side2,side3,total;
    printf("Enter Side 1 of Triangle: ");
    scanf("%d",&side1);
    printf("Enter Side 2 of Triangle: ");
    scanf("%d",&side2);
    printf("Enter Side 3 of Triangle: ");
    scanf("%d",&side3);
    total= side1+side2+side3;
    if(total==180 && side1>0 && side2>0 && side3>0){
        printf("It's a Valid Triangle");
    }else{
        printf("It's not a Valid Triangle");
    }
    return 0;
}