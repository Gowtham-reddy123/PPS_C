#include <stdio.h>
int main() {
char c,a='a',e='e',i='i',o='o',u='u';
printf("insert a character to know it is a vowel or not ? ");
scanf("%c",&c);
if (c==a||c==e||c==i||c==o||c==u){
	printf("the character is a vowel ");
}
else{
printf("not a vowel");
}
return 0;
}