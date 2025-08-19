#include <stdio.h>
int main()
{
float SI,RATE;
int P,T;
printf("the value of principle is : ");
scanf("%d",&P);
printf("the time given is : ");
scanf("%d",&T);
printf("the Rate is 	: ");
scanf("%f",&RATE);
SI=P*T*RATE/100;
printf("the simple intrest of the above criteria is %.3f",SI);
return 0;
}
