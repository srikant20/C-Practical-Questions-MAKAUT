#include <stdio.h>

int main(){
    int num;
    printf("Check Entered Number is Divisible by 5 and 11 or not");
    printf("\nEnter any Number: ");
    scanf("%d",&num);
    if(num%5==0 && num%11==0){
        printf("%d is Divisible By 5 and 11",num);
    }else{
        printf("Sorry it's Not divisible by 5 and 11");
    }
    return 0;
}