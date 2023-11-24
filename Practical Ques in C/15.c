#include<stdio.h>

int main(){
    printf("Even Numbers in a given Range\n");
    int start,end;
    printf("Enter Starting Point: ");
    scanf("%d",&start);
    printf("Enter Ending Point: ");
    scanf("%d",&end);
    while(start<=end){
        if(start%2==0){
            printf("%d\n",start);
        }
        start++;
    }
    return 0;
}