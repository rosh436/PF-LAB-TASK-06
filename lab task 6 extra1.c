#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a number:");
    scanf("%d", &a);
    printf("Enter another number:");
    scanf("%d", &b);
    printf("Common bits (a & b): %d", a & b);
}
