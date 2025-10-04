#include <stdio.h>

int main() {
    int i,n = 7;
    int isPrime = 1;

  if (n <= 1) {
        isPrime = 0;
} else{
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break; }
        }
}

    if (isPrime)
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number", n);

    return 0;
}

