#include<stdio.h>

int main(){
    printf("Adding First N Natural Number!!\n");
    int i=1,n,sum=0;
    printf("Please Enter Ending Point: ");
    scanf("%d",&n);
    while(i<=n){
        sum+=i;
        i++;
    }
    printf("Sum of First N natural Number is: %d\n",sum);
    return 0;
}