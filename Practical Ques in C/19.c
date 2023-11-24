#include<stdio.h>

int main(){
    printf("Adding Digits of a Number.\n");
    int num,temp,sumofDigits=0;
    printf("Enter any Number: ");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        int rem= temp%10;
        sumofDigits+=rem;
        temp/=10;
    }
    printf("Sum of Digits = %d",sumofDigits);
    return 0;
}