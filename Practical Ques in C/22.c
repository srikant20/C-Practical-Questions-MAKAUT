#include <stdio.h>
int getGCD(int num1,int num2);
int getLCM(int num1,int num2);
int main(){
    printf("L.C.M and G.C.D of Two Numbers \n");
    int num1,num2,gcd,lcm;
    printf("Enter first Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    gcd= getGCD(num1,num2);
    lcm= getLCM(num1,num2);
    printf("GCD of %d and %d is: %d\n",num1,num2,gcd);
    printf("LCM of %d and %d is: %d\n",num1,num2,lcm);
}

int getGCD(int num1,int num2){
    int smallest,gcd;
    if(num1>num2){
        smallest=num1;
    }else{
        smallest=num2;
    }
    while(1){
        if(num1%smallest==0 && num2%smallest==0){
            gcd=smallest;
            break;
        }else{
            smallest--;
        }
    }
    return gcd;
}

int getLCM(int num1,int num2){
    int greater,lcm;
    if(num1<num2){
        greater=num1;
    }else{
        greater=num2;
    }
    while(1){
        if(greater%num1==0 && greater%num2==0){
            lcm=greater;
            break;
        }else{
            greater++;
        }
    }
    return lcm;
}
