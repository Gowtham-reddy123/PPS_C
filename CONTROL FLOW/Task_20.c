#include <stdio.h>
int main(){
int a,b;
printf("enter the value of a is :");
scanf("%d",&a);
for (int b=1; b <= 10;b++){
	printf("%d x %d= %d\n",a,b,a*b);
	}
return 0;
}