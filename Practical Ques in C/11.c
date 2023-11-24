#include <stdio.h>

int main(){
    printf("First 1-10 Natural Number!!\n");
    int i=1,n;
    printf("Enter Ending Point: ");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i++);
    }
    return 0;
}