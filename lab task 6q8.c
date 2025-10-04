#include<stdio.h>
int main(){

    int num = 121;
    int original = num;
    int reversed = 0, remainder;
    while (num > 0){
        remainder = num % 10;
        reversed = reversed*10+remainder;
        num/=10;
        }
    if (original == reversed)
        printf("%d is a palidrome", original);
    else 
        printf("%d is not a palindrome", original);
  
}


