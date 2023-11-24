#include <stdio.h>

int main(){
    int start,end;
    printf("Enter Start Point: ");
    scanf("%d",&start);
    printf("Enter End Point: ");
    scanf("%d",&end);
    for(int i=start;i<=end;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
    return 0;
}