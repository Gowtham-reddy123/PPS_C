#include <stdio.h>
int main(){
int y;
printf("insert any year to know whether it is leap year or not?");
scanf("%d",&y);
if ((y%400==0) ||(y%100!=0 && y%4==0 )){
	printf("the %d is leap year ",y);
}
else{
	printf("it is not a leap year ");
}
return 0;
}