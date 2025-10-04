#include<stdio.h>
int main(){
	int a,b;
	printf("Enter values for a and then b:");
	scanf("%d %d", &a, &b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("The value of a and b after swapping is %d and %d respectively", a,b);
}
