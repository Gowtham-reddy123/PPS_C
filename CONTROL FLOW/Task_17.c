#include <stdio.h>
int main()
{
char operator;
printf("choose any operator '+' '-' '/' '* ");
scanf(" %c",&operator);
double x,y;
printf("enter the value of x is : ");
scanf("%lf",&x);
printf("enter the value of y is : ");
scanf("%lf",&y);
double result;
switch(operator) {
	case '+':
		printf("%lf",result=x+y);
		break;
	case '-':
		printf("%lf",result=x-y);
		break;
	case '/':
		printf("%lf",result=x/y);
		break;
	case '*':
		printf("%lf",result=x*y);
		break;
	default:
		printf("invalid number:");
}
return 0; 
}