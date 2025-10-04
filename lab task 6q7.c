#include<stdio.h>
int main(){
	int i,n=10,a=0,b=1,next;
	for(i=1;i<=n;i++){
		printf("%d\t", a);
		next = a+b;
		a = b;
		b = next;
}

}
