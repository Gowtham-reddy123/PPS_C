#include <stdio.h>
int main() {
float c,f;
printf("give the Celsius value to convert into farienheit ");
scanf("%f",&c);
f=(c*9/5)+32;
printf("the value of farienheit for given %.7f",f);
return 0;
}