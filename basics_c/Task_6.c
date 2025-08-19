#include <stdio.h>
int main() {
int a=24,b=123;
a=a^b;
b=a^b;
a=a^b;
printf("the value of a is : %d\n",a);
printf("the value of b is : %d",b);
return 0;
}