#include <stdio.h>

int main(){
    int num1,num2,result;
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    result= num1+num2;
    printf("Addition of %d and %d is: %d",num1,num2,result);
    return 0;
}