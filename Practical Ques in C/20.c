#include <stdio.h>

int main(){
    printf("Fibonacci Series in a Given Range: \n");
    int start,end;
    printf("Enter Starting Point: ");
    scanf("%d",&start);
    printf("Enter Ending Point: ");
    scanf("%d",&end);
    int num1=0,num2=1,nextNum=0;
    for(int i=0;i<end;i++){
        nextNum=num1+num2;
        if(nextNum>=start && nextNum<=end){
            printf("%d ",nextNum);
        }
        num1=num2;
        num2=nextNum;
    }
    return 0;
}