//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int power1 = number;
    int power2 = number * number;
    int power3 = number * number * number;
    printf("First power (%d^1) = %d\n", number, power1);
    printf("Second power (%d^2) = %d\n", number, power2);
    printf("Third power (%d^3) = %d\n", number, power3);
}
