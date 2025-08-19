#include <stdio.h>
int main()
{
int a,b;
printf("the value of a is : ");
scanf("%d",&a);
printf("the value of b is : ");
scanf("%d",&b);
if (a>b){
printf("the greater number between %d and %d is %d",a,b,a);
}
else{
printf("the greater  number between %d and %d is %d",a,b,b);
}
return 0;
}