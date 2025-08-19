#include <stdio.h>
#define PI 3.141592f
int main()
{
float radius,circumference;
printf("the radius of circle is : ");
scanf("%f",&radius);
circumference=2*PI*radius;
printf("the circmference of the circle is %.8f",circumference);
return 0;
}