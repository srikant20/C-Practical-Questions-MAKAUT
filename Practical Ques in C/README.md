1.  Write a c program to display the word "Welcome".

> Source Code:

```C
#include <stdio.h>
int main(){
   printf("Welcome");
   return 0;
}
```

> Expected Output:

    Welcome

2. Write a c program to take a variable int and input the value from the user and display it.

> Source Code:

```C
#include <stdio.h>

int main(){
    int num;
    printf("Enter Any Number: ");
    scanf("%d",&num);
    printf("You Have Entered: %d",num);
    return 0;
}
```

> Expected Output:

Enter Any Number: 5
You Have Entered: 5

3. Write a c program to add 2 numbers entered by the user and display the result.

> Source Code:

```C
#include <stdio.h>

int main(){
    int num1,num2,result;
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    result= num1+num2;
    printf("Addition of %d and %d is: %d",num1,num2,result);
    return 0;
}
```

> Expected Output:

    Enter First Number: 10
    Enter Second Number: 15
    Addition of 10 and 15 is: 25

4. Write a c program to calculate the area and perimeter of a circle.

> Source Code:

```C
#include <stdio.h>
// #define PI 3.14
#include <math.h>

int main(){
    int radius,area,perimeter;
    const double pi= 3.141;
    printf("Enter Radius of a Circle: ");
    scanf("%d",&radius);
    area= pi*pow(radius,2);
    perimeter= 2*pi*radius;
    printf("Area of a Circle: %d\n",area);
    printf("Perimeter of a Circle: %d",perimeter);
    return 0;
}
```

> Expected Output:

    Enter Radius of a Circle: 5
    Area of a Circle: 78
    Perimeter of a Circle: 31

5. Write a C program to find maximum between two numbers.

> Source Code:

```C
#include <stdio.h>

int main(){
    int num1,num2,max;
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    if(num1>num2){
        printf("Your First Number %d is Greater",num1);
    }else{
        printf("Your Second Number %d is Greater",num2);
    }
    return 0;
}
```

> Expected Output:

    Enter First Number: 10
    Enter Second Number: 50
    Your Second Number 50 is Greater

6. Write a C program to check whether a number is divisible by 5 and 11 or not.

> Source Code:

```C
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
```

> Expected Output:

    Check Entered Number is Divisible by 5 and 11 or not
    Enter any Number: 10
    Sorry it's Not divisible by 5 and 11

7. Write a C program to input angles of a triangle and check whether triangle is valid or not.

> Source Code:

```C
#include<stdio.h>

int main(){
    int side1,side2,side3,total;
    printf("Enter Side 1 of Triangle: ");
    scanf("%d",&side1);
    printf("Enter Side 2 of Triangle: ");
    scanf("%d",&side2);
    printf("Enter Side 3 of Triangle: ");
    scanf("%d",&side3);
    total= side1+side2+side3;
    if(total==180 && side1>0 && side2>0 && side3>0){
        printf("It's a Valid Triangle");
    }else{
        printf("It's not a Valid Triangle");
    }
    return 0;
}
```

> Expected Output:

    Enter Side 1 of Triangle: 5
    Enter Side 2 of Triangle: 6
    Enter Side 3 of Triangle: 4
    It's not a Valid Triangle

8. Write a C program to check whether a year is leap year or not.

> Source Code:

```C
#include<stdio.h>

int main(){
    int year;
    printf("Enter any Year: ");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 || year%400==0){
        printf("It's a Leap Year!!");
    }else{
        printf("It's Not a Leap Year!!");
    }
}
```

> Expected Output:

    Enter any Year: 2023
    It's Not a Leap Year!!

9. Write a C program to input basic salary of an employee and calculate its Gross salary according to following: Basic Salary <= 10000 : HRA = 20%, DA = 80% Basic Salary <= 20000 : HRA = 25%, DA = 90% Basic Salary > 20000 : HRA = 30%, DA = 95% .

> Source Code:

```C
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
```

> Expected Output:

Enter Employees Salary: 13000
Employees Total Salary is: 27950.00

10. Write a c program to print “welcome” 10 times.

> Source Code:

```C
#include<stdio.h>

int main(){
    for(int i=0;i<=10;i++){
        printf("Welcome\n");
    }
}
```

> Expected Output:

    Welcome
    Welcome
    Welcome
    Welcome
    Welcome
    Welcome
    Welcome
    Welcome
    Welcome
    Welcome
    Welcome

