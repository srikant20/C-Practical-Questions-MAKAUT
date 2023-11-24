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