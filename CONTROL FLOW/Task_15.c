#include <stdio.h>
int main() {
int a,b,c;
printf("the value of a is : ");
scanf("%d",&a);
printf("the value of b is : ");
scanf("%d",&b);
printf("the value of c is : ");
scanf("%d",&c);
if (a>b && a>c){
	printf("among %d and %d and %d  the greater one is %d ",a,b,c,a);
}
else if (b>a && b>c){
	printf("among %d and %d and %d  the greater one is %d ",a,b,c,b);
}
else{
	printf("among %d and %d and %d  the greater one is %d ",a,b,c,c);
}
return 0;
}