11. Write a c program to print first n natural numbers using while loop.

> Source Code:

```C
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
```

> Expected Output:

    First 1-10 Natural Number!!
    Enter Ending Point: 10
    1
    2
    3
    4
    5
    6
    7
    8
    9
    10

12. Write a c program to print all the odd numbers in a given range.

> Source Code:

```C
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
```

> Expected Output:

    Enter Start Point: 5
    Enter End Point: 20
    5
    7
    9
    11
    13
    15
    17
    19

13. Write a c program to add first n numbers using while loop

> Source Code

```C
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
```

> Expected Output:

    Adding First N Natural Number!!
    Please Enter Ending Point: 10
    Sum of First N natural Number is: 55

14. Write a c program to print all numbers divisible by 3 or 5 in a given range.

> Source Code:

```C
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
```

> Expected Output:

    Numbers Divisible by 3 or 5 in Given Range
    Enter Starting Point: 100
    Enter Ending Point: 150
    100
    102
    105
    108
    110
    111
    114
    115
    117
    120
    123
    125
    126
    129
    130
    132
    135
    138
    140
    141
    144
    145
    147
    150

15. Write a c program to add even numbers

> Source Code:

```C
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
```

> Expected Output:

    Even Numbers in a given Range
    Enter Starting Point: 15
    Enter Ending Point: 50
    16
    18
    20
    22
    24
    26
    28
    30
    32
    34
    36
    38
    40
    42
    44
    46
    48
    50

16. Write a c program to find the factorial of a given number.

> Source Code:

```C
#include<stdio.h>

int main(){
    printf("Factorial of a Given Number!!\n");
    int num,fact=1;
    printf("Enter Any Number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    printf("Factorial of %d is: %d\n",num,fact);
    return 0;
}
```

> Expected Output:

    Factorial of a Given Number!!
    Enter Any Number: 5
    Factorial of 5 is: 120

17. Write a c program to find whether a number

> Source Code:

```C
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
```

> Expected Output:

    Check Whether a Number is Prime or Not
    Enter Any Number: 55
    It is Not a Prime Number

18. Write a c program to print the reverse of a number

> Source Code:

```C
#include<stdio.h>

int main(){
    printf("Reverse of a Number!!\n");
    int num,temp,count=0,rev=0;
    printf("Enter Any Number: ");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        temp/=10;
        count++;
    }
    temp=num;
    while(num>0){
        int rem= num%10;
        rev= rev*10+rem;
        num/=10;
    }
    printf("Reverse of %d is: %d\n",temp,rev);
}
```

> Expected Output:

    Reverse of a Number!!
    Enter Any Number: 145
    Reverse of 145 is: 541

19. Write a c program to add the digits of a number.

> Source Code:

```C
#include<stdio.h>

int main(){
    printf("Adding Digits of a Number.\n");
    int num,temp,sumofDigits=0;
    printf("Enter any Number: ");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        int rem= temp%10;
        sumofDigits+=rem;
        temp/=10;
    }
    printf("Sum of Digits = %d",sumofDigits);
    return 0;
}
```

> Expected Output:

    Adding Digits of a Number.
    Enter any Number: 154
    Sum of Digits = 10

20. Write a c program to print the fibonacci series in a given range.

> Source Code:

```C
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
```

> Expected Output:

    Fibonacci Series in a Given Range:
    Enter Starting Point: 1
    Enter Ending Point: 10
    1 2 3 5 8

21. Write a c program to check whether a number is an Armstrong number or not.

> Source Code:

```C
#include<stdio.h>

int main(){
    printf("Check Entered Number is Armstrong or Not\n");
    int num,sum=0;
    printf("Enter any 3 Digits No: ");
    scanf("%d",&num);
    int temp=num;
    while(temp>0){
        int rem= temp%10;
        sum+= rem*rem*rem;
        temp/=10;
    }
    if(num==sum){
        printf("It's an Armstrong Number.");
    }else{
        printf("It's Not an Armstrong Number.");
    }
    return 0;
}
```

> Expected Output:

    Check Entered Number is Armstrong or Not
    Enter any 3 Digits No: 153
    It's an Armstrong Number.

22. Write a c program to find G.C.D. and L.C.M. of two numbers.

> Source Code:

```C
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
```

> Expected Output:

    L.C.M and G.C.D of Two Numbers
    Enter first Number: 12
    Enter Second Number: 28
    GCD of 12 and 28 is: 4
    LCM of 12 and 28 is: 84
