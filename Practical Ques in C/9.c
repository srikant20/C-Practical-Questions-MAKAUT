#include<stdio.h>

int main(){
    int salary,hra,da;
    float total;
    printf("Enter Employees Salary: ");
    scanf("%d",&salary);
    if(salary<=10000){
        hra=20;da=80;
        total= salary+(salary*0.20)+(salary*0.80);
        printf("Employees Total Salary is: %.2f",total);
    }else if(salary<=20000){
        hra=25;da=90;
        total=salary+(salary*0.25)+(salary*.90);
        printf("Employees Total Salary is: %.2f",total);

    }else{
        hra=30;da=95;
        total= salary+(salary*0.30)+(salary*0.95);
        printf("Employees total Salary is: %.2f",total);
    }
}