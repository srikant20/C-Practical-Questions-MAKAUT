#include<stdio.h>

int main(){
    printf("Numbers Divisible by 3 or 5 in Given Range\n");
    int start,end;
    printf("Enter Starting Point: ");
    scanf("%d",&start);
    printf("Enter Ending Point: ");
    scanf("%d",&end);
    while(start<=end){
        if(start%3==0 || start%5==0){
            printf("%d\n",start);
        }
        start++;
    }
    return 0;
}