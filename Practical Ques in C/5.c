#include <stdio.h>

int main(){
    int num1,num2,max;
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    if(num1>num2){
        printf("Your First Number %d is Greater",num1);
    }else{
        printf("Your Second Number %d is Greater",num2);
    }
    return 0;
}