#include <stdio.h>
#include <math.h>
int main() {
int x,y;
double r;
printf("the value of x is : ");
scanf("%d",&x);
printf("the value of y is : ");
scanf("%d",&y);
r=pow(x,y);
printf("the base is %d and exponent is %d and result is %.7f",x,y,r);
return 0;
}


