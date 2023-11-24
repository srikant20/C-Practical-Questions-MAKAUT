#include<stdio.h>

int main(){
    printf("Reverse of a Number!!\n");
    int num,temp,count=0,rev=0;
    printf("Enter Any Number: ");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        temp/=10;
        count++;
    }
    temp=num;
    while(num>0){
        int rem= num%10;
        rev= rev*10+rem;
        num/=10;
    }
    printf("Reverse of %d is: %d\n",temp,rev);
}