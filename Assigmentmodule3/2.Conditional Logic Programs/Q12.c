//WAP to find maximum number among 3 numbers using ternary operator

#include <stdio.h>

int main() {
    int a, b, c;
    int max;
    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The maximum number is %d.\n", max);
}
