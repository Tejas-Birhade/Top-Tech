//5. WAP to print factorial of given number

#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;

    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial of a negative number does not exist.\n");
    } else {
        printf("Factorial of %d is %llu\n", number, factorial(number));
    }

}
