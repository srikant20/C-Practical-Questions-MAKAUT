#include<stdio.h>

int main(){
    int year;
    printf("Enter any Year: ");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 || year%400==0){
        printf("It's a Leap Year!!");
    }else{
        printf("It's Not a Leap Year!!");
    }
}