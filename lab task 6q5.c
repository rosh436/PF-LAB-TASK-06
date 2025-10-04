#include<stdio.h>
int main(){
	int i, n=5, fact=1;
	for(i=n;i>=1;i--){
	fact=fact*i;
   }  
	printf("The factorial of n=5 is %d", fact);
	
}
