#include<stdio.h>

int main(){
    printf("Check Whether a Number is Prime or Not\n");
    int num,flag=1;
    printf("Enter Any Number: ");
    scanf("%d",&num);
    if(num==2){
        printf("It's Prime");
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("It's Prime Number");
    }else{
        printf("It is Not a Prime Number");
    }
    return 0;
}