#include<stdio.h>
int main(){
	int i;
	printf("Enter number  (enter 0 to stop): ");
	do{
	 scanf("%d", &i);
	}
	while(i!=0);
	printf("Program ended!");
}
