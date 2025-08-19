#include <stdio.h>
int main() {
int x;
printf("the value of x is :");
scanf("%d",&x);
if (x>0)
	{
	printf("the value is + ");
	}
else if (x==0)
	{
	printf("the value is zero");
	}
else{
	printf("the value is negative");
}
return 0;
}