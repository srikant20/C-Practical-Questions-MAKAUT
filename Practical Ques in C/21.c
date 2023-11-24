#include<stdio.h>

int main(){
    printf("Check Entered Number is Armstrong or Not\n");
    int num,sum=0;
    printf("Enter any 3 Digits No: ");
    scanf("%d",&num);
    int temp=num;
    while(temp>0){
        int rem= temp%10;
        sum+= rem*rem*rem;
        temp/=10;
    }
    if(num==sum){
        printf("It's an Armstrong Number.");
    }else{
        printf("It's Not an Armstrong Number.");
    }
    return 0;
}