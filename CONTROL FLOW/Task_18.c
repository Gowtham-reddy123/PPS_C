#include <stdio.h>
int main() {
	int total;
	printf("the total marks you awarded in your exam is : ");
	scanf("%d",&total);
	if (total>600){
		printf("INVALID MARKS ");
	}
	else if (total >585 && total<=600){
		printf("A +GRADE");
		}

	else if (total >570 && total<=585){
		printf("A GRADE");
		}
	else if (total>530 && total<=570){
		printf("B GRADE ");
		}
	else if (total>490 && total<=530){
		printf("C GRADE ");
	}
	
	else {
		printf("FAIL");
	} 
	return 0;
}	