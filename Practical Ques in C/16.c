#include<stdio.h>

int main(){
    printf("Factorial of a Given Number!!\n");
    int num,fact=1;
    printf("Enter Any Number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    printf("Factorial of %d is: %d\n",num,fact);
    return 0;
}